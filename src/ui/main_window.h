#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QString>
#include <QList>
#include <QMenu>
#include <QAction>
#include <QWidgetAction>
#include <QCheckBox>
#include <QStringList>
#include <QMessageBox>
#include <QCompleter>
#include <QStringListModel>
#include "student_dialog.h"
#include "course_dialog.h"
#include "exam_dialog.h"
#include "score_dialog.h"
#include "functions.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// 自定义WidgetAction，传入初始化的控件以用于放到其他控件上，子控件无需指定父对象
class MyWidgetAction : public QWidgetAction {
public:
	MyWidgetAction(QWidget* widget, QObject* parent) : m_widget(widget), QWidgetAction(parent) {}
protected:
	QWidget* m_widget;
	QWidget* createWidget(QWidget* parent) override {
		m_widget->setParent(parent);
		return m_widget;
	}
	QWidget* getWidget() {
		return m_widget;
	}
};

// StackedWidegt的页码，和MainWindow::StackedWidegtPageName对应
enum StackedWidegtPage {
	page_home = 0,
	page_student_manage,
	page_teach_manage,
	page_score_manage
};

class MainWindow : public QMainWindow {
	friend class ScoreDialog;
	Q_OBJECT
private:
	static constexpr const char* StackedWidegtPageName[] = {
	"主页",
	"学生管理",
	"教学计划",
	"成绩管理"
	};

public:
	MainWindow(Config* config, QWidget* parent = nullptr);
	~MainWindow();
	inline static QString getStackedWidegtPageName(int index) {
		return QString(MainWindow::StackedWidegtPageName[index]);
	}
private:
	Ui::MainWindow* ui;
	Config* m_config;
	// 菜单栏
	QMenu* menu_file, * menu_window, * menu_window_student;
	QAction* action_file_exit;
	QCheckBox* action_window_student_select, * action_window_student_edit;
	// 状态栏
	QList<int> m_page_stack;
	QLabel* m_status_bar_label;
	QPushButton* m_status_bar_return, * m_status_bar_home;

private:
	void resizeEvent(QResizeEvent* event);			// [重写]窗口大小变动事件
	bool eventFilter(QObject* obj, QEvent* event);	// [重写]事件过滤器
	// 带init的都是初始化，内部可以设置ui，且所有信号和槽都在此实现
	// 不带init的是常规函数，可能存在对ui的修改，但内部不含信号和槽，因此可以运行时按需调用

	void initMenuBar();				// 初始化菜单栏
	void setStatusBarLabel();		// 设置窗口位置信息
	void initStatusBar();			// 初始化状态栏
	void initHomePage();			// 初始化主页

	void refreshAll();				// 更新所有数据

	void initStudentPage();			// 初始化学生管理页
	QList<bool> m_student_order_flag;
	QList<Student> m_student_list;
	void setStudentQueryWidget();	// 按数据库设置筛选条件
	void queryStudents();			// 查询学生数据保存至m_student_list
	void showStudents();			// 展示学生数据

	// 初始化教学计划页
	void initTeachPage();
	QList<Course> m_course_list;
	QList<Exam> m_exam_list;
	QList<bool> m_exam_order_flag;
	unsigned short m_course_table_column = 6;
	void initCoursePage();
	void queryCourses();
	void showCourses();
	void initExamPage();
	void queryExams();
	void showExams();

	// 初始化成绩查询页
	void initScorePage();
	QList<ScoreSet> m_scores_set_list;
	QMetaObject::Connection m_score_order_conn;
	QList<bool> m_score_order_flag;
	QCompleter* m_completer_student = nullptr, * m_completer_exam = nullptr;
	QStringListModel* m_model_student = nullptr, * m_model_exam = nullptr;
	void queryScores();
	void showScores();

private slots:
	void slotAddStudent();
	void slotEditStudent();
	void slotRemoveStudent();
	void slotAddCourse();
	void slotEditCourse();
	void slotRemoveCourse();
	void slotAddExam();
	void slotEditExam();
	void slotRemoveExam();
	void slotAddScores();
	void slotEditScore();
	void slotRemoveScore();
};

#endif // MAIN_WINDOW_H