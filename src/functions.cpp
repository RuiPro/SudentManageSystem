#include "functions.h"
#include "sql.h"

bool readConfig(Config* config) {
	QString config_path = config->m_env_path + "config.json";
	QByteArray config_text;
	QFile config_file(config_path);
	config_file.open(QIODevice::ReadWrite);
	if (!config_file.isOpen()) return false;
	config_text = config_file.readAll();
	config_file.close();

	QJsonDocument json_doc = QJsonDocument::fromJson(config_text);
	if (!json_doc.isNull() && json_doc.isObject()) {
		QJsonObject json_config_obj = json_doc.object();
		if (json_config_obj.value("use_mysql").isBool()) {
			config->m_use_mysql = json_config_obj.value("use_mysql").toBool();
		}
		if (json_config_obj.value("mysql_config").isObject()) {
			QJsonObject json_mysql_obj = json_config_obj.value("mysql_config").toObject();
			if (json_mysql_obj.value("host").isString()) {
				config->m_mysql_host = json_mysql_obj.value("host").toString();
			}
			if (json_mysql_obj.value("port").isDouble()) {
				config->m_mysql_port = json_mysql_obj.value("port").toInt();
			}
			if (json_mysql_obj.value("database").isString()) {
				config->m_mysql_database = json_mysql_obj.value("database").toString();
			}
			if (json_mysql_obj.value("username").isString()) {
				config->m_mysql_username = json_mysql_obj.value("username").toString();
			}
			if (json_mysql_obj.value("passwd").isString()) {
				config->m_mysql_passwd = json_mysql_obj.value("passwd").toString();
			}
		}
		if (config->m_use_mysql) {
			qDebug() << "Use MySQL: " + config->m_mysql_host + ":" + QString::number(config->m_mysql_port) + ", database: " + config->m_mysql_database;
		}
		else {
			qDebug() << "Use SQLite.";
		}
		return true;
	}
	else {
		qDebug() << "Invalid config.json. Reseting...";
		return resetConfig(config);
	}
}

bool createConfig(Config* config) {
	QString config_path = config->m_env_path + "config.json";
	QFile config_file(config_path);
	if (config_file.exists()) return false;

	qDebug() << "File config.json does not exist, creating...";
	QJsonObject config_json;
	config_json.insert("use_mysql", false);
	QJsonObject sql_json;
	sql_json.insert("host", "127.0.0.1");
	sql_json.insert("port", 3306);
	sql_json.insert("database", "sms");
	sql_json.insert("username", "root");
	sql_json.insert("passwd", "");
	config_json.insert("mysql_config", sql_json);

	QJsonDocument json_doc(config_json);
	QByteArray json_text = json_doc.toJson();
	config_file.open(QFile::WriteOnly);
	int ret = config_file.write(json_text);
	config_file.close();
	if (ret > 0) {
		qDebug() << "File config.json created successfully.";
		return true;
	}
	return false;
}

bool resetConfig(Config* config) {
	QString config_path = config->m_env_path + "config.json";
	QFile config_file(config_path);
	if (!config_file.exists()) return true;
	if (!config_file.remove()) return false;

	bool ret = createConfig(config);
	if (ret) {
		config->m_use_mysql = false;
		config->m_mysql_host = "127.0.0.1";
		config->m_mysql_port = 3306;
		config->m_mysql_database = "sms";
		config->m_mysql_username = "root";
		config->m_mysql_passwd = "";
	}
	return ret;
}

