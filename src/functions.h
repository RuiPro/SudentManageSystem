#ifndef FUNCTION_H
#define FUNCTION_H

#include <QString>
#include <QFile>
#include <QByteArray>
#include <QStringList>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QDebug>
#include "sql/client_mysql.h"
#include "sql/client_sqlite.h"

// 保存程序运行配置的结构体
struct Config {
	QString m_env_path;             // 保存程序路径

	bool m_use_mysql;				// 默认false使用sqlite, 为true时使用mysql
	QString m_mysql_host;
	unsigned short m_mysql_port;
	QString m_mysql_database;
	QString m_mysql_username;
	QString m_mysql_passwd;

	// 保存当前登录用户的信息		!只有在登陆成功后值才有效！
	unsigned int m_user_id;
	QString m_user_nickname;
	int m_user_gender;

	// sql客户端
	MySQLClient* m_mysql_c = nullptr;
	SQLiteClient* m_sqlite_c = nullptr;
};

bool readConfig(Config* config);		// 从config.json中读取配置保存到Config变量，如果读取到了非法json或错误，重置配置
bool createConfig(Config* config);		// 如果没有配置文件，创建并初始化配置文件
bool resetConfig(Config* config);       // 重置配置文件：删除再重新创建配置文件，并恢复默认值
bool checkDatabase(Config* config);		// 连接数据库，并检查数据库中数据表是否存在(不会检查表字段)，不存在则创建，失败返回false
bool checkToken(int token);				// 判断注册口令是否合法
// 使用密码进行注册，从100000001开始尝试注册，成功返回注册的账号，失败返回0
unsigned int signIn(Config* config, const QString& passwd);

bool setUserNickname(Config* config, unsigned int user_id, const QString& new_nickname);	// 修改教师昵称
bool setUserGender(Config* config, unsigned int user_id, int gender);						// 修改教师性别
bool checkPasswd(Config* config, unsigned int user_id, const QString& passwd);				// 检查密码
bool hasAccount(Config* config, unsigned int account_id);									// 检查是否是否存在账号
bool resetPasswd(Config* config, unsigned int account_id, const QString& new_passwd);		// 修改新密码

struct Student {
	unsigned int m_id = 0;
	QString m_name;
	unsigned short m_age = 0;
	char m_gender = 0;	// 性别，0男 1女
	unsigned short m_grade = 0;
	unsigned short m_class = 0;
};
struct Course {
	unsigned int m_id = 0;
	QString m_name;
};
struct Exam {
	unsigned int m_id = 0;
	QString m_name;
	unsigned short m_data_year = 0;
	unsigned short m_data_month = 0;
	unsigned short m_data_day = 0;
};
struct Score {
	unsigned int m_exam_id = 0;
	unsigned int m_student_id = 0;
	unsigned int m_course_id = 0;
	unsigned int m_score = 0;
};
struct ScoreSet {
	unsigned int m_student_id;
	QString m_student_name;
	unsigned int m_exam_id;
	QString m_exam_name;
	QList<unsigned int> m_scores;		// 各科成绩，其大小为m_course_list，内部的每个值与m_course_list的元素严格对应
	unsigned int m_total_point;
};

bool hasStudent(Config* config, unsigned int id);								// 检测学生是否存在
bool addStudent(Config* config, const Student& student);						// 添加学生
bool editStudent(Config* config, const Student& student, unsigned int old_id);	// 编辑学生
bool removeStudent(Config* config, unsigned int id);							// 移除学生

bool hasCourse(Config* config, unsigned int id);								// 检测是否存在该课程
bool addCourse(Config* config, const Course& course);							// 添加课程
bool editCourse(Config* config, const Course& course, unsigned int old_id);		// 编辑课程
bool removeCourse(Config* config, unsigned int id);								// 移除课程

bool hasExam(Config* config, unsigned int id);									// 检测是否存在该场考试
bool addExam(Config* config, const Exam& exam);									// 添加考试
bool editExam(Config* config, const Exam& exam, unsigned int old_id);			// 编辑考试
bool removeExam(Config* config, unsigned int id);								// 移除考试

bool hasScore(Config* config, const Score& score);								// 检测是否存在成绩
bool insertScore(Config* config, const Score& score);							// 插入成绩
bool editScore(Config* config, const Score& score);								// 修改某个成绩，传入要更新的成绩即可
bool removeScore(Config* config, const Score& score);							// 删除成绩

#endif // !FUNCTION_H