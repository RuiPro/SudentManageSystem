#ifndef LOGIN_WINDOW_H
#define LOGIN_WINDOW_H

#include <QMainWindow>
#include <QRegExpValidator>
#include "register_window.h"
#include "reset_passwd_window.h"
#include "functions.h"

namespace Ui {
	class LoginWindow;
}

class LoginWindow : public QMainWindow {
	Q_OBJECT

public:
	explicit LoginWindow(Config* config, QWidget* parent = nullptr);
	~LoginWindow();

private:
	RegisterWindow* m_rw = nullptr;
	ResetPasswdWindow* m_rpw = nullptr;
	Ui::LoginWindow* ui;

public slots:
	void registerFinish(unsigned int account_id);
	void resetPasswdFinish();
};

#endif // LOGIN_WINDOW_H
