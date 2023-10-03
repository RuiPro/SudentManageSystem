#include "exam_dialog.h"

ExamDialog::ExamDialog(QWidget* parent)
	: QDialog(parent)
	, ui(new Ui::ExamDialogClass()) {
	ui->setupUi(this);

	QRegExp regExp1("[0-9]+");
	QRegExpValidator* validator1 = new QRegExpValidator(regExp1, this);
	ui->lineEdit_id->setValidator(validator1);
	ui->dateEdit_date->setCalendarPopup(true);
	ui->dateEdit_date->setDate(QDate().currentDate());

	connect(ui->pushButton_cancel, &QPushButton::clicked, this, &QDialog::reject);
	connect(ui->pushButton_cancel, &QPushButton::clicked, this, &QDialog::close);

	connect(ui->pushButton_confirm, &QPushButton::clicked, [this]() {
		if (ui->lineEdit_id->text().isEmpty() ||
			ui->lineEdit_name->text().isEmpty()) {
			QMessageBox::critical(this, "操作失败", "请输入必要信息", QMessageBox::Ok);
			return;
		}
		Exam exam;
		exam.m_id = ui->lineEdit_id->text().toUInt();
		exam.m_name = ui->lineEdit_name->text();
		exam.m_data_day = ui->dateEdit_date->date().day();
		exam.m_data_month = ui->dateEdit_date->date().month();
		exam.m_data_year = ui->dateEdit_date->date().year();

		emit dialogClose(exam);
		accept();
		});
}

ExamDialog::~ExamDialog() {
	delete ui;
}

void ExamDialog::setEditExam(const Exam& exam) {
	ui->lineEdit_id->setText(QString::number(exam.m_id));
	ui->lineEdit_name->setText(exam.m_name);
	QDate date(exam.m_data_year, exam.m_data_month, exam.m_data_day);
	ui->dateEdit_date->setDate(date);
}
