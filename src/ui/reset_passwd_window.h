#ifndef RESET_PASSWD_WINDOW_H
#define RESET_PASSWD_WINDOW_H

#include <QMainWindow>
#include "ui_reset_passwd_window.h"
#include "functions.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ResetPasswdWindowClass; };
QT_END_NAMESPACE

class ResetPasswdWindow : public QMainWindow {
	Q_OBJECT

public:
	ResetPasswdWindow(Config* config, QWidget* parent = nullptr);
	~ResetPasswdWindow();

private:
	Ui::ResetPasswdWindowClass* ui;

	Config* m_config = nullptr;
	// 两次输入的密码，需要保存起来做对比
	QString inputPasswd1, inputPasswd2;

	// 重写关闭事件
	void closeEvent(QCloseEvent*);
signals:
	void resetPasswdFinish();
};

#endif