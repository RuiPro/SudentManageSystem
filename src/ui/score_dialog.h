#pragma once

#include <QDialog>
#include <QCompleter>
#include <QComboBox>
#include <QStringListModel>
#include "ui_score_dialog.h"
#include "functions.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ScoreDialogClass; };
QT_END_NAMESPACE

class MainWindow;

class ScoreDialog : public QDialog {
	Q_OBJECT

public:
	ScoreDialog(const MainWindow const* mainWindow, QWidget* parent = nullptr);
	~ScoreDialog();
public slots:
	void setEditScore(const ScoreSet& score_set);
signals:
	void dialogClose(QList<ScoreSet> score_set_list);

private:
	Ui::ScoreDialogClass* ui;
	QCompleter* m_completer_student = nullptr, * m_completer_exam = nullptr;
	QStringListModel* m_model_student = nullptr, * m_model_exam = nullptr;
	QStringList m_list_student, m_list_exam;	// 保存学生和考试名以添加到下拉框
};
