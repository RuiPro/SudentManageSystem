#ifndef REGISTER_WINDOW_H
#define REGISTER_WINDOW_H

#include <QMainWindow>
#include <QString>
#include <QLabel>
#include "client_mysql.h"
#include "client_sqlite.h"
#include "functions.h"

namespace Ui {
	class RegisterWindow;
}

class RegisterWindow : public QMainWindow {
	Q_OBJECT

public:
	explicit RegisterWindow(Config* config, QWidget* parent = nullptr);
	~RegisterWindow();

private:
	Ui::RegisterWindow* ui;

	Config* m_config = nullptr;
	unsigned int m_account_id = 0;
	// 两次输入的密码，需要保存起来做对比
	QString inputPasswd1, inputPasswd2;

	// 设置label突出/不突出显示
	void setLableStandOut(QLabel* label);
	void unsetLableStandOut(QLabel* label);

	// 重写关闭事件
	void closeEvent(QCloseEvent*);
signals:
	void registerFinish(unsigned int account_id);
};

#endif // REGISTER_WINDOW_H
