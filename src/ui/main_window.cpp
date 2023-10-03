#include "main_window.h"
#include "ui_main_window.h"

MainWindow::MainWindow(Config* config, QWidget* parent)
	: QMainWindow(parent), ui(new Ui::MainWindow), m_config(config) {
	ui->setupUi(this);
	ui->stackedWidget->setCurrentIndex(0);
	initMenuBar();
	initStatusBar();
	initHomePage();
	initStudentPage();
	initTeachPage();
	initScorePage();
}
MainWindow::~MainWindow() {
	delete ui;
}
void MainWindow::resizeEvent(QResizeEvent* event) {
	QMainWindow::resizeEvent(event);
	ui->tabWidget_teach->setStyleSheet(QString("QTabBar::tab{height:32;width:%1}").arg(ui->tabWidget_teach->width() / 2));
}
bool MainWindow::eventFilter(QObject* obj, QEvent* event) {
	if (obj == ui->tabWidget_teach && event->type() == QEvent::Resize) {
		ui->tabWidget_teach->setStyleSheet(QString("QTabBar::tab{height:32;width:%1}").arg(ui->tabWidget_teach->width() / 2));
	}
	return QMainWindow::eventFilter(obj, event);
}

void MainWindow::refreshAll() {
	queryStudents();
	showStudents();
	queryCourses();
	showCourses();
	queryExams();
	showExams();
	queryScores();
	showScores();
}

void MainWindow::initMenuBar() {
	menu_file = ui->menubar->addMenu("文件");
	menu_window = ui->menubar->addMenu("窗口");
	menu_window_student = menu_window->addMenu("学生管理");

	action_file_exit = menu_file->addAction("退出");
	connect(action_file_exit, &QAction::triggered, this, &QMainWindow::close);
	action_window_student_select = new QCheckBox("筛选");
	menu_window_student->addAction(new MyWidgetAction(action_window_student_select, this));
	action_window_student_select->setChecked(true);
	connect(action_window_student_select, &QCheckBox::stateChanged, [this]() {
		bool flag = action_window_student_select->isChecked();
		if (flag) {
			ui->groupBox_student_select->show();
		}
		else {
			ui->groupBox_student_select->hide();
		}
		});
	action_window_student_edit = new QCheckBox("编辑");
	menu_window_student->addAction(new MyWidgetAction(action_window_student_edit, this));
	action_window_student_edit->setChecked(true);
	connect(action_window_student_edit, &QCheckBox::stateChanged, [this]() {
		bool flag = action_window_student_edit->isChecked();
		if (flag) {
			ui->groupBox_student_edit->show();
		}
		else {
			ui->groupBox_student_edit->hide();
		}
		});
}

void MainWindow::setStatusBarLabel() {
	if (m_status_bar_label == nullptr) return;
	QString path = " ";
	for (int element : m_page_stack) {
		path.append(getStackedWidegtPageName(element));
		path.append("/");
	}
	path.append(" ");
	m_status_bar_label->setText(path);
}

void MainWindow::initStatusBar() {
	// 设置状态栏
	m_status_bar_label = new QLabel(this);
	ui->statusbar->addWidget(m_status_bar_label);
	m_status_bar_return = new QPushButton("返回", this);
	m_status_bar_return->setFixedWidth(40);
	m_status_bar_home = new QPushButton("主页", this);
	m_status_bar_home->setFixedWidth(40);
	ui->statusbar->addPermanentWidget(m_status_bar_return);
	ui->statusbar->addPermanentWidget(m_status_bar_home);
	m_page_stack.push_back(ui->stackedWidget->currentIndex());
	setStatusBarLabel();

	// 返回按钮
	connect(m_status_bar_return, &QPushButton::clicked, [this]() {
		if (m_page_stack.size() > 1) {
			m_page_stack.pop_back();
			ui->stackedWidget->setCurrentIndex(m_page_stack.back());
			setStatusBarLabel();
		}
		});
	// 主页按钮
	connect(m_status_bar_home, &QPushButton::clicked, [this]() {
		while (m_page_stack.size() > 1) {
			m_page_stack.pop_back();
		}
		ui->stackedWidget->setCurrentIndex(m_page_stack.back());
		setStatusBarLabel();
		});
}

void MainWindow::initHomePage() {
	// 设置主页的按钮跳转
	connect(ui->pushButton_student, &QPushButton::clicked, [this]() {
		ui->stackedWidget->setCurrentIndex(StackedWidegtPage::page_student_manage);
		m_page_stack.push_back(StackedWidegtPage::page_student_manage);
		setStatusBarLabel();
		refreshAll();
		});
	connect(ui->pushButton_teach, &QPushButton::clicked, [this]() {
		ui->stackedWidget->setCurrentIndex(StackedWidegtPage::page_teach_manage);
		m_page_stack.push_back(StackedWidegtPage::page_teach_manage);
		setStatusBarLabel();
		refreshAll();
		});
	connect(ui->pushButton_score, &QPushButton::clicked, [this]() {
		ui->stackedWidget->setCurrentIndex(StackedWidegtPage::page_score_manage);
		m_page_stack.push_back(StackedWidegtPage::page_score_manage);
		setStatusBarLabel();
		refreshAll();
		});
}

