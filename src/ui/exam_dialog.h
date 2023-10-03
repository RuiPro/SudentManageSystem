#pragma once

#include <QDialog>
#include <QString>
#include <QPushButton>
#include <QMessageBox>
#include <QRegExp>
#include <QRegExpValidator>
#include <QDate>
#include "ui_exam_dialog.h"
#include "functions.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ExamDialogClass; };
QT_END_NAMESPACE

class ExamDialog : public QDialog {
	Q_OBJECT

public:
	ExamDialog(QWidget* parent = nullptr);
	~ExamDialog();
	void setEditExam(const Exam& exam);
private:
	Ui::ExamDialogClass* ui;
signals:
	void dialogClose(Exam exam);
};
