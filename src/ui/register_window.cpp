#include "register_window.h"
#include "ui_register_window.h"
#include <QRegExpValidator>
#include <QMessageBox>
#include <qDebug>
#include <QDate>
#include <QThread>

RegisterWindow::RegisterWindow(Config* config, QWidget* parent) :
	QMainWindow(parent),
	ui(new Ui::RegisterWindow), 
	m_config(config) {
	ui->setupUi(this);

	setLableStandOut(ui->label_step_1);
	ui->stackedWidget->setCurrentIndex(0);
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

	// 设置密码输入框和注册口令的合法字符
	QRegExp regExp1("[0-9a-zA-Z_!?@]+");
	QRegExpValidator* validator1 = new QRegExpValidator(regExp1, this);
	ui->lineEdit_passwd1->setValidator(validator1);
	ui->lineEdit_passwd2->setValidator(validator1);
	ui->pushButton_register->setEnabled(false);
	QRegExp regExp2("[0-9]+");
	QRegExpValidator* validator2 = new QRegExpValidator(regExp2, this);
	ui->lineEdit_register_token->setValidator(validator2);
	ui->lineEdit_register_token->setMaxLength(6);


	// 检测密码输入
	connect(ui->lineEdit_passwd1, &QLineEdit::textChanged, [=]() {
		inputPasswd1 = ui->lineEdit_passwd1->text();
		if (inputPasswd1 != inputPasswd2) {
			ui->label_info_output->setStyleSheet("color: red;");
			ui->label_info_output->setText("两次输入的密码不匹配");
		}
		else if (inputPasswd1.size() < 8 || inputPasswd1.size() > 20) {
			ui->label_info_output->setStyleSheet("color: red;");
			ui->label_info_output->setText("密码长度少于8或超过20");
		}
		else {
			ui->label_info_output->setStyleSheet("color: green;");
			ui->pushButton_register->setEnabled(true);
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
			ui->label_info_output->setText(" 密码长度少于8或超过20");
		}
		else {
			ui->label_info_output->setStyleSheet("color: green;");
			ui->pushButton_register->setEnabled(true);
			ui->label_info_output->setText("密码通过检测，可以注册");
		}
		});
	// 开始注册
	connect(ui->pushButton_register, &QPushButton::clicked, [=]() {
		if (!checkToken(ui->lineEdit_register_token->text().toInt())) {
			QMessageBox::critical(this, "口令错误", "你输入的注册口令有误\n请确认无误后重试", QMessageBox::Ok);
			return;
		}
		m_account_id = signIn(config, inputPasswd1);
		if (m_account_id == 0) {
			QMessageBox::critical(this, "注册失败", "申请账号出错\n请检查数据库链接", QMessageBox::Ok);
			return;
		}
		ui->label_account_output->setText(QString::number(m_account_id));
		ui->stackedWidget->setCurrentIndex(1);
		unsetLableStandOut(ui->label_step_1);
		setLableStandOut(ui->label_step_2);
		});

	ui->lineEdit_nickname->setMaxLength(20);
	ui->radioButton_gender_man->setChecked(true);
	// 设置昵称和性别
	connect(ui->lineEdit_nickname, &QLineEdit::textChanged, [=]() {
		QString nickname = ui->lineEdit_nickname->text();
		if (nickname.isEmpty()) {
			ui->pushButton_nickame->setText("跳过");
		}
		else {
			ui->pushButton_nickame->setText("继续");
		}
		});
	connect(ui->pushButton_nickame, &QPushButton::clicked, [=]() {
		QString nickname = ui->lineEdit_nickname->text();
		if (!nickname.isEmpty()) {
			setUserNickname(m_config, m_account_id, nickname);
		}
		if (ui->radioButton_gender_man->isChecked()) {
			setUserGender(m_config, m_account_id, 0);
		}
		else {
			setUserGender(m_config, m_account_id, 1);
		}
		ui->stackedWidget->setCurrentIndex(2);
		unsetLableStandOut(ui->label_step_2);
		setLableStandOut(ui->label_step_3);
		});

	connect(ui->pushButton_finish, &QPushButton::clicked, [=]() {
		this->close();
		});
}

RegisterWindow::~RegisterWindow() {
	delete ui;
}

void RegisterWindow::setLableStandOut(QLabel* label) {
	QFont font("Consolas", 12);
	font.setBold(true);
	font.setUnderline(true);
	label->setFont(font);
}

void RegisterWindow::unsetLableStandOut(QLabel* label) {
	QFont font("Consolas", 9);
	font.setBold(false);
	font.setUnderline(false);
	label->setFont(font);
}

void RegisterWindow::closeEvent(QCloseEvent* e) {
	emit registerFinish(m_account_id);
}