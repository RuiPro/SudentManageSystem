#include "reset_passwd_window.h"
#include <QRegExpValidator>
#include <QThread>
#include <QMessageBox>

ResetPasswdWindow::ResetPasswdWindow(Config* config, QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::ResetPasswdWindowClass()), m_config(config) {
	ui->setupUi(this);

	ui->lineEdit_passwd1->setEchoMode(QLineEdit::Password);
	connect(ui->checkBox_display_passwd1, &QCheckBox::stateChanged, [=]() {
		auto ret = ui->checkBox_display_passwd1->checkState();
		if (ret == Qt::Checked) {
			ui->lineEdit_passwd1->setEchoMode(QLineEdit::Normal);
		}
		else {
			ui->lineEdit_passwd1->setEchoMode(QLineEdit::Password);
		}
		});
	ui->lineEdit_passwd2->setEchoMode(QLineEdit::Password);
	connect(ui->checkBox_display_passwd2, &QCheckBox::stateChanged, [=]() {
		auto ret = ui->checkBox_display_passwd2->checkState();
		if (ret == Qt::Checked) {
			ui->lineEdit_passwd2->setEchoMode(QLineEdit::Normal);
		}
		else {
			ui->lineEdit_passwd2->setEchoMode(QLineEdit::Password);
		}
		});

	// 设置输入框的合法字符
	QRegExp regExp1("[0-9a-zA-Z_!?@]+");
	QRegExpValidator* validator1 = new QRegExpValidator(regExp1, this);
	ui->lineEdit_passwd1->setValidator(validator1);
	ui->lineEdit_passwd2->setValidator(validator1);
	ui->pushButton_reset_passwd->setEnabled(false);
	QRegExp regExp2("[0-9]+");
	QRegExpValidator* validator2 = new QRegExpValidator(regExp2, this);
	ui->lineEdit_reset_token->setValidator(validator2);
	ui->lineEdit_account->setValidator(validator2);
	ui->lineEdit_reset_token->setMaxLength(6);


	// 检测密码输入
	connect(ui->lineEdit_passwd1, &QLineEdit::textChanged, [=]() {
		inputPasswd1 = ui->lineEdit_passwd1->text();
		if (inputPasswd1 != inputPasswd2) {
			ui->label_info_output->setStyleSheet("color: red;");
			ui->label_info_output->setText("两次输入的密码不匹配");
		}
		else if (inputPasswd1.size() < 8 || inputPasswd1.size() > 20) {
			ui->label_info_output->setStyleSheet("color: red;");
			ui->label_info_output->setText(" 密码长度少于8或超过20");
		}
		else {
			ui->label_info_output->setStyleSheet("color: green;");
			ui->pushButton_reset_passwd->setEnabled(true);
			ui->label_info_output->setText("密码通过检测，可以注册");
		}
		});
	connect(ui->lineEdit_passwd2, &QLineEdit::textChanged, [=]() {
		inputPasswd2 = ui->lineEdit_passwd2->text();
		if (inputPasswd1 != inputPasswd2) {
			ui->label_info_output->setStyleSheet("color: red;");
			ui->label_info_output->setText("两次输入的密码不匹配");
		}
		else if (inputPasswd2.size() < 8 || inputPasswd2.size() > 20) {
			ui->label_info_output->setStyleSheet("color: red;");
			ui->label_info_output->setText("密码长度少于8或超过20");
		}
		else {
			ui->label_info_output->setStyleSheet("color: green;");
			ui->pushButton_reset_passwd->setEnabled(true);
			ui->label_info_output->setText("密码通过检测，可以修改密码");
		}
		});

		// 修改密码
	connect(ui->pushButton_reset_passwd, &QPushButton::clicked, [=]() {
		if (!checkToken(ui->lineEdit_reset_token->text().toInt())) {
			QMessageBox::critical(this, "口令错误", "你输入的改密口令有误\n请确认无误后重试", QMessageBox::Ok);
			return; 
		}
		QString account = ui->lineEdit_account->text();
		if (account.isEmpty()) {
			QMessageBox::critical(this, "空账号", "请输入账号", QMessageBox::Ok);
			return;
		}
		if (!hasAccount(config, account.toUInt())) {
			QMessageBox::critical(this, "账号出错", "该账号不存在\n请确认无误后重试 ", QMessageBox::Ok);
			return;
		}
		if (resetPasswd(config, account.toUInt(), inputPasswd1)) {
			QMessageBox::information(this, "重置成功", "重置账号密码成功\n您现在可以使用新密码进行登录了", QMessageBox::Ok);
			this->close();
		}
		else {
			QMessageBox::critical(this, "重置出错 ", "重置账号密码失败\n请检查数据库连接 ", QMessageBox::Ok);
			return;
		}
		});
}

ResetPasswdWindow::~ResetPasswdWindow() {
	delete ui;
}

void ResetPasswdWindow::closeEvent(QCloseEvent* e) {
	emit resetPasswdFinish();
}
