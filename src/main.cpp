#include "main_window.h"
#include "login_window.h"
#include "functions.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
	static Config config;
	config.m_env_path = a.applicationDirPath();
	config.m_env_path.append('/');
	// 资源释放槽函数
	QObject::connect(&a, &QCoreApplication::aboutToQuit, [&]() {
		if (config.m_mysql_c != nullptr) {
			delete config.m_mysql_c;
		}
		if (config.m_sqlite_c != nullptr) {
			delete config.m_sqlite_c;
		}
		});

	// 加载配置和检查数据库
	if (!readConfig(&config)) {
		qDebug() << "Failed to create config.json.";
		QMessageBox::critical(nullptr, "错误", "\n\t加载配置出错\t\n");
		a.quit();
	}
	config.m_mysql_c = new MySQLClient;
	config.m_sqlite_c = new SQLiteClient;
	if (!checkDatabase(&config)) {
		qDebug() << "Check database failed.";
		QMessageBox::critical(nullptr, "学生管理系统-错误", "\n\t检查数据库出错\n\t请检查你的数据库相关配置\t\n");
		a.quit();
	}

	LoginWindow* login_window = new LoginWindow(&config);
	login_window->show();

	return a.exec();
}