void MainWindow::initStudentPage() {
	ui->tableWidget_student->verticalHeader()->hide();	// 隐藏列表头
	ui->tableWidget_student->setColumnCount(6);
	QStringList horizontalHeader;
	horizontalHeader << "学号";
	horizontalHeader << "姓名";
	horizontalHeader << "年龄";
	horizontalHeader << "性别";
	horizontalHeader << "年级";
	horizontalHeader << "班级";
	ui->tableWidget_student->setHorizontalHeaderLabels(horizontalHeader);
	ui->tableWidget_student->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

	ui->tableWidget_student->setAlternatingRowColors(true);
	ui->tableWidget_student->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui->tableWidget_student->setSelectionMode(QAbstractItemView::SingleSelection);
	ui->tableWidget_student->setSelectionBehavior(QAbstractItemView::SelectRows);

	ui->comboBox_student_select_order_id->addItem("默认");
	ui->comboBox_student_select_order_id->addItem("升序");
	ui->comboBox_student_select_order_id->addItem("降序");

	ui->comboBox_student_select_gender->addItem("全部");
	ui->comboBox_student_select_gender->addItem("男");
	ui->comboBox_student_select_gender->addItem("女");


	ui->lineEdit_student_name->setReadOnly(true);
	ui->lineEdit_student_id->setReadOnly(true);
	ui->lineEdit_student_gender->setReadOnly(true);
	ui->lineEdit_student_age->setReadOnly(true);
	ui->lineEdit_student_grade->setReadOnly(true);
	ui->lineEdit_student_class->setReadOnly(true);
	setStudentQueryWidget();
	queryStudents();
	showStudents();
	connect(ui->pushButton_student_select_refresh, &QPushButton::clicked, [this]() {
		queryStudents();
		showStudents();
		});
	// 选中一行显示
	connect(ui->tableWidget_student, &QTableWidget::itemClicked, [this](QTableWidgetItem* item) {
		int row = item->row();
		ui->lineEdit_student_id->setText(ui->tableWidget_student->item(row, 0)->text());
		ui->lineEdit_student_name->setText(ui->tableWidget_student->item(row, 1)->text());
		ui->lineEdit_student_age->setText(ui->tableWidget_student->item(row, 2)->text());
		ui->lineEdit_student_gender->setText(ui->tableWidget_student->item(row, 3)->text());
		ui->lineEdit_student_grade->setText(ui->tableWidget_student->item(row, 4)->text());
		ui->lineEdit_student_class->setText(ui->tableWidget_student->item(row, 5)->text());
		});
	// 点击表头字段排序
	m_student_order_flag.clear();
	for (int i = 0; i < 6; ++i) {
		m_student_order_flag.push_back(true);
	}
	connect(ui->tableWidget_student->horizontalHeader(), &QHeaderView::sectionClicked, [this](int index) {
		Qt::SortOrder sort_method;
		if (m_student_order_flag.at(index)) {
			sort_method = Qt::DescendingOrder;
			m_student_order_flag[index] = false;
		}
		else {
			sort_method = Qt::AscendingOrder;
			m_student_order_flag[index] = true;
		}
		ui->tableWidget_student->sortItems(index, sort_method);
		});
	// 三个按钮
	connect(ui->pushButton_student_add, &QPushButton::clicked, this, &MainWindow::slotAddStudent);
	connect(ui->pushButton_student_edit, &QPushButton::clicked, this, &MainWindow::slotEditStudent);
	connect(ui->pushButton_student_remove, &QPushButton::clicked, this, &MainWindow::slotRemoveStudent);
}

void MainWindow::setStudentQueryWidget() {
	// 记录并清除旧数据
	QString selected_grade = ui->comboBox_student_select_grade->currentText();
	QString selected_class = ui->comboBox_student_select_class->currentText();
	ui->comboBox_student_select_grade->clear();
	ui->comboBox_student_select_class->clear();
	ui->comboBox_student_select_grade->addItem("全部");
	ui->comboBox_student_select_class->addItem("全部");
	// 按数据库中的数据对班级年级进行分类，加到筛选下拉框中
	QString sql1 = QString("SELECT DISTINCT grade FROM student;");
	QString sql2 = QString("SELECT DISTINCT class FROM student;");
	if (m_config->m_use_mysql) {
		m_config->m_mysql_c->query(sql1.toStdString());
		while (m_config->m_mysql_c->query_result->nextRow()) {
			ui->comboBox_student_select_grade->addItem(
				QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(0)));
		}
		m_config->m_mysql_c->query(sql2.toStdString());
		while (m_config->m_mysql_c->query_result->nextRow()) {
			ui->comboBox_student_select_class->addItem(
				QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(0)));
		}
	}
	else {
		m_config->m_sqlite_c->query(sql1.toStdString());
		while (m_config->m_sqlite_c->query_result->nextRow()) {
			ui->comboBox_student_select_grade->addItem(
				QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(0)));
		}
		m_config->m_sqlite_c->query(sql2.toStdString());
		while (m_config->m_sqlite_c->query_result->nextRow()) {
			ui->comboBox_student_select_class->addItem(
				QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(0)));
		}
	}
	ui->comboBox_student_select_grade->setCurrentText(selected_grade);
	ui->comboBox_student_select_class->setCurrentText(selected_class);
}

