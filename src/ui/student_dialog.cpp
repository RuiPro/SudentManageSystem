#include "student_dialog.h"
#include <QRegExp>
#include <QRegExpValidator>

StudentDialog::StudentDialog(QWidget* parent)
	: QDialog(parent)
	, ui(new Ui::StudentDialogClass()) {
	ui->setupUi(this);
	ui->spinBox_age->setMinimum(0);
	ui->spinBox_age->setMaximum(200);
	ui->comboBox_gender->addItem("男");
	ui->comboBox_gender->addItem("女");

	QRegExp regExp1("[0-9]+");
	QRegExpValidator* validator1 = new QRegExpValidator(regExp1, this);
	ui->lineEdit_id->setValidator(validator1);
	ui->lineEdit_grade->setValidator(validator1);
	ui->lineEdit_class->setValidator(validator1);

	connect(ui->pushButton_cancel, &QPushButton::clicked, this, &QDialog::reject);
	connect(ui->pushButton_cancel, &QPushButton::clicked, this, &QDialog::close);

	connect(ui->pushButton_confirm, &QPushButton::clicked, [this]() {
		if (ui->lineEdit_id->text().isEmpty() ||
			ui->lineEdit_name->text().isEmpty()) {
			QMessageBox::critical(this, "操作失败", "请输入必要信息", QMessageBox::Ok);
			return;
		}
		Student student;
		student.m_id = ui->lineEdit_id->text().toUInt();
		student.m_name = ui->lineEdit_name->text();
		student.m_grade = ui->lineEdit_grade->text().toUInt();
		student.m_class = ui->lineEdit_class->text().toUInt();
		student.m_age = ui->spinBox_age->value();
		student.m_gender = ui->comboBox_gender->currentIndex();

		emit dialogClose(student);
		accept();
		});
}

StudentDialog::~StudentDialog() {
	delete ui;
}

void StudentDialog::setEditStudent(const Student& student) {
	ui->lineEdit_id->setText(QString::number(student.m_id));
	ui->lineEdit_name->setText(student.m_name);
	ui->spinBox_age->setValue(student.m_age);
	ui->comboBox_gender->setCurrentIndex(student.m_gender);
	ui->lineEdit_grade->setText(QString::number(student.m_grade));
	ui->lineEdit_class->setText(QString::number(student.m_class));
}
