#include "client_mysql.h"

MySQLClient::MySQLClient() {
	m_client = mysql_init(nullptr);
	mysql_set_character_set(m_client, "utf8");
	query_result = new MySQLQueryResult;
}

MySQLClient::~MySQLClient() {
	if (m_client != nullptr) {
		mysql_close(m_client);
	}
	query_result->clear();
	if (query_result != nullptr) {
		delete query_result;
		query_result = nullptr;
	}
}

bool MySQLClient::connect(const string& user, const string& passwd, const string& dbName, const string& ip, unsigned short port) {
	MYSQL* ptr = mysql_real_connect(m_client, ip.c_str(), user.c_str(), passwd.c_str(), dbName.c_str(), port, nullptr, 0);
	return (ptr != nullptr);
}

bool MySQLClient::update(const string& sql) {
	if (mysql_query(m_client, sql.c_str())) {
		return false;
	}
	return true;
}

bool MySQLClient::query(const string& sql) {
	query_result->clear();		// 释放上一次的查询结果
	if (mysql_query(m_client, sql.c_str())) {
		return false;
	}
	// 保存结果集
	query_result->m_result = mysql_store_result(m_client);
	query_result->m_field_num = mysql_num_fields(query_result->m_result);
	query_result->m_field_arr = mysql_fetch_fields(query_result->m_result);
	query_result->m_fetch_lengths = mysql_fetch_lengths(query_result->m_result);
	return true;
}

bool MySQLClient::transaction() {
	return mysql_autocommit(m_client, false);
}

bool MySQLClient::commit() {
	bool ret = mysql_commit(m_client);
	mysql_autocommit(m_client, true);
	return ret;
}

bool MySQLClient::rollback() {
	bool ret = mysql_rollback(m_client);
	mysql_autocommit(m_client, true);
	return ret;
}

bool MySQLClient::hasTable(const string& table_name) {
	string sql = "SHOW TABLES LIKE '";
	sql.append(table_name);
	sql.append("'");
	if (!query(sql)) {
		return false;
	}
	while (this->query_result->nextRow()) {
		if (table_name == this->query_result->rowValue(0)) return true;
	}
	return false;
}

void MySQLClient::resetIdleTime() {
	m_alivetime = steady_clock::now();
}

long long MySQLClient::getIdleTime() {
	nanoseconds res = steady_clock::now() - m_alivetime;
	milliseconds millsec = duration_cast<milliseconds>(res);
	return millsec.count();
}