void MainWindow::queryStudents() {
	// 筛选条件解析
	QString sql = QString("SELECT * FROM student ");
	bool hasWHERE = false;
	if (ui->comboBox_student_select_gender->currentIndex() != 0) {
		sql.append("WHERE ");
		hasWHERE = true;
		sql.append(QString("gender=%1 ").arg(QString::number(ui->comboBox_student_select_gender->currentIndex() - 1)));
	}
	if (ui->comboBox_student_select_grade->currentIndex() != 0) {
		if (!hasWHERE) {
			sql.append("WHERE ");
			hasWHERE = true;
		}
		else {
			sql.append("AND ");
		}
		sql.append(QString("grade=%1 ").arg(ui->comboBox_student_select_grade->currentText()));
	}
	if (ui->comboBox_student_select_class->currentIndex() != 0) {
		if (!hasWHERE) {
			sql.append("WHERE ");
			hasWHERE = true;
		}
		else {
			sql.append("AND ");
		}
		sql.append(QString("class=%1 ").arg(ui->comboBox_student_select_class->currentText()));
	}
	if (ui->comboBox_student_select_order_id->currentIndex() != 0) {
		sql.append("ORDER BY id ");
		if (ui->comboBox_student_select_order_id->currentIndex() == 1) {
			sql.append("ASC");
		}
		else {
			sql.append("DESC");
		}
	}
	// 查数据
	m_student_list.clear();
	Student student;
	if (m_config->m_use_mysql) {
		m_config->m_mysql_c->query(sql.toStdString());
		while (m_config->m_mysql_c->query_result->nextRow()) {
			student.m_id = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(0)).toUInt();
			student.m_name = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(1));
			student.m_age = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(2)).toUInt();
			student.m_gender = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(3)).toUInt();
			student.m_grade = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(4)).toUShort();
			student.m_class = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(5)).toUShort();
			m_student_list.push_back(student);
		}
	}
	else {
		m_config->m_sqlite_c->query(sql.toStdString());
		while (m_config->m_sqlite_c->query_result->nextRow()) {
			student.m_id = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(0)).toUInt();
			student.m_name = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(1));
			student.m_age = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(2)).toUInt();
			student.m_gender = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(3)).toUInt();
			student.m_grade = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(4)).toUShort();
			student.m_class = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(5)).toUShort();
			m_student_list.push_back(student);
		}
	}
}

void MainWindow::showStudents() {
	// 删除所有行
	while (ui->tableWidget_student->rowCount() > 0) {
		ui->tableWidget_student->removeRow(0);
	}
	// 清除编辑框
	ui->lineEdit_student_id->clear();
	ui->lineEdit_student_name->clear();
	ui->lineEdit_student_age->clear();
	ui->lineEdit_student_gender->clear();
	ui->lineEdit_student_grade->clear();
	ui->lineEdit_student_class->clear();
	// 重新配置搜索条件
	setStudentQueryWidget();
	// 输出到表格
	ui->tableWidget_student->setRowCount(m_student_list.size());
	int row = 0;
	QTableWidgetItem* items[6];
	for (auto& element : m_student_list) {
		items[0] = new QTableWidgetItem(QString::number(element.m_id));
		items[1] = new QTableWidgetItem(element.m_name);
		items[2] = new QTableWidgetItem(QString::number(element.m_age));
		items[3] = new QTableWidgetItem(element.m_gender == 0 ? "男" : "女");
		items[4] = new QTableWidgetItem(QString::number(element.m_grade));
		items[5] = new QTableWidgetItem(QString::number(element.m_class));
		for (int column = 0; column < 6; ++column) {
			items[column]->setTextAlignment(Qt::AlignCenter);
			ui->tableWidget_student->setItem(row, column, items[column]);
		}
		++row;
	}
}

void MainWindow::initTeachPage() {
	ui->tabWidget_teach->setTabText(0, "课程管理");
	ui->tabWidget_teach->setTabText(1, "考试计划");
	ui->tabWidget_teach->installEventFilter(this);

	initCoursePage();
	initExamPage();
}

void MainWindow::initCoursePage() {
	ui->tableWidget_course->verticalHeader()->hide();	// 隐藏列表头
	ui->tableWidget_course->horizontalHeader()->hide();	// 隐藏行表头
	ui->tableWidget_course->setColumnCount(m_course_table_column);

	ui->tableWidget_course->setSelectionMode(QAbstractItemView::SingleSelection);
	ui->tableWidget_course->setSelectionBehavior(QAbstractItemView::SelectItems);
	ui->tableWidget_course->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	queryCourses();
	showCourses();
	// 刷新按钮
	connect(ui->pushButton_course_refresh, &QPushButton::clicked, [this]() {
		queryCourses();
		showCourses();
		});
	// 显示课程ID
	connect(ui->tableWidget_course, &QTableWidget::itemClicked, [this](QTableWidgetItem* item) {
		int location = (item->row() * m_course_table_column) + item->column();
		ui->label_course_id_output->setText(QString::number(m_course_list.at(location).m_id));
		});
	// 三个按钮
	connect(ui->pushButton_course_add, &QPushButton::clicked, this, &MainWindow::slotAddCourse);
	connect(ui->pushButton_course_edit, &QPushButton::clicked, this, &MainWindow::slotEditCourse);
	connect(ui->pushButton_course_remove, &QPushButton::clicked, this, &MainWindow::slotRemoveCourse);
}

void MainWindow::queryCourses() {
	// 查数据
	QString sql = QString("SELECT * FROM course;");
	m_course_list.clear();
	if (m_config->m_use_mysql) {
		m_config->m_mysql_c->query(sql.toStdString());
		while (m_config->m_mysql_c->query_result->nextRow()) {
			Course c;
			c.m_id = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(0)).toUInt();
			c.m_name = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(1));
			m_course_list.push_back(c);
		}
	}
	else {
		m_config->m_sqlite_c->query(sql.toStdString());
		while (m_config->m_sqlite_c->query_result->nextRow()) {
			Course c;
			c.m_id = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(0)).toUInt();
			c.m_name = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(1));
			m_course_list.push_back(c);
		}
	}
}