bool checkDatabase(Config* config) {
	try {
		if (config->m_use_mysql) {
			bool ret = config->m_mysql_c->connect(config->m_mysql_username.toStdString(),
				config->m_mysql_passwd.toStdString(),
				config->m_mysql_database.toStdString(),
				config->m_mysql_host.toStdString(),
				config->m_mysql_port);
			if (!ret) throw std::runtime_error("Failed to connect to MySQL Server.");

			if (!config->m_mysql_c->hasTable("teacher")) {
				if (!config->m_mysql_c->update(create_table_teacher)) throw std::runtime_error("Failed to update a SQL.");
			}
			if (!config->m_mysql_c->hasTable("student")) {
				if (!config->m_mysql_c->update(create_table_student)) throw std::runtime_error("Failed to update a SQL.");
			}
			if (!config->m_mysql_c->hasTable("exam")) {
				if (!config->m_mysql_c->update(create_table_exam)) throw std::runtime_error("Failed to update a SQL.");
			}
			if (!config->m_mysql_c->hasTable("score")) {
				if (!config->m_mysql_c->update(create_table_score)) throw std::runtime_error("Failed to update a SQL.");
			}
			if (!config->m_mysql_c->hasTable("course")) {
				if (!config->m_mysql_c->update(create_table_course)) throw std::runtime_error("Failed to update a SQL.");
			}
		}
		else {
			bool ret = config->m_sqlite_c->opendb(config->m_env_path.toStdString() + "database.db");
			if (!ret) throw std::runtime_error("Failed to open Sqlite database file.");

			if (!config->m_sqlite_c->hasTable("teacher")) {
				if (!config->m_sqlite_c->update(create_table_teacher)) throw std::runtime_error("Failed to update a SQL.");
			}
			if (!config->m_sqlite_c->hasTable("student")) {
				if (!config->m_sqlite_c->update(create_table_student)) throw std::runtime_error("Failed to update a SQL.");
			}
			if (!config->m_sqlite_c->hasTable("exam")) {
				if (!config->m_sqlite_c->update(create_table_exam)) throw std::runtime_error("Failed to update a SQL.");
			}
			if (!config->m_sqlite_c->hasTable("score")) {
				if (!config->m_sqlite_c->update(create_table_score)) throw std::runtime_error("Failed to update a SQL.");
			}
			if (!config->m_sqlite_c->hasTable("course")) {
				if (!config->m_sqlite_c->update(create_table_course)) throw std::runtime_error("Failed to update a SQL.");
			}
		}
		return true;
	}
	catch (const std::exception& e) {
		qDebug() << e.what();
		return false;
	}
	return false;
}

bool checkToken(int token) {
	int ture_token = 0;
	QDate currentDate = QDate::currentDate();
	ture_token += (currentDate.year() % 100) * 10000;
	ture_token += (currentDate.month() * 100);
	ture_token += currentDate.day();

	if (ture_token == token) {
		return true;
	}
	return false;
}

unsigned int signIn(Config* config, const QString& passwd) {
	unsigned int account_num = 0;
	QString sql = "SELECT COUNT(*) as account_num FROM teacher";
	if (config->m_use_mysql) {
		config->m_mysql_c->query(sql.toStdString());
		config->m_mysql_c->query_result->nextRow();
		account_num = stoi(config->m_mysql_c->query_result->rowValue(0));
		account_num += 100000001;
		config->m_mysql_c->transaction();
		sql = QString("INSERT INTO teacher VALUES (%1,NULL,NULL,'%2');")
			.arg(QString::number(account_num), passwd);
		if (!config->m_mysql_c->update(sql.toStdString())) {
			config->m_mysql_c->rollback();
			return 0;
		}
		config->m_mysql_c->commit();
		return account_num;
	}
	else {
		config->m_sqlite_c->query(sql.toStdString());
		config->m_sqlite_c->query_result->nextRow();
		account_num = stoi(config->m_sqlite_c->query_result->rowValue(0));
		account_num += 100000001;
		config->m_sqlite_c->transaction();
		sql = QString("INSERT INTO teacher VALUES (%1,NULL,NULL,'%2');")
			.arg(QString::number(account_num), passwd);
		if (!config->m_sqlite_c->update(sql.toStdString())) {
			config->m_sqlite_c->rollback();
			return 0;
		}
		config->m_sqlite_c->commit();
		return account_num;
	}
	return 0;
}

bool setUserNickname(Config* config, unsigned int user_id, const QString& new_nickname) {
	QString sql = QString("UPDATE teacher SET nickname='%1' WHERE id=%2;")
		.arg(new_nickname, QString::number(user_id));
	if (config->m_use_mysql) {
		return config->m_mysql_c->update(sql.toStdString());
	}
	else {
		return config->m_sqlite_c->update(sql.toStdString());
	}
}

