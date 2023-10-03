#include "score_dialog.h"
#include "main_window.h"

ScoreDialog::ScoreDialog(const MainWindow const* mainWindow, QWidget* parent)
	: QDialog(parent)
	, ui(new Ui::ScoreDialogClass()) {
	ui->setupUi(this);

	ui->tableWidget->verticalHeader()->hide();	// 隐藏列表头
	ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui->tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::AllEditTriggers);
	ui->tableWidget->setAlternatingRowColors(true);
	ui->tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
	ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

	// 设置表头
	ui->tableWidget->setColumnCount(mainWindow->m_course_list.size() + 2);			// 学生/考试/各科成绩
	QStringList horizontalHeader;
	horizontalHeader << "学生选择";
	horizontalHeader << "考试选择";
	for (auto& element : mainWindow->m_course_list) {
		horizontalHeader << element.m_name;
	}
	ui->tableWidget->setHorizontalHeaderLabels(horizontalHeader);
	// 学生搜索下拉框
	m_completer_student = new QCompleter(this);			// 设置下拉框搜索
	m_model_student = new QStringListModel(this);			// 设置匹配列表
	for (auto& element : mainWindow->m_student_list) {
		m_list_student << QString("%1-%2").arg(QString::number(element.m_id), element.m_name);
	}
	m_model_student->setStringList(m_list_student);
	m_completer_student->setModel(m_model_student);
	m_completer_student->setFilterMode(Qt::MatchContains);			// 设置非顺序匹配字符
	m_completer_student->setCaseSensitivity(Qt::CaseInsensitive);	// 设置大小写不敏感
	// 考试搜索下拉框
	m_completer_exam = new QCompleter(this);			// 设置下拉框搜索
	m_model_exam = new QStringListModel(this);		// 设置匹配列表
	for (auto& element : mainWindow->m_exam_list) {
		m_list_exam << QString("%1(%2)").arg(element.m_name, QString::number(element.m_id));
	}
	m_model_exam->setStringList(m_list_exam);
	m_completer_exam->setModel(m_model_exam);
	m_completer_exam->setFilterMode(Qt::MatchContains);			// 设置非顺序匹配字符
	m_completer_exam->setCaseSensitivity(Qt::CaseInsensitive);	// 设置大小写不敏感
	// 添加行
	connect(ui->pushButton_add_row, &QPushButton::clicked, [=]() {
		ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
		QComboBox* combobox_student = new QComboBox();
		QComboBox* combobox_exam = new QComboBox();
		combobox_student->setEditable(true);
		combobox_exam->setEditable(true);
		combobox_student->setCompleter(m_completer_student);
		combobox_student->addItems(m_list_student);
		combobox_exam->setCompleter(m_completer_exam);
		combobox_exam->addItems(m_list_exam);
		ui->tableWidget->setCellWidget(ui->tableWidget->rowCount() - 1, 0, combobox_student);
		ui->tableWidget->setCellWidget(ui->tableWidget->rowCount() - 1, 1, combobox_exam);
		});
	// 删除选中行
	connect(ui->pushButton_remove_row, &QPushButton::clicked, [this]() {
		QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
		QSet<int> rows;
		for (const QTableWidgetItem* item : items) {
			rows.insert(item->row());
		}
		QList<int> sorted_rows = QList<int>::fromSet(rows);
		std::sort(sorted_rows.begin(), sorted_rows.end(), std::greater<int>());
		for (auto& row : sorted_rows) {
			ui->tableWidget->removeRow(row);
		}
		});

	connect(ui->pushButton_cancel, &QPushButton::clicked, this, &QDialog::reject);
	connect(ui->pushButton_cancel, &QPushButton::clicked, this, &QDialog::close);
	connect(ui->pushButton_confirm, &QPushButton::clicked, [=]() {
		// 只保存学生id、考试id和课程成绩
		QList<ScoreSet> ss_list;
		QTableWidgetItem* item;
		for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
			ScoreSet ss;
			QComboBox* combobox_student = qobject_cast<QComboBox*>(ui->tableWidget->cellWidget(row, 0));
			ss.m_student_id = mainWindow->m_student_list.at(combobox_student->currentIndex()).m_id;
			QComboBox* combobox_exam = qobject_cast<QComboBox*>(ui->tableWidget->cellWidget(row, 1));
			ss.m_exam_id = mainWindow->m_exam_list.at(combobox_exam->currentIndex()).m_id;
			for (int column = 2; column < ui->tableWidget->columnCount(); ++column) {
				item = ui->tableWidget->item(row, column);
				QString text = (item == nullptr || item->text().isEmpty()) ? "0" : item->text();
				ss.m_scores.push_back(text.toUInt());
			}
			ss_list.push_back(ss);
		}
		emit dialogClose(ss_list);
		accept();
		});
}

ScoreDialog::~ScoreDialog() {
	delete ui;
}

void ScoreDialog::setEditScore(const ScoreSet& score_set) {
	ui->pushButton_add_row->setDisabled(true);
	ui->pushButton_remove_row->setDisabled(true);
	// 添加一行输出数据
	ui->tableWidget->setRowCount(1);
	QComboBox* combobox_student = new QComboBox();
	QComboBox* combobox_exam = new QComboBox();
	combobox_student->addItems(m_list_student);
	combobox_exam->addItems(m_list_exam);
	combobox_student->setCurrentText(QString("%1-%2").arg(QString::number(score_set.m_student_id), score_set.m_student_name));
	combobox_exam->setCurrentText(QString("%1(%2)").arg(score_set.m_exam_name, QString::number(score_set.m_exam_id)));
	combobox_student->setEditable(false);
	combobox_exam->setEditable(false);
	combobox_student->setDisabled(true);
	combobox_exam->setDisabled(true);
	ui->tableWidget->setCellWidget(ui->tableWidget->rowCount() - 1, 0, combobox_student);
	ui->tableWidget->setCellWidget(ui->tableWidget->rowCount() - 1, 1, combobox_exam);
	
	for (int i = 0; i < score_set.m_scores.size(); ++i) {
		ui->tableWidget->setItem(0, i + 2, new QTableWidgetItem(QString::number(score_set.m_scores.at(i))));
	}
}
