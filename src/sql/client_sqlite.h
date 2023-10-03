#ifndef CLIENT_SQLITE_H
#define CLIENT_SQLITE_H

#include <iostream>
#include <sqlite3.h>
#include <chrono>
#include <vector>
using namespace std;
using namespace chrono;

struct SQLiteQueryResult {
	sqlite3_stmt* m_stmt = nullptr;
	unsigned int m_column_count = 0;				// 字段数
	vector<string> m_column_name;					// 字段数组

	// 遍历结果集
	bool nextRow() {
		if (m_stmt != nullptr) {
			if (sqlite3_step(m_stmt) == SQLITE_ROW) {
				return true;
			}
		}
		return false;
	}
	// 从结果集的某一行中取出某个值
	string rowValue(unsigned int index) {
		if (index >= m_column_count) {
			return string();
		}
		const char* val = reinterpret_cast<const char*>(sqlite3_column_text(m_stmt, index));
		if (val == nullptr) return string();
		return string(val, sqlite3_column_bytes(m_stmt, index));
	}
	// 清除结果集
	void clear() {
		m_column_count = 0;
		m_column_name.clear();
	}
	// 获取值类型
	int column_type(unsigned int index) {
		if (index >= m_column_count) {
			return -1;
		}
		return sqlite3_column_type(m_stmt, index);
	}
};

class SQLiteClient {
public:
	SQLiteClient();
	~SQLiteClient();
	// 打开数据库
	bool opendb(const string& dbName, int flag = SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE);
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
	// 获取错误信息
	string errmsg();

	// 判断是否含有数据表
	bool hasTable(const string& table_name);

	// 用于数据库连接池
	// 刷新起始的空闲时间点
	void resetIdleTime();
	// 计算连接空闲的时长
	long long getIdleTime();

	// 查询的结果集
	SQLiteQueryResult* query_result = nullptr;
private:
	sqlite3* m_db = nullptr;
	steady_clock::time_point m_alivetime;
};

#endif  // !CLIENT_SQLite_H