bool setUserGender(Config* config, unsigned int user_id, int gender) {
	QString sql = QString("UPDATE teacher SET gender=%1 WHERE id=%2;")
		.arg(QString::number(gender), QString::number(user_id));
	if (config->m_use_mysql) {
		return config->m_mysql_c->update(sql.toStdString());
	}
	else {
		return config->m_sqlite_c->update(sql.toStdString());
	}
}

bool checkPasswd(Config* config, unsigned int user_id, const QString& passwd) {
	QString sql = QString("SELECT * FROM teacher WHERE id=%1 AND passwd='%2';")
		.arg(QString::number(user_id), passwd);
	if (config->m_use_mysql) {
		config->m_mysql_c->query(sql.toStdString());
		return config->m_mysql_c->query_result->nextRow();
	}
	else {
		config->m_sqlite_c->query(sql.toStdString());
		return config->m_sqlite_c->query_result->nextRow();
	}
}

bool hasAccount(Config* config, unsigned int account_id) {
	QString sql = QString("SELECT * FROM teacher where id=%1;")
		.arg(QString::number(account_id));
	if (config->m_use_mysql) {
		config->m_mysql_c->query(sql.toStdString());
		return config->m_mysql_c->query_result->nextRow();
	}
	else {
		config->m_sqlite_c->query(sql.toStdString());
		return config->m_sqlite_c->query_result->nextRow();;
	}
}

bool resetPasswd(Config* config, unsigned int account_id, const QString& new_passwd) {
	QString sql = QString("UPDATE teacher SET passwd='%1' WHERE id=%2;")
		.arg(new_passwd, QString::number(account_id));
	if (config->m_use_mysql) {
		return config->m_mysql_c->update(sql.toStdString());;
	}
	else {
		return config->m_sqlite_c->update(sql.toStdString());;
	}
}

bool hasStudent(Config* config, unsigned int id) {
	QString sql = QString("SELECT * FROM student where id=%1;")
		.arg(QString::number(id));
	if (config->m_use_mysql) {
		config->m_mysql_c->query(sql.toStdString());
		return config->m_mysql_c->query_result->nextRow();
	}
	else {
		config->m_sqlite_c->query(sql.toStdString());
		return config->m_sqlite_c->query_result->nextRow();;
	}
}
bool addStudent(Config* config, const Student& student) {
	QString sql = QString("INSERT INTO student VALUES (%1, '%2', %3, %4, %5, %6)")
		.arg(QString::number(student.m_id),
			student.m_name,
			QString::number(student.m_age),
			QString::number(student.m_gender),
			QString::number(student.m_grade),
			QString::number(student.m_class)
		);
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		if (!config->m_mysql_c->update(sql.toStdString())) {
			config->m_mysql_c->rollback();
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		if (!config->m_sqlite_c->update(sql.toStdString())) {
			config->m_sqlite_c->rollback();
		}
		return config->m_sqlite_c->commit();
	}
}
bool editStudent(Config* config, const Student& student, unsigned int old_id) {
	QStringList sql;
	QString sql1 = QString("UPDATE student SET id=%1, name='%2', age=%3, gender=%4, grade=%5, class=%6 WHERE id=%7;")
		.arg(QString::number(student.m_id),
			student.m_name,
			QString::number(student.m_age),
			QString::number(student.m_gender),
			QString::number(student.m_grade),
			QString::number(student.m_class),
			QString::number(old_id)
		);
	sql.push_back(sql1);
	if (student.m_id != old_id) {
		QString sql2 = QString("UPDATE score SET student_id=%1 WHERE student_id=%2;")
			.arg(QString::number(student.m_id), QString::number(old_id));
		sql.push_back(sql2);
	}
	
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		for (auto& element : sql) {
			if (!config->m_mysql_c->update(element.toStdString())) {
				config->m_mysql_c->rollback();
			}
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		for (auto& element : sql) {
			if (!config->m_sqlite_c->update(element.toStdString())) {
				config->m_sqlite_c->rollback();
			}
		}
		return config->m_sqlite_c->commit();
	}
}
bool removeStudent(Config* config, unsigned int id) {
	QString sql1 = QString("DELETE FROM student WHERE id=%1;")
		.arg(QString::number(id));
	QString sql2 = QString("DELETE FROM score WHERE student_id=%1;")
		.arg(QString::number(id));
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		if (!config->m_mysql_c->update(sql1.toStdString()) || !config->m_mysql_c->update(sql2.toStdString())) {
			config->m_mysql_c->rollback();
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		if (!config->m_sqlite_c->update(sql1.toStdString()) || !config->m_sqlite_c->update(sql2.toStdString())) {
			config->m_sqlite_c->rollback();
		}
		return config->m_sqlite_c->commit();
	}
}

