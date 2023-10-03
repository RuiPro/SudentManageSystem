#pragma once

#include <QDialog>
#include <QString>
#include <QPushButton>
#include <QMessageBox>
#include <QRegExp>
#include <QRegExpValidator>
#include "functions.h"
#include "ui_course_dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CourseDialogClass; };
QT_END_NAMESPACE

class CourseDialog : public QDialog {
	Q_OBJECT

public:
	CourseDialog(QWidget* parent = nullptr);
	~CourseDialog();
public slots:
	void setEditCourse(const Course& course);
signals:
	void dialogClose(Course course);

private:
	Ui::CourseDialogClass* ui;
};
