#pragma once

#include <QDialog>
#include <QString>
#include <QPushButton>
#include <QMessageBox>
#include <QRegExp>
#include <QRegExpValidator>
#include "ui_student_dialog.h"
#include "functions.h"

QT_BEGIN_NAMESPACE
namespace Ui { class StudentDialogClass; };
QT_END_NAMESPACE

class StudentDialog : public QDialog {
	Q_OBJECT

public:
	StudentDialog(QWidget* parent = nullptr);
	~StudentDialog();
	void setEditStudent(const Student& student);
private:
	Ui::StudentDialogClass* ui;
	
signals:
	void dialogClose(Student student);
};