bool hasCourse(Config* config, unsigned int id) {
	QString sql = QString("SELECT * FROM course where id=%1;")
		.arg(QString::number(id));
	if (config->m_use_mysql) {
		config->m_mysql_c->query(sql.toStdString());
		return config->m_mysql_c->query_result->nextRow();
	}
	else {
		config->m_sqlite_c->query(sql.toStdString());
		return config->m_sqlite_c->query_result->nextRow();;
	}
}
bool addCourse(Config* config, const Course& course) {
	QString sql = QString("INSERT INTO course VALUES (%1, '%2')")
		.arg(QString::number(course.m_id), course.m_name);
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		if (!config->m_mysql_c->update(sql.toStdString())) {
			config->m_mysql_c->rollback();
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		if (!config->m_sqlite_c->update(sql.toStdString())) {
			config->m_sqlite_c->rollback();
		}
		return config->m_sqlite_c->commit();
	}
}
bool editCourse(Config* config, const Course& course, unsigned int old_id) {
	QStringList sql;
	QString sql1 = QString("UPDATE course SET id=%1, name='%2' WHERE id=%3;")
		.arg(QString::number(course.m_id), course.m_name, QString::number(old_id));
	sql.push_back(sql1);
	if (course.m_id != old_id) {
		QString sql2 = QString("UPDATE score SET course_id=%1 WHERE course_id=%2;")
			.arg(QString::number(course.m_id), QString::number(old_id));
		sql.push_back(sql2);
	}
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		for (auto& element : sql) {
			if (!config->m_mysql_c->update(element.toStdString())) {
				config->m_mysql_c->rollback();
			}
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		for (auto& element : sql) {
			if (!config->m_sqlite_c->update(element.toStdString())) {
				config->m_sqlite_c->rollback();
			}
		}
		return config->m_sqlite_c->commit();
	}
}
bool removeCourse(Config* config, unsigned int id) {
	QString sql1 = QString("DELETE FROM course WHERE id=%1;")
		.arg(QString::number(id));
	QString sql2 = QString("DELETE FROM score WHERE course_id=%1;")
		.arg(QString::number(id));
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		if (!config->m_mysql_c->update(sql1.toStdString()) || !config->m_mysql_c->update(sql2.toStdString())) {
			config->m_mysql_c->rollback();
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		if (!config->m_sqlite_c->update(sql1.toStdString()) || !config->m_sqlite_c->update(sql2.toStdString())) {
			config->m_sqlite_c->rollback();
		}
		return config->m_sqlite_c->commit();
	}
}

