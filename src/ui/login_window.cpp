#include "login_window.h"
#include "ui_login_window.h"
#include "main_window.h"
#include <QRegExpValidator>
#include <QMessageBox>
#include <QDebug>

LoginWindow::LoginWindow(Config* config, QWidget* parent) :
	QMainWindow(parent),
	ui(new Ui::LoginWindow) {
	ui->setupUi(this);
	ui->lineEdit_passwd->setEchoMode(QLineEdit::Password);
	// 设置密码输入框
	connect(ui->checkBox_dispaly_passwd, &QCheckBox::stateChanged, [=]() {
		auto ret = ui->checkBox_dispaly_passwd->checkState();
		if (ret == Qt::Checked) {
			ui->lineEdit_passwd->setEchoMode(QLineEdit::Normal);
		}
		else {
			ui->lineEdit_passwd->setEchoMode(QLineEdit::Password);
		}
		}
	);
	// 注册界面弹出
	connect(ui->clickablelabel_register, &ClickableLable::clicked, [=]() {
		m_rw = new RegisterWindow(config);
		m_rw->setAttribute(Qt::WA_DeleteOnClose);
		QPoint pos = this->pos();
		pos.setX(pos.x() + 30);
		pos.setY(pos.y() + 30);
		m_rw->move(pos);
		this->hide();
		m_rw->show();
		connect(m_rw, &RegisterWindow::registerFinish, this, &LoginWindow::registerFinish);
		});
	// 重置密码界面弹出
	connect(ui->clickablelabel_reset_passwd, &ClickableLable::clicked, [=]() {
		m_rpw = new ResetPasswdWindow(config);
		m_rpw->setAttribute(Qt::WA_DeleteOnClose);
		QPoint pos = this->pos();
		pos.setX(pos.x() + 30);
		pos.setY(pos.y() + 30);
		m_rpw->move(pos);
		this->hide();
		m_rpw->show();
		connect(m_rpw, &ResetPasswdWindow::resetPasswdFinish, this, &LoginWindow::resetPasswdFinish);
		});
	connect(ui->pushButton_login, &QPushButton::clicked, [=]() {
		if (checkPasswd(config, ui->lineEdit_account->text().toUInt(), ui->lineEdit_passwd->text())) {
			MainWindow* main_window = new MainWindow(config);
			main_window->show();
			this->close();
		}
		else {
			QMessageBox::critical(this, "登录失败", "可能出现以下原因:\n1.账号或密码错误\n2.数据库连接失败\n请确认无误后重试", QMessageBox::Ok);
		}
		});
}

LoginWindow::~LoginWindow() {
	delete ui;
}

void LoginWindow::registerFinish(unsigned int account_id) {
	if (account_id != 0) {
		ui->lineEdit_account->setText(QString::number(account_id));
	}
	if (m_rw != nullptr) {
		delete m_rw;
		m_rw = nullptr;
	}
	this->show();
}

void LoginWindow::resetPasswdFinish() {
	if (m_rpw != nullptr) {
		delete m_rpw;
		m_rpw = nullptr;
	}
	this->show();
}