void MainWindow::showCourses() {
	// 删除所有行
	while (ui->tableWidget_course->rowCount() > 0) {
		ui->tableWidget_course->removeRow(0);
	}
	ui->label_course_id_output->clear();
	// 输出到表格
	ui->tableWidget_course->setRowCount(m_course_list.size() / m_course_table_column + 1);
	ui->label_course_num_output->setText(QString::number(m_course_list.size()));
	for (int i = 0; i < ui->tableWidget_course->rowCount() * m_course_table_column; ++i) {
		QTableWidgetItem* item = nullptr;
		if (i < m_course_list.size()) {
			item = new QTableWidgetItem(QString("%1(%2)").arg(m_course_list.at(i).m_name, QString::number(m_course_list.at(i).m_id)));
			item->setTextAlignment(Qt::AlignCenter);
			ui->tableWidget_course->setItem(i / m_course_table_column, i % m_course_table_column, item);
			continue;
		}
		else {
			item = new QTableWidgetItem();
			item->setFlags(item->flags() & ~Qt::ItemIsSelectable);
			ui->tableWidget_course->setItem(i / m_course_table_column, i % m_course_table_column, item);
			continue;
		}
	}
}

void MainWindow::initExamPage() {
	ui->tableWidget_exam->verticalHeader()->hide();	// 隐藏列表头
	ui->tableWidget_exam->setColumnCount(3);
	QStringList horizontalHeader;
	horizontalHeader << "ID";
	horizontalHeader << "名称";
	horizontalHeader << "考试日期";
	ui->tableWidget_exam->setHorizontalHeaderLabels(horizontalHeader);
	ui->tableWidget_exam->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

	ui->tableWidget_exam->setSelectionMode(QAbstractItemView::SingleSelection);
	ui->tableWidget_exam->setSelectionBehavior(QAbstractItemView::SelectRows);
	queryExams();
	showExams();
	// 刷新按钮
	connect(ui->pushButton_exam_refresh, &QPushButton::clicked, [this]() {
		queryExams();
		showExams();
		});
	// 点击表头字段排序
	m_exam_order_flag.clear();
	for (int i = 0; i < 3; ++i) {
		m_exam_order_flag.push_back(true);
	}
	connect(ui->tableWidget_exam->horizontalHeader(), &QHeaderView::sectionClicked, [this](int index) {
		Qt::SortOrder sort_method;
		if (m_exam_order_flag.at(index)) {
			sort_method = Qt::DescendingOrder;
			m_exam_order_flag[index] = false;
		}
		else {
			sort_method = Qt::AscendingOrder;
			m_exam_order_flag[index] = true;
		}
		ui->tableWidget_exam->sortItems(index, sort_method);
		});
	// 三个按钮
	connect(ui->pushButton_exam_add, &QPushButton::clicked, this, &MainWindow::slotAddExam);
	connect(ui->pushButton_exam_edit, &QPushButton::clicked, this, &MainWindow::slotEditExam);
	connect(ui->pushButton_exam_remove, &QPushButton::clicked, this, &MainWindow::slotRemoveExam);
}

void MainWindow::queryExams() {
	// 查数据
	m_exam_list.clear();
	QString sql = QString("SELECT * FROM exam;");
	if (m_config->m_use_mysql) {
		m_config->m_mysql_c->query(sql.toStdString());
		while (m_config->m_mysql_c->query_result->nextRow()) {
			Exam e;
			e.m_id = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(0)).toUInt();
			e.m_name = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(1));
			e.m_data_year = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(2)).toUInt();
			e.m_data_month = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(3)).toUInt();
			e.m_data_day = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(4)).toUInt();
			m_exam_list.push_back(e);
		}
	}
	else {
		m_config->m_sqlite_c->query(sql.toStdString());
		while (m_config->m_sqlite_c->query_result->nextRow()) {
			Exam e;
			e.m_id = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(0)).toUInt();
			e.m_name = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(1));
			e.m_data_year = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(2)).toUInt();
			e.m_data_month = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(3)).toUInt();
			e.m_data_day = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(4)).toUInt();
			m_exam_list.push_back(e);
		}
	}
}

void MainWindow::showExams() {
	// 删除所有行
	while (ui->tableWidget_exam->rowCount() > 0) {
		ui->tableWidget_exam->removeRow(0);
	}
	// 输出到表格
	ui->tableWidget_exam->setRowCount(m_exam_list.size());
	int row = 0;
	QTableWidgetItem* items[3];
	for (auto& element : m_exam_list) {
		items[0] = new QTableWidgetItem(QString::number(element.m_id));
		items[1] = new QTableWidgetItem(element.m_name);
		items[2] = new QTableWidgetItem(QString("%1-%2-%3")
			.arg(QString::number(element.m_data_year),
				QString::number(element.m_data_month),
				QString::number(element.m_data_day)));
		for (int column = 0; column < 3; ++column) {
			items[column]->setTextAlignment(Qt::AlignCenter);
			ui->tableWidget_exam->setItem(row, column, items[column]);
		}
		++row;
	}
}