bool hasExam(Config* config, unsigned int id) {
	QString sql = QString("SELECT * FROM exam where id=%1;")
		.arg(QString::number(id));
	if (config->m_use_mysql) {
		config->m_mysql_c->query(sql.toStdString());
		return config->m_mysql_c->query_result->nextRow();
	}
	else {
		config->m_sqlite_c->query(sql.toStdString());
		return config->m_sqlite_c->query_result->nextRow();;
	}
}
bool addExam(Config* config, const Exam& exam) {
	QString sql = QString("INSERT INTO exam VALUES (%1, '%2', %3, %4, %5)")
		.arg(QString::number(exam.m_id),
			exam.m_name,
			QString::number(exam.m_data_year),
			QString::number(exam.m_data_month),
			QString::number(exam.m_data_day)
		);
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		if (!config->m_mysql_c->update(sql.toStdString())) {
			config->m_mysql_c->rollback();
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		if (!config->m_sqlite_c->update(sql.toStdString())) {
			config->m_sqlite_c->rollback();
		}
		return config->m_sqlite_c->commit();
	}
}
bool editExam(Config* config, const Exam& exam, unsigned int old_id) {
	QStringList sql;
	QString sql1 = QString("UPDATE exam SET id=%1, name='%2', date_year=%3, date_month=%4, date_day=%5 WHERE id=%6;")
		.arg(QString::number(exam.m_id),
			exam.m_name,
			QString::number(exam.m_data_year),
			QString::number(exam.m_data_month),
			QString::number(exam.m_data_day),
			QString::number(old_id)
		);
	if (exam.m_id != old_id) {
		QString sql2 = QString("UPDATE score SET exam_id=%1 WHERE exam_id=%2;")
			.arg(QString::number(exam.m_id), QString::number(old_id));
		sql.push_back(sql2);
	}
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		for (auto& element : sql) {
			if (!config->m_mysql_c->update(element.toStdString())) {
				config->m_mysql_c->rollback();
			}
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		for (auto& element : sql) {
			if (!config->m_sqlite_c->update(element.toStdString())) {
				config->m_sqlite_c->rollback();
			}
		}
		return config->m_sqlite_c->commit();
	}
}
bool removeExam(Config* config, unsigned int id) {
	QString sql1 = QString("DELETE FROM exam WHERE id=%1;")
		.arg(QString::number(id));
	QString sql2 = QString("DELETE FROM score WHERE exam_id=%1;")
		.arg(QString::number(id));
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		if (!config->m_mysql_c->update(sql1.toStdString()) || !config->m_mysql_c->update(sql2.toStdString())) {
			config->m_mysql_c->rollback();
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		if (!config->m_sqlite_c->update(sql1.toStdString()) || !config->m_sqlite_c->update(sql2.toStdString())) {
			config->m_sqlite_c->rollback();
		}
		return config->m_sqlite_c->commit();
	}
}

bool hasScore(Config* config, const Score& score) {
	QString sql = QString("SELECT * FROM score where exam_id=%1 AND student_id=%2 AND course_id=%3;")
		.arg(QString::number(score.m_exam_id), QString::number(score.m_student_id), QString::number(score.m_course_id));
	if (config->m_use_mysql) {
		config->m_mysql_c->query(sql.toStdString());
		return config->m_mysql_c->query_result->nextRow();
	}
	else {
		config->m_sqlite_c->query(sql.toStdString());
		return config->m_sqlite_c->query_result->nextRow();;
	}
}
bool insertScore(Config* config, const Score& score) {
	QString sql = QString("INSERT INTO score VALUES (%1, %2, %3, %4);")
		.arg(QString::number(score.m_exam_id),
			QString::number(score.m_student_id),
			QString::number(score.m_course_id),
			QString::number(score.m_score)
		);
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		if (!config->m_mysql_c->update(sql.toStdString())) {
			config->m_mysql_c->rollback();
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		if (!config->m_sqlite_c->update(sql.toStdString())) {
			config->m_sqlite_c->rollback();
		}
		return config->m_sqlite_c->commit();
	}
}
bool editScore(Config* config, const Score& score) {
	QString sql = QString("UPDATE score SET score=%1 WHERE exam_id=%2 AND student_id=%3 AND course_id=%4;")
		.arg(QString::number(score.m_score),
			QString::number(score.m_exam_id),
			QString::number(score.m_student_id),
			QString::number(score.m_course_id)
		);
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		if (!config->m_mysql_c->update(sql.toStdString())) {
			config->m_mysql_c->rollback();
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		if (!config->m_sqlite_c->update(sql.toStdString())) {
			config->m_sqlite_c->rollback();
		}
		return config->m_sqlite_c->commit();
	}
}
bool removeScore(Config* config, const Score& score) {
	QString sql = QString("DELETE FROM score WHERE exam_id=%1 AND student_id=%2 AND course_id=%3;")
		.arg(QString::number(score.m_exam_id),
			QString::number(score.m_student_id),
			QString::number(score.m_course_id)
		);
	if (config->m_use_mysql) {
		config->m_mysql_c->transaction();
		if (!config->m_mysql_c->update(sql.toStdString())) {
			config->m_mysql_c->rollback();
		}
		return config->m_mysql_c->commit();
	}
	else {
		config->m_sqlite_c->transaction();
		if (!config->m_sqlite_c->update(sql.toStdString())) {
			config->m_sqlite_c->rollback();
		}
		return config->m_sqlite_c->commit();
	}
}