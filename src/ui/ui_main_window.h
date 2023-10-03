/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionshez;
    QAction *action_settings;
    QAction *action_exit;
    QAction *action;
    QAction *action_exit_2;
    QAction *actionshai;
    QAction *actionedit;
    QAction *action_file_exit;
    QAction *action_window_student_select;
    QAction *action_window_student_edit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_student;
    QPushButton *pushButton_teach;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_score;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QWidget *widget_12;
    QGridLayout *gridLayout_14;
    QTableWidget *tableWidget_student;
    QWidget *widget_group_box_container;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox_student_select;
    QGridLayout *gridLayout;
    QWidget *widget_13;
    QGridLayout *gridLayout_15;
    QLabel *label_10;
    QLabel *label_9;
    QComboBox *comboBox_student_select_class;
    QComboBox *comboBox_student_select_grade;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_6;
    QGridLayout *gridLayout_12;
    QPushButton *pushButton_student_select_refresh;
    QWidget *widget_11;
    QGridLayout *gridLayout_13;
    QComboBox *comboBox_student_select_gender;
    QLabel *label_3;
    QComboBox *comboBox_student_select_order_id;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox_student_edit;
    QGridLayout *gridLayout_11;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_student_id;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_student_name;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_student_grade;
    QLabel *label_7;
    QLineEdit *lineEdit_student_class;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_student_age;
    QLabel *label_6;
    QLineEdit *lineEdit_student_gender;
    QWidget *widget_8;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_student_remove;
    QPushButton *pushButton_student_edit;
    QPushButton *pushButton_student_add;
    QWidget *page_3;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget_teach;
    QWidget *tab_course;
    QGridLayout *gridLayout_18;
    QWidget *widget_14;
    QGridLayout *gridLayout_17;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_course_add;
    QPushButton *pushButton_course_edit;
    QPushButton *pushButton_course_remove;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_course_refresh;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *server_groupBox;
    QGridLayout *gridLayout_16;
    QTableWidget *tableWidget_course;
    QWidget *widget_4;
    QGridLayout *gridLayout_35;
    QLabel *label_course_num_output;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_22;
    QLabel *label_21;
    QLabel *label_course_id_output;
    QSpacerItem *horizontalSpacer_23;
    QWidget *tab_exam;
    QGridLayout *gridLayout_21;
    QWidget *widget_15;
    QGridLayout *gridLayout_20;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButton_exam_refresh;
    QPushButton *pushButton_exam_add;
    QPushButton *pushButton_exam_edit;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *pushButton_exam_remove;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QGroupBox *server_groupBox_2;
    QGridLayout *gridLayout_19;
    QTableWidget *tableWidget_exam;
    QWidget *page_4;
    QGridLayout *gridLayout_8;
    QTableWidget *tableWidget_score;
    QWidget *widget_group_box_container_2;
    QGridLayout *gridLayout_27;
    QGroupBox *groupBox_score_edit;
    QGridLayout *gridLayout_28;
    QWidget *widget_26;
    QGridLayout *gridLayout_29;
    QPushButton *pushButton_score_remove;
    QPushButton *pushButton_score_edit;
    QPushButton *pushButton_score_add;
    QPushButton *pushButton_score_refresh;
    QSpacerItem *verticalSpacer_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(873, 593);
        MainWindow->setMinimumSize(QSize(600, 550));
        actionshez = new QAction(MainWindow);
        actionshez->setObjectName(QString::fromUtf8("actionshez"));
        action_settings = new QAction(MainWindow);
        action_settings->setObjectName(QString::fromUtf8("action_settings"));
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QString::fromUtf8("action_exit"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action->setCheckable(false);
        action_exit_2 = new QAction(MainWindow);
        action_exit_2->setObjectName(QString::fromUtf8("action_exit_2"));
        actionshai = new QAction(MainWindow);
        actionshai->setObjectName(QString::fromUtf8("actionshai"));
        actionedit = new QAction(MainWindow);
        actionedit->setObjectName(QString::fromUtf8("actionedit"));
        action_file_exit = new QAction(MainWindow);
        action_file_exit->setObjectName(QString::fromUtf8("action_file_exit"));
        action_window_student_select = new QAction(MainWindow);
        action_window_student_select->setObjectName(QString::fromUtf8("action_window_student_select"));
        action_window_student_edit = new QAction(MainWindow);
        action_window_student_edit->setObjectName(QString::fromUtf8("action_window_student_edit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_student = new QPushButton(widget);
        pushButton_student->setObjectName(QString::fromUtf8("pushButton_student"));
        pushButton_student->setMinimumSize(QSize(120, 60));

        gridLayout_2->addWidget(pushButton_student, 1, 0, 1, 1);

        pushButton_teach = new QPushButton(widget);
        pushButton_teach->setObjectName(QString::fromUtf8("pushButton_teach"));
        pushButton_teach->setMinimumSize(QSize(120, 60));

        gridLayout_2->addWidget(pushButton_teach, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_4, 4, 0, 1, 1);

        pushButton_score = new QPushButton(widget);
        pushButton_score->setObjectName(QString::fromUtf8("pushButton_score"));
        pushButton_score->setMinimumSize(QSize(120, 60));

        gridLayout_2->addWidget(pushButton_score, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_3, 2, 0, 1, 1);


        gridLayout_3->addWidget(widget, 1, 1, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget_12 = new QWidget(page_2);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        gridLayout_14 = new QGridLayout(widget_12);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(6, 0, 0, 0);
        tableWidget_student = new QTableWidget(widget_12);
        tableWidget_student->setObjectName(QString::fromUtf8("tableWidget_student"));
        tableWidget_student->setStyleSheet(QString::fromUtf8("QHeaderView::section {border: 6px black;}\n"
""));
        tableWidget_student->verticalHeader()->setHighlightSections(true);

        gridLayout_14->addWidget(tableWidget_student, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_12, 0, 0, 1, 1);

        widget_group_box_container = new QWidget(page_2);
        widget_group_box_container->setObjectName(QString::fromUtf8("widget_group_box_container"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_group_box_container->sizePolicy().hasHeightForWidth());
        widget_group_box_container->setSizePolicy(sizePolicy);
        widget_group_box_container->setMinimumSize(QSize(0, 0));
        widget_group_box_container->setMaximumSize(QSize(240, 16777215));
        gridLayout_10 = new QGridLayout(widget_group_box_container);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 12, 0, 12);
        groupBox_student_select = new QGroupBox(widget_group_box_container);
        groupBox_student_select->setObjectName(QString::fromUtf8("groupBox_student_select"));
        gridLayout = new QGridLayout(groupBox_student_select);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_13 = new QWidget(groupBox_student_select);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        gridLayout_15 = new QGridLayout(widget_13);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(-1, 5, -1, 5);
        label_10 = new QLabel(widget_13);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_15->addWidget(label_10, 0, 3, 1, 1);

        label_9 = new QLabel(widget_13);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_15->addWidget(label_9, 0, 0, 1, 1);

        comboBox_student_select_class = new QComboBox(widget_13);
        comboBox_student_select_class->setObjectName(QString::fromUtf8("comboBox_student_select_class"));

        gridLayout_15->addWidget(comboBox_student_select_class, 0, 4, 1, 1);

        comboBox_student_select_grade = new QComboBox(widget_13);
        comboBox_student_select_grade->setObjectName(QString::fromUtf8("comboBox_student_select_grade"));

        gridLayout_15->addWidget(comboBox_student_select_grade, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout->addWidget(widget_13, 1, 0, 1, 1);

        widget_6 = new QWidget(groupBox_student_select);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_12 = new QGridLayout(widget_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(-1, 5, -1, 5);
        pushButton_student_select_refresh = new QPushButton(widget_6);
        pushButton_student_select_refresh->setObjectName(QString::fromUtf8("pushButton_student_select_refresh"));
        pushButton_student_select_refresh->setMinimumSize(QSize(80, 30));
        pushButton_student_select_refresh->setMaximumSize(QSize(80, 30));

        gridLayout_12->addWidget(pushButton_student_select_refresh, 1, 0, 1, 1);


        gridLayout->addWidget(widget_6, 3, 0, 1, 1);

        widget_11 = new QWidget(groupBox_student_select);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        gridLayout_13 = new QGridLayout(widget_11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(-1, 5, -1, 5);
        comboBox_student_select_gender = new QComboBox(widget_11);
        comboBox_student_select_gender->setObjectName(QString::fromUtf8("comboBox_student_select_gender"));

        gridLayout_13->addWidget(comboBox_student_select_gender, 0, 4, 1, 1);

        label_3 = new QLabel(widget_11);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_13->addWidget(label_3, 0, 0, 1, 1);

        comboBox_student_select_order_id = new QComboBox(widget_11);
        comboBox_student_select_order_id->setObjectName(QString::fromUtf8("comboBox_student_select_order_id"));

        gridLayout_13->addWidget(comboBox_student_select_order_id, 0, 1, 1, 1);

        label_8 = new QLabel(widget_11);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_13->addWidget(label_8, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        gridLayout->addWidget(widget_11, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_student_select, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_5, 3, 0, 1, 1);

        groupBox_student_edit = new QGroupBox(widget_group_box_container);
        groupBox_student_edit->setObjectName(QString::fromUtf8("groupBox_student_edit"));
        gridLayout_11 = new QGridLayout(groupBox_student_edit);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        widget_7 = new QWidget(groupBox_student_edit);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_3 = new QHBoxLayout(widget_7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 5, -1, 5);
        label_2 = new QLabel(widget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(label_2);

        lineEdit_student_id = new QLineEdit(widget_7);
        lineEdit_student_id->setObjectName(QString::fromUtf8("lineEdit_student_id"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_student_id->sizePolicy().hasHeightForWidth());
        lineEdit_student_id->setSizePolicy(sizePolicy3);
        lineEdit_student_id->setMinimumSize(QSize(0, 0));
        lineEdit_student_id->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_3->addWidget(lineEdit_student_id);


        gridLayout_11->addWidget(widget_7, 2, 0, 1, 1);

        widget_9 = new QWidget(groupBox_student_edit);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_2 = new QHBoxLayout(widget_9);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 5);
        label = new QLabel(widget_9);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label);

        lineEdit_student_name = new QLineEdit(widget_9);
        lineEdit_student_name->setObjectName(QString::fromUtf8("lineEdit_student_name"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit_student_name->sizePolicy().hasHeightForWidth());
        lineEdit_student_name->setSizePolicy(sizePolicy4);
        lineEdit_student_name->setMinimumSize(QSize(130, 0));
        lineEdit_student_name->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_2->addWidget(lineEdit_student_name);


        gridLayout_11->addWidget(widget_9, 1, 0, 1, 1);

        widget_10 = new QWidget(groupBox_student_edit);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_6 = new QHBoxLayout(widget_10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(9, 5, 9, 5);
        label_4 = new QLabel(widget_10);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        lineEdit_student_grade = new QLineEdit(widget_10);
        lineEdit_student_grade->setObjectName(QString::fromUtf8("lineEdit_student_grade"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEdit_student_grade->sizePolicy().hasHeightForWidth());
        lineEdit_student_grade->setSizePolicy(sizePolicy5);
        lineEdit_student_grade->setMinimumSize(QSize(0, 0));
        lineEdit_student_grade->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(lineEdit_student_grade);

        label_7 = new QLabel(widget_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        lineEdit_student_class = new QLineEdit(widget_10);
        lineEdit_student_class->setObjectName(QString::fromUtf8("lineEdit_student_class"));
        sizePolicy5.setHeightForWidth(lineEdit_student_class->sizePolicy().hasHeightForWidth());
        lineEdit_student_class->setSizePolicy(sizePolicy5);
        lineEdit_student_class->setMinimumSize(QSize(0, 0));
        lineEdit_student_class->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(lineEdit_student_class);


        gridLayout_11->addWidget(widget_10, 4, 0, 1, 1);

        widget_2 = new QWidget(groupBox_student_edit);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 5, -1, 5);
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_student_age = new QLineEdit(widget_2);
        lineEdit_student_age->setObjectName(QString::fromUtf8("lineEdit_student_age"));

        horizontalLayout_4->addWidget(lineEdit_student_age);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(label_6);

        lineEdit_student_gender = new QLineEdit(widget_2);
        lineEdit_student_gender->setObjectName(QString::fromUtf8("lineEdit_student_gender"));

        horizontalLayout_4->addWidget(lineEdit_student_gender);


        gridLayout_11->addWidget(widget_2, 3, 0, 1, 1);

        widget_8 = new QWidget(groupBox_student_edit);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_5 = new QGridLayout(widget_8);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(2, 2, 2, 2);
        pushButton_student_remove = new QPushButton(widget_8);
        pushButton_student_remove->setObjectName(QString::fromUtf8("pushButton_student_remove"));
        pushButton_student_remove->setMinimumSize(QSize(100, 30));
        pushButton_student_remove->setMaximumSize(QSize(100, 30));

        gridLayout_5->addWidget(pushButton_student_remove, 1, 0, 1, 1);

        pushButton_student_edit = new QPushButton(widget_8);
        pushButton_student_edit->setObjectName(QString::fromUtf8("pushButton_student_edit"));
        pushButton_student_edit->setMinimumSize(QSize(100, 30));
        pushButton_student_edit->setMaximumSize(QSize(100, 30));

        gridLayout_5->addWidget(pushButton_student_edit, 2, 0, 1, 1);

        pushButton_student_add = new QPushButton(widget_8);
        pushButton_student_add->setObjectName(QString::fromUtf8("pushButton_student_add"));
        pushButton_student_add->setMinimumSize(QSize(100, 30));
        pushButton_student_add->setMaximumSize(QSize(100, 30));

        gridLayout_5->addWidget(pushButton_student_add, 3, 0, 1, 1);


        gridLayout_11->addWidget(widget_8, 5, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_student_edit, 1, 0, 1, 1);


        gridLayout_4->addWidget(widget_group_box_container, 0, 1, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_6 = new QGridLayout(page_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tabWidget_teach = new QTabWidget(page_3);
        tabWidget_teach->setObjectName(QString::fromUtf8("tabWidget_teach"));
        tabWidget_teach->setStyleSheet(QString::fromUtf8("QTabBar::tab{height:32}\n"
"QTabBar::tab{width:150}"));
        tab_course = new QWidget();
        tab_course->setObjectName(QString::fromUtf8("tab_course"));
        gridLayout_18 = new QGridLayout(tab_course);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        widget_14 = new QWidget(tab_course);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        gridLayout_17 = new QGridLayout(widget_14);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(-1, 2, -1, 2);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_10, 0, 8, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        pushButton_course_add = new QPushButton(widget_14);
        pushButton_course_add->setObjectName(QString::fromUtf8("pushButton_course_add"));
        pushButton_course_add->setMinimumSize(QSize(130, 35));
        pushButton_course_add->setMaximumSize(QSize(130, 35));

        gridLayout_17->addWidget(pushButton_course_add, 0, 1, 1, 1);

        pushButton_course_edit = new QPushButton(widget_14);
        pushButton_course_edit->setObjectName(QString::fromUtf8("pushButton_course_edit"));
        pushButton_course_edit->setMinimumSize(QSize(130, 35));
        pushButton_course_edit->setMaximumSize(QSize(130, 35));

        gridLayout_17->addWidget(pushButton_course_edit, 0, 5, 1, 1);

        pushButton_course_remove = new QPushButton(widget_14);
        pushButton_course_remove->setObjectName(QString::fromUtf8("pushButton_course_remove"));
        pushButton_course_remove->setMinimumSize(QSize(130, 35));
        pushButton_course_remove->setMaximumSize(QSize(130, 35));

        gridLayout_17->addWidget(pushButton_course_remove, 0, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        pushButton_course_refresh = new QPushButton(widget_14);
        pushButton_course_refresh->setObjectName(QString::fromUtf8("pushButton_course_refresh"));
        pushButton_course_refresh->setMinimumSize(QSize(40, 35));
        pushButton_course_refresh->setMaximumSize(QSize(35, 35));

        gridLayout_17->addWidget(pushButton_course_refresh, 0, 7, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_12, 0, 6, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout_18->addWidget(widget_14, 0, 0, 1, 1);

        server_groupBox = new QGroupBox(tab_course);
        server_groupBox->setObjectName(QString::fromUtf8("server_groupBox"));
        gridLayout_16 = new QGridLayout(server_groupBox);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(-1, 3, -1, 9);
        tableWidget_course = new QTableWidget(server_groupBox);
        tableWidget_course->setObjectName(QString::fromUtf8("tableWidget_course"));
        tableWidget_course->setLayoutDirection(Qt::LeftToRight);
        tableWidget_course->setStyleSheet(QString::fromUtf8("QHeaderView::section {border: 6px black;}"));
        tableWidget_course->setLocale(QLocale(QLocale::Cherokee, QLocale::UnitedStates));
        tableWidget_course->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_course->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableWidget_course->setTextElideMode(Qt::ElideMiddle);
        tableWidget_course->setShowGrid(false);
        tableWidget_course->setGridStyle(Qt::DashDotLine);
        tableWidget_course->setSortingEnabled(false);

        gridLayout_16->addWidget(tableWidget_course, 0, 0, 1, 1);

        widget_4 = new QWidget(server_groupBox);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_35 = new QGridLayout(widget_4);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        label_course_num_output = new QLabel(widget_4);
        label_course_num_output->setObjectName(QString::fromUtf8("label_course_num_output"));
        label_course_num_output->setMinimumSize(QSize(80, 0));
        QFont font;
        font.setPointSize(12);
        label_course_num_output->setFont(font);

        gridLayout_35->addWidget(label_course_num_output, 0, 2, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_35->addItem(horizontalSpacer_22, 0, 0, 1, 1);

        label_22 = new QLabel(widget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_35->addWidget(label_22, 0, 1, 1, 1);

        label_21 = new QLabel(widget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_35->addWidget(label_21, 0, 3, 1, 1);

        label_course_id_output = new QLabel(widget_4);
        label_course_id_output->setObjectName(QString::fromUtf8("label_course_id_output"));
        label_course_id_output->setMinimumSize(QSize(80, 0));
        label_course_id_output->setFont(font);

        gridLayout_35->addWidget(label_course_id_output, 0, 4, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_35->addItem(horizontalSpacer_23, 0, 5, 1, 1);


        gridLayout_16->addWidget(widget_4, 1, 0, 1, 1);


        gridLayout_18->addWidget(server_groupBox, 1, 0, 1, 1);

        tabWidget_teach->addTab(tab_course, QString());
        tab_exam = new QWidget();
        tab_exam->setObjectName(QString::fromUtf8("tab_exam"));
        gridLayout_21 = new QGridLayout(tab_exam);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        widget_15 = new QWidget(tab_exam);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        gridLayout_20 = new QGridLayout(widget_15);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_20->setContentsMargins(-1, 2, -1, 2);
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_13, 0, 2, 1, 1);

        pushButton_exam_refresh = new QPushButton(widget_15);
        pushButton_exam_refresh->setObjectName(QString::fromUtf8("pushButton_exam_refresh"));
        pushButton_exam_refresh->setMinimumSize(QSize(40, 35));
        pushButton_exam_refresh->setMaximumSize(QSize(35, 35));

        gridLayout_20->addWidget(pushButton_exam_refresh, 0, 7, 1, 1);

        pushButton_exam_add = new QPushButton(widget_15);
        pushButton_exam_add->setObjectName(QString::fromUtf8("pushButton_exam_add"));
        pushButton_exam_add->setMinimumSize(QSize(130, 35));
        pushButton_exam_add->setMaximumSize(QSize(130, 35));

        gridLayout_20->addWidget(pushButton_exam_add, 0, 1, 1, 1);

        pushButton_exam_edit = new QPushButton(widget_15);
        pushButton_exam_edit->setObjectName(QString::fromUtf8("pushButton_exam_edit"));
        pushButton_exam_edit->setMinimumSize(QSize(130, 35));
        pushButton_exam_edit->setMaximumSize(QSize(130, 35));

        gridLayout_20->addWidget(pushButton_exam_edit, 0, 5, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_14, 0, 0, 1, 1);

        pushButton_exam_remove = new QPushButton(widget_15);
        pushButton_exam_remove->setObjectName(QString::fromUtf8("pushButton_exam_remove"));
        pushButton_exam_remove->setMinimumSize(QSize(130, 35));
        pushButton_exam_remove->setMaximumSize(QSize(130, 35));

        gridLayout_20->addWidget(pushButton_exam_remove, 0, 3, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_15, 0, 8, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_16, 0, 6, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_17, 0, 4, 1, 1);


        gridLayout_21->addWidget(widget_15, 0, 0, 1, 1);

        server_groupBox_2 = new QGroupBox(tab_exam);
        server_groupBox_2->setObjectName(QString::fromUtf8("server_groupBox_2"));
        gridLayout_19 = new QGridLayout(server_groupBox_2);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(-1, 3, -1, 9);
        tableWidget_exam = new QTableWidget(server_groupBox_2);
        tableWidget_exam->setObjectName(QString::fromUtf8("tableWidget_exam"));
        tableWidget_exam->setLayoutDirection(Qt::LeftToRight);
        tableWidget_exam->setStyleSheet(QString::fromUtf8("QHeaderView::section {border: 6px black;}"));
        tableWidget_exam->setLocale(QLocale(QLocale::Cherokee, QLocale::UnitedStates));
        tableWidget_exam->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_exam->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableWidget_exam->setTextElideMode(Qt::ElideMiddle);
        tableWidget_exam->setShowGrid(false);
        tableWidget_exam->setGridStyle(Qt::DashDotLine);
        tableWidget_exam->setSortingEnabled(false);

        gridLayout_19->addWidget(tableWidget_exam, 0, 0, 1, 1);


        gridLayout_21->addWidget(server_groupBox_2, 1, 0, 1, 1);

        tabWidget_teach->addTab(tab_exam, QString());

        gridLayout_6->addWidget(tabWidget_teach, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_8 = new QGridLayout(page_4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        tableWidget_score = new QTableWidget(page_4);
        tableWidget_score->setObjectName(QString::fromUtf8("tableWidget_score"));
        tableWidget_score->setStyleSheet(QString::fromUtf8("QHeaderView::section {border: 6px black;}\n"
""));
        tableWidget_score->verticalHeader()->setHighlightSections(true);

        gridLayout_8->addWidget(tableWidget_score, 0, 0, 1, 1);

        widget_group_box_container_2 = new QWidget(page_4);
        widget_group_box_container_2->setObjectName(QString::fromUtf8("widget_group_box_container_2"));
        sizePolicy.setHeightForWidth(widget_group_box_container_2->sizePolicy().hasHeightForWidth());
        widget_group_box_container_2->setSizePolicy(sizePolicy);
        widget_group_box_container_2->setMinimumSize(QSize(0, 0));
        widget_group_box_container_2->setMaximumSize(QSize(240, 16777215));
        gridLayout_27 = new QGridLayout(widget_group_box_container_2);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        gridLayout_27->setContentsMargins(0, 12, 0, 12);
        groupBox_score_edit = new QGroupBox(widget_group_box_container_2);
        groupBox_score_edit->setObjectName(QString::fromUtf8("groupBox_score_edit"));
        gridLayout_28 = new QGridLayout(groupBox_score_edit);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        widget_26 = new QWidget(groupBox_score_edit);
        widget_26->setObjectName(QString::fromUtf8("widget_26"));
        gridLayout_29 = new QGridLayout(widget_26);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        gridLayout_29->setContentsMargins(2, 2, 2, 2);
        pushButton_score_remove = new QPushButton(widget_26);
        pushButton_score_remove->setObjectName(QString::fromUtf8("pushButton_score_remove"));
        pushButton_score_remove->setMinimumSize(QSize(80, 30));
        pushButton_score_remove->setMaximumSize(QSize(80, 30));

        gridLayout_29->addWidget(pushButton_score_remove, 2, 0, 1, 1);

        pushButton_score_edit = new QPushButton(widget_26);
        pushButton_score_edit->setObjectName(QString::fromUtf8("pushButton_score_edit"));
        pushButton_score_edit->setMinimumSize(QSize(80, 30));
        pushButton_score_edit->setMaximumSize(QSize(80, 30));

        gridLayout_29->addWidget(pushButton_score_edit, 1, 0, 1, 1);

        pushButton_score_add = new QPushButton(widget_26);
        pushButton_score_add->setObjectName(QString::fromUtf8("pushButton_score_add"));
        pushButton_score_add->setMinimumSize(QSize(80, 30));
        pushButton_score_add->setMaximumSize(QSize(80, 30));

        gridLayout_29->addWidget(pushButton_score_add, 3, 0, 1, 1);

        pushButton_score_refresh = new QPushButton(widget_26);
        pushButton_score_refresh->setObjectName(QString::fromUtf8("pushButton_score_refresh"));
        pushButton_score_refresh->setMinimumSize(QSize(80, 30));
        pushButton_score_refresh->setMaximumSize(QSize(80, 30));

        gridLayout_29->addWidget(pushButton_score_refresh, 0, 0, 1, 1);


        gridLayout_28->addWidget(widget_26, 1, 0, 1, 1);


        gridLayout_27->addWidget(groupBox_score_edit, 0, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_27->addItem(verticalSpacer_7, 1, 0, 1, 1);


        gridLayout_8->addWidget(widget_group_box_container_2, 0, 1, 1, 1);

        stackedWidget->addWidget(page_4);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 873, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(pushButton_student, pushButton_teach);
        QWidget::setTabOrder(pushButton_teach, pushButton_score);
        QWidget::setTabOrder(pushButton_score, comboBox_student_select_order_id);
        QWidget::setTabOrder(comboBox_student_select_order_id, comboBox_student_select_gender);
        QWidget::setTabOrder(comboBox_student_select_gender, comboBox_student_select_grade);
        QWidget::setTabOrder(comboBox_student_select_grade, comboBox_student_select_class);
        QWidget::setTabOrder(comboBox_student_select_class, pushButton_student_select_refresh);
        QWidget::setTabOrder(pushButton_student_select_refresh, lineEdit_student_name);
        QWidget::setTabOrder(lineEdit_student_name, lineEdit_student_id);
        QWidget::setTabOrder(lineEdit_student_id, lineEdit_student_age);
        QWidget::setTabOrder(lineEdit_student_age, lineEdit_student_gender);
        QWidget::setTabOrder(lineEdit_student_gender, lineEdit_student_grade);
        QWidget::setTabOrder(lineEdit_student_grade, lineEdit_student_class);
        QWidget::setTabOrder(lineEdit_student_class, pushButton_student_remove);
        QWidget::setTabOrder(pushButton_student_remove, pushButton_student_edit);
        QWidget::setTabOrder(pushButton_student_edit, pushButton_student_add);
        QWidget::setTabOrder(pushButton_student_add, pushButton_course_add);
        QWidget::setTabOrder(pushButton_course_add, pushButton_course_remove);
        QWidget::setTabOrder(pushButton_course_remove, pushButton_course_refresh);
        QWidget::setTabOrder(pushButton_course_refresh, tableWidget_exam);
        QWidget::setTabOrder(tableWidget_exam, pushButton_exam_edit);
        QWidget::setTabOrder(pushButton_exam_edit, pushButton_exam_add);
        QWidget::setTabOrder(pushButton_exam_add, pushButton_exam_remove);
        QWidget::setTabOrder(pushButton_exam_remove, tabWidget_teach);
        QWidget::setTabOrder(tabWidget_teach, tableWidget_course);
        QWidget::setTabOrder(tableWidget_course, tableWidget_student);
        QWidget::setTabOrder(tableWidget_student, pushButton_exam_refresh);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);
        tabWidget_teach->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionshez->setText(QCoreApplication::translate("MainWindow", "shez", nullptr));
        action_settings->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        action_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206", nullptr));
        action_exit_2->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actionshai->setText(QCoreApplication::translate("MainWindow", "shai", nullptr));
        actionedit->setText(QCoreApplication::translate("MainWindow", "edit", nullptr));
        action_file_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        action_window_student_select->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211", nullptr));
        action_window_student_edit->setText(QCoreApplication::translate("MainWindow", "edit", nullptr));
        pushButton_student->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206", nullptr));
        pushButton_teach->setText(QCoreApplication::translate("MainWindow", "\346\225\231\345\255\246\350\256\241\345\210\222", nullptr));
        pushButton_score->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        groupBox_student_select->setTitle(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\271\264\347\272\247\357\274\232", nullptr));
        pushButton_student_select_refresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", nullptr));
        groupBox_student_edit->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\271\264\347\272\247\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", nullptr));
        pushButton_student_remove->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\345\255\246\347\224\237", nullptr));
        pushButton_student_edit->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        pushButton_student_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\260\345\255\246\347\224\237", nullptr));
        pushButton_course_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\260\350\257\276\347\250\213", nullptr));
        pushButton_course_edit->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        pushButton_course_remove->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\350\257\276\347\250\213", nullptr));
        pushButton_course_refresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        server_groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\345\210\227\350\241\250", nullptr));
        label_course_num_output->setText(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\346\200\273\346\225\260\357\274\232", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213ID\357\274\232", nullptr));
        label_course_id_output->setText(QString());
        tabWidget_teach->setTabText(tabWidget_teach->indexOf(tab_course), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        pushButton_exam_refresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        pushButton_exam_add->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\350\200\203\350\257\225\350\256\241\345\210\222", nullptr));
        pushButton_exam_edit->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\350\200\203\350\257\225\344\277\241\346\201\257", nullptr));
        pushButton_exam_remove->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\350\200\203\350\257\225", nullptr));
        server_groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\350\200\203\350\257\225\345\256\211\346\216\222", nullptr));
        tabWidget_teach->setTabText(tabWidget_teach->indexOf(tab_exam), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        groupBox_score_edit->setTitle(QCoreApplication::translate("MainWindow", "\346\223\215\344\275\234", nullptr));
        pushButton_score_remove->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
        pushButton_score_edit->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\346\210\220\347\273\251", nullptr));
        pushButton_score_add->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245\346\210\220\347\273\251", nullptr));
        pushButton_score_refresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
