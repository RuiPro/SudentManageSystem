#ifndef CLIENT_MYSQL_H
#define CLIENT_MYSQL_H

#include <iostream>
#include <mysql.h>
#include <chrono>
using namespace std;
using namespace chrono;

struct MySQLQueryResult {
	MYSQL_RES* m_result = nullptr;				// 保存SQL查询的结果集
	unsigned int m_field_num = 0;				// 字段数
	MYSQL_FIELD* m_field_arr = nullptr;			// 保存字段的结构体数组
	unsigned long* m_fetch_lengths = nullptr;	// 字段对应的值大小
	MYSQL_ROW m_row = nullptr;					// 一行数据

	// 遍历结果集
	bool nextRow() {
		if (m_result != nullptr) {
			m_row = mysql_fetch_row(m_result);
			m_fetch_lengths = mysql_fetch_lengths(m_result);
			if (m_row != nullptr) {
				return true;
			}
		}
		return false;
	}
	// 从结果集的某一行中取出某个值
	string rowValue(unsigned int index) {
		if (index >= m_field_num) {
			return string();
		}
		char* val = m_row[index];
		if (val == nullptr) return string();
		return string(val, m_fetch_lengths[index]);
	}
	// 清除结果集
	void clear() {
		m_field_num = 0;
		m_field_arr = nullptr;
		m_fetch_lengths = nullptr;
		m_row = nullptr;
		if (m_result != nullptr) {
			mysql_free_result(m_result);
			m_result = nullptr;
		}
	}
};

class MySQLClient {
public:
	MySQLClient();
	~MySQLClient();
	// 连接数据库
	bool connect(const string& user, const string& passwd, const string& dbName, const string& ip, unsigned short port = 3306);
	// 更新数据库: insert, update, delete
	bool update(const string& sql);
	// 查询数据库
	bool query(const string& sql);
	// 事务操作
	bool transaction();
	// 提交事务
	bool commit();
	// 事务回滚 
	bool rollback();

	// 判断是否含有数据表
	bool hasTable(const string& table_name);

	// 用于数据库连接池
	// 刷新起始的空闲时间点
	void resetIdleTime();
	// 计算连接空闲的时长
	long long getIdleTime();

	// 查询的结果集
	MySQLQueryResult* query_result = nullptr;
private:
	MYSQL* m_client = nullptr;
	steady_clock::time_point m_alivetime;
};

#endif  // !CLIENT_MYSQL_H