void MainWindow::initScorePage() {
	ui->tableWidget_score->verticalHeader()->hide();	// 隐藏列表头
	ui->tableWidget_score->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

	ui->tableWidget_score->setAlternatingRowColors(true);
	ui->tableWidget_score->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui->tableWidget_score->setSelectionMode(QAbstractItemView::SingleSelection);
	ui->tableWidget_score->setSelectionBehavior(QAbstractItemView::SelectItems);

	queryScores();
	showScores();

	// 刷新按钮
	connect(ui->pushButton_score_refresh, &QPushButton::clicked, [this]() {
		queryScores();
		showScores();
		});
	// 三个按钮
	connect(ui->pushButton_score_add, &QPushButton::clicked, this, &MainWindow::slotAddScores);
	connect(ui->pushButton_score_edit, &QPushButton::clicked, this, &MainWindow::slotEditScore);
	connect(ui->pushButton_score_remove, &QPushButton::clicked, this, &MainWindow::slotRemoveScore);
}

void MainWindow::queryScores() {
	queryStudents();
	queryCourses();
	queryExams();
	m_scores_set_list.clear();
	// 查数据
	// 基础表字段：0学生ID，1学生姓名，2考试ID，3考试名，4~n课程成绩{..}，n总分，n+1排名
	QString sql = "SELECT student.id, student.name, exam.id, exam.name,";
	for (auto& element : m_course_list) {
		sql += QString("MAX(CASE WHEN course.id=%1 THEN score ELSE NULL END) AS %2,").arg(QString::number(element.m_id), element.m_name);
	}
	sql += R"( SUM(score) AS '总分'
						FROM score 
						JOIN student ON score.student_id = student.id 
						JOIN course ON score.course_id = course.id 
						JOIN exam ON score.exam_id = exam.id 
						GROUP BY student.id, student.name, exam.id, exam.name 
						ORDER BY SUM(score) DESC;
	)";
	if (m_config->m_use_mysql) {
		m_config->m_mysql_c->query(sql.toStdString());
		while (m_config->m_mysql_c->query_result->nextRow()) {
			ScoreSet ss;
			ss.m_student_id = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(0)).toUInt();
			ss.m_student_name = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(1));
			ss.m_exam_id = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(2)).toUInt();
			ss.m_exam_name = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(3));
			for (int i = 0; i < m_course_list.size(); ++i) {
				ss.m_scores.push_back(QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(i + 4)).toUInt());
			}
			ss.m_total_point = QString::fromStdString(m_config->m_mysql_c->query_result->rowValue(m_course_list.size() + 4)).toUInt();
			m_scores_set_list.push_back(ss);
		}
	}
	else {
		m_config->m_sqlite_c->query(sql.toStdString());
		while (m_config->m_sqlite_c->query_result->nextRow()) {
			ScoreSet ss;
			ss.m_student_id = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(0)).toUInt();
			ss.m_student_name = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(1));
			ss.m_exam_id = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(2)).toUInt();
			ss.m_exam_name = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(3));
			for (int i = 0; i < m_course_list.size(); ++i) {
				ss.m_scores.push_back(QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(i + 4)).toUInt());
			}
			ss.m_total_point = QString::fromStdString(m_config->m_sqlite_c->query_result->rowValue(m_course_list.size() + 4)).toUInt();
			m_scores_set_list.push_back(ss);
		}
	}
}

void MainWindow::showScores() {
	disconnect(m_score_order_conn);
	// 设置表头
	ui->tableWidget_score->setColumnCount(m_course_list.size() + 5);			// 学号/姓名/考试/各科成绩/总分/排名
	QStringList horizontalHeader;
	horizontalHeader << "学号";
	horizontalHeader << "姓名";
	horizontalHeader << "考试场次";
	for (auto& element : m_course_list) {
		horizontalHeader << element.m_name;
	}
	horizontalHeader << "总分";
	horizontalHeader << "总排名";
	ui->tableWidget_score->setHorizontalHeaderLabels(horizontalHeader);
	// 点击表头字段排序
	m_score_order_flag.clear();
	for (int i = 0; i < m_course_list.size() + 5; ++i) {
		m_score_order_flag.push_back(true);
	}
	m_score_order_conn = connect(ui->tableWidget_score->horizontalHeader(), &QHeaderView::sectionClicked, [this](int index) {
		Qt::SortOrder sort_method;
		if (m_score_order_flag.at(index)) {
			sort_method = Qt::DescendingOrder;
			m_score_order_flag[index] = false;
		}
		else {
			sort_method = Qt::AscendingOrder;
			m_score_order_flag[index] = true;
		}
		ui->tableWidget_score->sortItems(index, sort_method);
		});
	// 删除所有行
	while (ui->tableWidget_score->rowCount() > 0) {
		ui->tableWidget_score->removeRow(0);
	}
	// 输出到表格
	ui->tableWidget_score->setRowCount(m_scores_set_list.size());
	int row = 0;
	QList<QTableWidgetItem*> items;
	for (auto& element : m_scores_set_list) {
		items.clear();
		items.push_back(new QTableWidgetItem(QString::number(element.m_student_id)));
		items.push_back(new QTableWidgetItem(element.m_student_name));
		items.push_back(new QTableWidgetItem(element.m_exam_name));
		for (auto& score_element : element.m_scores) {
			items.push_back(new QTableWidgetItem(QString::number(score_element)));
		}
		items.push_back(new QTableWidgetItem(QString::number(element.m_total_point)));
		items.push_back(new QTableWidgetItem(QString::number(row + 1)));
		for (int column = 0; column < items.size(); ++column) {
			items[column]->setTextAlignment(Qt::AlignCenter);
			ui->tableWidget_score->setItem(row, column, items[column]);
		}
		++row;
	}
}

