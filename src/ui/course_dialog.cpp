#include "course_dialog.h"

CourseDialog::CourseDialog(QWidget* parent)
	: QDialog(parent)
	, ui(new Ui::CourseDialogClass()) {
	ui->setupUi(this);

	QRegExp regExp1("[0-9]+");
	QRegExpValidator* validator1 = new QRegExpValidator(regExp1, this);
	ui->lineEdit_course_id->setValidator(validator1);

	connect(ui->pushButton_cancel, &QPushButton::clicked, this, &QDialog::reject);
	connect(ui->pushButton_cancel, &QPushButton::clicked, this, &QDialog::close);

	connect(ui->pushButton_confirm, &QPushButton::clicked, [this]() {
		Course course;
		course.m_id = ui->lineEdit_course_id->text().toUInt();
		course.m_name = ui->lineEdit_course_name->text();
		if (course.m_id == 0 || course.m_name.isEmpty()) {
			QMessageBox::information(this, "无法提交", "存在无效值", QMessageBox::Ok);
			return;
		}
		emit dialogClose(course);
		accept();
		});
}

CourseDialog::~CourseDialog() {
	delete ui;
}

void CourseDialog::setEditCourse(const Course& course) {
	ui->lineEdit_course_id->setText(QString::number(course.m_id));
	ui->lineEdit_course_name->setText(course.m_name);
}