/********************private slots***********************/
void MainWindow::slotAddStudent() {
	Student student;
	StudentDialog* student_dialog = new StudentDialog(this);
	student_dialog->setWindowTitle("添加学生");
	student_dialog->setAttribute(Qt::WA_DeleteOnClose);
	auto conn = connect(student_dialog, &StudentDialog::dialogClose, [&](const Student& arg) {
		student = arg;
		});
	auto ret = student_dialog->exec();
	disconnect(conn);
	if (ret == QDialog::Accepted) {
		if (hasStudent(m_config, student.m_id)) {
			QMessageBox::critical(this, "添加失败", QString("已存在学号为 %1 的学生").arg(QString::number(student.m_id)), QMessageBox::Ok);
			return;
		}
		addStudent(m_config, student);
		queryStudents();
		showStudents();
	}
}
void MainWindow::slotEditStudent() {
	QList<QTableWidgetItem*> selected_items = ui->tableWidget_student->selectedItems();
	if (selected_items.isEmpty()) {
		QMessageBox::critical(this, "修改失败", "请选中 1 个要修改的学生", QMessageBox::Ok);
		return;
	}
	Student student;
	student.m_id = ui->lineEdit_student_id->text().toUInt();
	student.m_name = ui->lineEdit_student_name->text();
	student.m_grade = ui->lineEdit_student_grade->text().toUInt();
	student.m_class = ui->lineEdit_student_class->text().toUInt();
	student.m_age = ui->lineEdit_student_age->text().toUInt();
	student.m_gender = ui->lineEdit_student_gender->text() == "男" ? 0 : 1;
	unsigned int old_id = student.m_id;

	StudentDialog* student_dialog = new StudentDialog(this);
	student_dialog->setWindowTitle("修改学生");
	student_dialog->setAttribute(Qt::WA_DeleteOnClose);
	auto conn = connect(student_dialog, &StudentDialog::dialogClose, [&](const Student& arg) {
		student = arg;
		});
	student_dialog->setEditStudent(student);
	auto ret = student_dialog->exec();
	disconnect(conn);

	if (ret == QDialog::Accepted) {
		if (old_id != student.m_id) {	// 要改ID
			if (hasStudent(m_config, student.m_id)) {
				QMessageBox::critical(this, "修改失败", QString("学号为 %1 的学生已存在").arg(QString::number(student.m_id)), QMessageBox::Ok);
				queryStudents();
				showStudents();
				return;
			}
			editStudent(m_config, student, old_id);
			queryStudents();
			showStudents();
		}
		else {							// 不用改ID
			if (hasStudent(m_config, old_id)) {
				editStudent(m_config, student, old_id);
				queryStudents();
				showStudents();
			}
			else {
				QMessageBox::critical(this, "修改失败", QString("学号为 %1 的学生不存在").arg(QString::number(old_id)), QMessageBox::Ok);
			}
		}
	}
}
void MainWindow::slotRemoveStudent() {
	QList<QTableWidgetItem*> selected_items = ui->tableWidget_student->selectedItems();
	if (selected_items.isEmpty()) {
		QMessageBox::critical(this, "删除失败", "请选中 1 个要删除的学生", QMessageBox::Ok);
		return;
	}
	Student student;
	student.m_id = ui->lineEdit_student_id->text().toUInt();

	auto ret = QMessageBox::information(this, "确认删除", QString("确认删除学号为 %1 的学生吗\n这将同步删除成绩表中该学生的成绩").arg(student.m_id), QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Cancel);
	if (ret == QMessageBox::Cancel) return;
	removeStudent(m_config, student.m_id);
	queryStudents();
	showStudents();
}
void MainWindow::slotAddCourse() {
	CourseDialog* course_dialog = new CourseDialog(this);
	Course new_course;
	new_course.m_id = 0;
	course_dialog->setWindowTitle("添加课程");
	course_dialog->setAttribute(Qt::WA_DeleteOnClose);
	QMetaObject::Connection conn = connect(course_dialog, &CourseDialog::dialogClose, [&](const Course& add_course) {
		new_course = add_course;
		});
	auto ret = course_dialog->exec();
	disconnect(conn);
	if (ret == QDialog::Accepted) {
		if (hasCourse(m_config, new_course.m_id)) {
			QMessageBox::critical(this, "添加失败", QString("已存在ID为 %1 的课程").arg(QString::number(new_course.m_id)), QMessageBox::Ok);
			return;
		}
		addCourse(m_config, new_course);
		queryCourses();
		showCourses();
	}
}
void MainWindow::slotEditCourse() {
	QList<QTableWidgetItem*> selected_items = ui->tableWidget_course->selectedItems();
	if (selected_items.isEmpty() || selected_items.size() > 1) {
		QMessageBox::critical(this, "修改失败", "请选中 1 个要修改的课程", QMessageBox::Ok);
		return;
	}
	int location = (selected_items.at(0)->row() * m_course_table_column) + selected_items.at(0)->column();

	CourseDialog* course_dialog = new CourseDialog(this);
	Course new_course;
	unsigned int old_id;
	old_id = new_course.m_id = m_course_list.at(location).m_id;
	new_course.m_name = m_course_list.at(location).m_name;
	course_dialog->setWindowTitle("修改课程");
	course_dialog->setAttribute(Qt::WA_DeleteOnClose);
	QMetaObject::Connection conn = connect(course_dialog, &CourseDialog::dialogClose, [&](const Course& edited_course) {
		new_course = edited_course;
		});
	course_dialog->setEditCourse(new_course);
	auto ret = course_dialog->exec();
	disconnect(conn);
	if (ret == QDialog::Accepted) {
		if (new_course.m_id != old_id) {	// 要改ID
			if (hasCourse(m_config, new_course.m_id)) {
				QMessageBox::critical(this, "修改失败", QString("ID为 %1 的课程已存在").arg(QString::number(new_course.m_id)), QMessageBox::Ok);
				queryCourses();
				showCourses();
				return;
			}
			editCourse(m_config, new_course, old_id);
			queryCourses();
			showCourses();
		}
		else {								// 不用改ID
			if (hasCourse(m_config, old_id)) {
				editCourse(m_config, new_course, old_id);
				queryCourses();
				showCourses();
			}
			else {
				QMessageBox::critical(this, "修改失败", QString("不存在ID为 %1 的课程").arg(QString::number(old_id)), QMessageBox::Ok);
			}
		}
	}
}
void MainWindow::slotRemoveCourse() {
	QList<QTableWidgetItem*> selected_items = ui->tableWidget_course->selectedItems();
	if (selected_items.isEmpty()) {
		QMessageBox::critical(this, "删除失败", "请选中要删除的课程", QMessageBox::Ok);
		return;
	}
	QList<int> course_to_remove;
	for (auto& element : selected_items) {
		int location = (element->row() * m_course_table_column) + element->column();
		course_to_remove.push_back(location);
	}
	auto ret = QMessageBox::question(this, "确认删除", QString("确认删除选中的 %1 个课程吗\n这将同步删除成绩表中该课程的成绩").arg(QString::number(course_to_remove.size())), QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Cancel);
	if (ret == QMessageBox::Cancel) return;
	for (auto& element : course_to_remove) {
		removeCourse(m_config, m_course_list.at(element).m_id);
	}
	queryCourses();
	showCourses();
}
void MainWindow::slotAddExam() {
	ExamDialog* exam_dialog = new ExamDialog(this);
	Exam new_exam;
	new_exam.m_id = 0;
	exam_dialog->setWindowTitle("添加考试");
	exam_dialog->setAttribute(Qt::WA_DeleteOnClose);
	QMetaObject::Connection conn = connect(exam_dialog, &ExamDialog::dialogClose, [&](const Exam& add_exam) {
		new_exam = add_exam;
		});
	auto ret = exam_dialog->exec();
	disconnect(conn);
	if (ret == QDialog::Accepted) {
		if (hasExam(m_config, new_exam.m_id)) {
			QMessageBox::critical(this, "添加失败", QString("已存在ID为 %1 的考试").arg(QString::number(new_exam.m_id)), QMessageBox::Ok);
			return;
		}
		addExam(m_config, new_exam);
		queryExams();
		showExams();
	}
}
void MainWindow::slotEditExam() {
	QList<QTableWidgetItem*> selected_items = ui->tableWidget_exam->selectedItems();
	if (selected_items.isEmpty()) {
		QMessageBox::critical(this, "修改失败", "请选中 1 个要修改的考试", QMessageBox::Ok);
		return;
	}

	ExamDialog* exam_dialog = new ExamDialog(this);
	Exam new_exam;
	unsigned int old_id;
	old_id = m_exam_list.at(selected_items.at(0)->row()).m_id;
	new_exam = m_exam_list.at(selected_items.at(0)->row());
	exam_dialog->setWindowTitle("修改考试");
	exam_dialog->setAttribute(Qt::WA_DeleteOnClose);
	QMetaObject::Connection conn = connect(exam_dialog, &ExamDialog::dialogClose, [&](const Exam& edited_exam) {
		new_exam = edited_exam;
		});
	exam_dialog->setEditExam(new_exam);
	auto ret = exam_dialog->exec();
	disconnect(conn);
	if (ret == QDialog::Accepted) {
		if (new_exam.m_id != old_id) {	// 要改ID
			if (hasExam(m_config, new_exam.m_id)) {
				QMessageBox::critical(this, "修改失败", QString("ID为 %1 的考试已存在").arg(QString::number(new_exam.m_id)), QMessageBox::Ok);
				queryExams();
				showExams();
				return;
			}
			editExam(m_config, new_exam, old_id);
			queryExams();
			showExams();
		}
		else {								// 不用改ID
			if (hasExam(m_config, old_id)) {
				editExam(m_config, new_exam, old_id);
				queryExams();
				showExams();
			}
			else {
				QMessageBox::critical(this, "修改失败", QString("不存在ID为 %1 的考试").arg(QString::number(old_id)), QMessageBox::Ok);
			}
		}
	}
}
void MainWindow::slotRemoveExam() {
	QList<QTableWidgetItem*> selected_items = ui->tableWidget_exam->selectedItems();
	if (selected_items.isEmpty()) {
		QMessageBox::critical(this, "删除失败", "请选中要删除的考试", QMessageBox::Ok);
		return;
	}
	auto ret = QMessageBox::question(this, "确认删除", QString("确认删除选中的 %1 个课程吗\n这将同步删除成绩表中该场考试的成绩").arg(QString::number(selected_items.size() / 3)), QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Cancel);
	if (ret == QMessageBox::Cancel) return;
	removeExam(m_config, m_exam_list.at(selected_items.at(0)->row()).m_id);
	queryExams();
	showExams();
}
void MainWindow::slotAddScores() {
	QList<ScoreSet> ss_list;
	ScoreDialog* score_dialog = new ScoreDialog(this, this);
	score_dialog->setWindowTitle("导入成绩");
	score_dialog->setAttribute(Qt::WA_DeleteOnClose);
	QMetaObject::Connection conn = connect(score_dialog, &ScoreDialog::dialogClose, [&](const QList<ScoreSet>& add_ss_list) {
		ss_list = add_ss_list;
		});
	auto ret = score_dialog->exec();
	disconnect(conn);
	if (ret == QDialog::Accepted) {
		int falied = 0;
		for (auto& element : ss_list) {
			Score one_score;
			one_score.m_student_id = element.m_student_id;
			one_score.m_exam_id = element.m_exam_id;
			for (int i = 0; i < m_course_list.size(); ++i) {
				one_score.m_course_id = m_course_list.at(i).m_id;
				one_score.m_score = element.m_scores.at(i);
				if (!hasScore(m_config, one_score)) {
					insertScore(m_config, one_score);
				}
				else {
					++falied;
				}
			}
		}
		if (falied > 0) {
			QMessageBox::information(this, "插入失败", QString("您插入的数据中有 %1 条数据冲突").arg(QString::number(falied)), QMessageBox::Ok);
		}
	}
	queryScores();
	showScores();
}
void MainWindow::slotEditScore() {
	QList<QTableWidgetItem*> selected_items = ui->tableWidget_score->selectedItems();
	if (selected_items.isEmpty()) {
		QMessageBox::critical(this, "修改失败", "请选中要修改的记录", QMessageBox::Ok);
		return;
	}
	unsigned int to_edit_index = ui->tableWidget_score->item(selected_items.at(0)->row(), 4 + m_course_list.size())->text().toUInt() - 1;
	ScoreSet ss = m_scores_set_list.at(to_edit_index);
	ScoreSet edited_ss = ss;
	ScoreDialog* score_dialog = new ScoreDialog(this, this);
	score_dialog->setWindowTitle("修改成绩");
	score_dialog->setAttribute(Qt::WA_DeleteOnClose);
	QMetaObject::Connection conn = connect(score_dialog, &ScoreDialog::dialogClose, [&](const QList<ScoreSet>& edit_ss_list) {
		edited_ss = edit_ss_list.at(0);
		});
	score_dialog->setEditScore(edited_ss);
	auto ret = score_dialog->exec();
	disconnect(conn);
	if (ret == QDialog::Accepted) {
		Score score;
		score.m_student_id = ss.m_student_id;
		score.m_exam_id = ss.m_exam_id;
		for (int i = 0; i < edited_ss.m_scores.size(); ++i) {
			if (edited_ss.m_scores.at(i) != ss.m_scores.at(i)) {
				score.m_course_id = m_course_list.at(i).m_id;
				score.m_score = edited_ss.m_scores.at(i);
				if (hasScore(m_config, score)) {
					editScore(m_config, score);
				}
				else {
					insertScore(m_config, score);
				}
			}
		}
	}
	queryScores();
	showScores();
}
void MainWindow::slotRemoveScore() {
	QList<QTableWidgetItem*> selected_items = ui->tableWidget_score->selectedItems();
	if (selected_items.isEmpty()) {
		QMessageBox::critical(this, "删除失败", "请选中要删除的记录", QMessageBox::Ok);
		return;
	}
	QTableWidgetItem* item = selected_items.at(0);
	if (item->column() < 3 || item->column() >= 3 + m_course_list.size()) {
		auto ret = QMessageBox::question(this, "确认删除", "确认删除选中的这个学生的成绩吗\n这将删除该学生在这场考试中的所有成绩", QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Cancel);
		if (ret == QMessageBox::Cancel) return;
		for (auto& element : m_course_list) {
			Score to_remove;
			to_remove.m_course_id = element.m_id;
			// 用排名得出选中的成绩在m_scores_set_list中的位置
			// 不能用item->row()，会在排序后失效
			to_remove.m_exam_id = m_scores_set_list.at(ui->tableWidget_score->item(item->row(), 4 + m_course_list.size())->text().toUInt() - 1).m_exam_id;
			to_remove.m_student_id = m_scores_set_list.at(ui->tableWidget_score->item(item->row(), 4 + m_course_list.size())->text().toUInt() - 1).m_student_id;
			removeScore(m_config, to_remove);
		}
	}
	else {
		auto ret = QMessageBox::question(this, "确认删除", QString("确认删除选中的这个学生的 %1 成绩吗").arg(m_course_list.at(item->column() - 3).m_name), QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Cancel);
		if (ret == QMessageBox::Cancel) return;
		Score to_remove;
		to_remove.m_course_id = m_course_list.at(item->column() - 3).m_id;
		to_remove.m_exam_id = m_scores_set_list.at(ui->tableWidget_score->item(item->row(), 4 + m_course_list.size())->text().toUInt() - 1).m_exam_id;
		to_remove.m_student_id = m_scores_set_list.at(ui->tableWidget_score->item(item->row(), 4 + m_course_list.size())->text().toUInt() - 1).m_student_id;
		removeScore(m_config, to_remove);
	}
	queryScores();
	showScores();
}