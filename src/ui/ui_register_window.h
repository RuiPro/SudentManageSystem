/********************************************************************************
** Form generated from reading UI file 'register_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_WINDOW_H
#define UI_REGISTER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QLabel *label_step_1;
    QLabel *label_step_2;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_step_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout_4;
    QWidget *widget_6;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_register_token;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_passwd2;
    QCheckBox *checkBox_display_passwd2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_passwd1;
    QCheckBox *checkBox_display_passwd1;
    QWidget *widget_7;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_register;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_info_output;
    QLabel *label_2;
    QWidget *page_4;
    QGridLayout *gridLayout_10;
    QLabel *label_account_output;
    QWidget *widget_10;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_nickame;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_2;
    QGridLayout *gridLayout_7;
    QRadioButton *radioButton_gender_woman;
    QRadioButton *radioButton_gender_man;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_7;
    QWidget *widget_9;
    QGridLayout *gridLayout_9;
    QLabel *label_19;
    QLineEdit *lineEdit_nickname;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_11;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_8;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_finish;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QMainWindow *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QString::fromUtf8("RegisterWindow"));
        RegisterWindow->resize(480, 320);
        RegisterWindow->setMinimumSize(QSize(480, 320));
        RegisterWindow->setMaximumSize(QSize(480, 320));
        centralwidget = new QWidget(RegisterWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_step_1 = new QLabel(widget);
        label_step_1->setObjectName(QString::fromUtf8("label_step_1"));
        label_step_1->setMinimumSize(QSize(15, 0));
        label_step_1->setMaximumSize(QSize(15, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(9);
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        label_step_1->setFont(font);
        label_step_1->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_step_1, 0, 1, 1, 1);

        label_step_2 = new QLabel(widget);
        label_step_2->setObjectName(QString::fromUtf8("label_step_2"));
        label_step_2->setMinimumSize(QSize(15, 0));
        label_step_2->setMaximumSize(QSize(15, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        label_step_2->setFont(font1);
        label_step_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_step_2, 0, 3, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(15, 0));
        label_11->setMaximumSize(QSize(15, 16777215));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_11, 0, 4, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(15, 0));
        label_9->setMaximumSize(QSize(15, 16777215));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_9, 0, 2, 1, 1);

        label_step_3 = new QLabel(widget);
        label_step_3->setObjectName(QString::fromUtf8("label_step_3"));
        label_step_3->setMinimumSize(QSize(15, 0));
        label_step_3->setMaximumSize(QSize(15, 16777215));
        label_step_3->setFont(font1);
        label_step_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_step_3, 0, 5, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(16);
        label->setFont(font2);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 6, 1, 1);


        verticalLayout->addWidget(widget);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget_6 = new QWidget(page_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout = new QGridLayout(widget_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 5);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(90, 24));
        label_3->setMaximumSize(QSize(90, 24));
        QFont font3;
        font3.setPointSize(10);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_register_token = new QLineEdit(widget_3);
        lineEdit_register_token->setObjectName(QString::fromUtf8("lineEdit_register_token"));
        lineEdit_register_token->setMinimumSize(QSize(218, 24));
        lineEdit_register_token->setMaximumSize(QSize(230, 24));

        horizontalLayout_2->addWidget(lineEdit_register_token);


        gridLayout->addWidget(widget_3, 2, 1, 1, 1);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 5, -1, 5);
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(90, 24));
        label_4->setMaximumSize(QSize(90, 24));
        label_4->setFont(font3);

        horizontalLayout_3->addWidget(label_4);

        lineEdit_passwd2 = new QLineEdit(widget_4);
        lineEdit_passwd2->setObjectName(QString::fromUtf8("lineEdit_passwd2"));
        lineEdit_passwd2->setMinimumSize(QSize(200, 24));
        lineEdit_passwd2->setMaximumSize(QSize(230, 24));
        QFont font4;
        font4.setPointSize(9);
        lineEdit_passwd2->setFont(font4);
        lineEdit_passwd2->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_passwd2);

        checkBox_display_passwd2 = new QCheckBox(widget_4);
        checkBox_display_passwd2->setObjectName(QString::fromUtf8("checkBox_display_passwd2"));

        horizontalLayout_3->addWidget(checkBox_display_passwd2);


        gridLayout->addWidget(widget_4, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setCursor(QCursor(Qt::SizeVerCursor));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 5, -1, 5);
        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(90, 24));
        label_6->setMaximumSize(QSize(90, 24));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_6);

        lineEdit_passwd1 = new QLineEdit(widget_5);
        lineEdit_passwd1->setObjectName(QString::fromUtf8("lineEdit_passwd1"));
        lineEdit_passwd1->setMinimumSize(QSize(200, 24));
        lineEdit_passwd1->setMaximumSize(QSize(230, 24));

        horizontalLayout_5->addWidget(lineEdit_passwd1);

        checkBox_display_passwd1 = new QCheckBox(widget_5);
        checkBox_display_passwd1->setObjectName(QString::fromUtf8("checkBox_display_passwd1"));

        horizontalLayout_5->addWidget(checkBox_display_passwd1);


        gridLayout->addWidget(widget_5, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget_6, 2, 0, 1, 1);

        widget_7 = new QWidget(page_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout_2 = new QGridLayout(widget_7);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 2, -1, 9);
        pushButton_register = new QPushButton(widget_7);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setMinimumSize(QSize(100, 36));
        pushButton_register->setMaximumSize(QSize(100, 36));

        gridLayout_2->addWidget(pushButton_register, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_7, 4, 0, 1, 1);

        label_info_output = new QLabel(page_3);
        label_info_output->setObjectName(QString::fromUtf8("label_info_output"));
        label_info_output->setMinimumSize(QSize(200, 0));
        label_info_output->setLayoutDirection(Qt::LeftToRight);
        label_info_output->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_info_output, 3, 0, 1, 1);

        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_10 = new QGridLayout(page_4);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_account_output = new QLabel(page_4);
        label_account_output->setObjectName(QString::fromUtf8("label_account_output"));
        label_account_output->setMinimumSize(QSize(0, 46));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(16);
        label_account_output->setFont(font5);
        label_account_output->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_account_output, 1, 0, 1, 1);

        widget_10 = new QWidget(page_4);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        gridLayout_5 = new QGridLayout(widget_10);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, 2, -1, 9);
        pushButton_nickame = new QPushButton(widget_10);
        pushButton_nickame->setObjectName(QString::fromUtf8("pushButton_nickame"));
        pushButton_nickame->setMinimumSize(QSize(100, 36));
        pushButton_nickame->setMaximumSize(QSize(100, 36));

        gridLayout_5->addWidget(pushButton_nickame, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 0, 0, 1, 1);


        gridLayout_10->addWidget(widget_10, 4, 0, 1, 1);

        widget_2 = new QWidget(page_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_7 = new QGridLayout(widget_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        radioButton_gender_woman = new QRadioButton(widget_2);
        radioButton_gender_woman->setObjectName(QString::fromUtf8("radioButton_gender_woman"));

        gridLayout_7->addWidget(radioButton_gender_woman, 0, 2, 1, 1);

        radioButton_gender_man = new QRadioButton(widget_2);
        radioButton_gender_man->setObjectName(QString::fromUtf8("radioButton_gender_man"));

        gridLayout_7->addWidget(radioButton_gender_man, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 0, 3, 1, 1);


        gridLayout_10->addWidget(widget_2, 3, 0, 1, 1);

        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 16));
        label_7->setMaximumSize(QSize(16777215, 30));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_7, 0, 0, 1, 1);

        widget_9 = new QWidget(page_4);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setMinimumSize(QSize(0, 80));
        gridLayout_9 = new QGridLayout(widget_9);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(-1, 0, -1, -1);
        label_19 = new QLabel(widget_9);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font3);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_19, 1, 1, 1, 1);

        lineEdit_nickname = new QLineEdit(widget_9);
        lineEdit_nickname->setObjectName(QString::fromUtf8("lineEdit_nickname"));
        lineEdit_nickname->setMinimumSize(QSize(0, 24));

        gridLayout_9->addWidget(lineEdit_nickname, 2, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 2, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_10, 2, 2, 1, 1);


        gridLayout_10->addWidget(widget_9, 2, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_11 = new QWidget(page);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        gridLayout_8 = new QGridLayout(widget_11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(-1, 2, -1, 9);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_2, 0, 0, 1, 3);

        label_5 = new QLabel(widget_11);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font6.setPointSize(16);
        label_5->setFont(font6);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_5, 1, 0, 1, 3);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_13, 10, 0, 1, 1);

        label_8 = new QLabel(widget_11);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_8, 3, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 4, 0, 1, 3);

        pushButton_finish = new QPushButton(widget_11);
        pushButton_finish->setObjectName(QString::fromUtf8("pushButton_finish"));
        pushButton_finish->setMinimumSize(QSize(100, 36));
        pushButton_finish->setMaximumSize(QSize(100, 36));

        gridLayout_8->addWidget(pushButton_finish, 10, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_12, 10, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_3, 2, 0, 1, 3);


        verticalLayout_2->addWidget(widget_11);

        stackedWidget->addWidget(page);

        verticalLayout->addWidget(stackedWidget);

        RegisterWindow->setCentralWidget(centralwidget);

        retranslateUi(RegisterWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "\346\263\250\345\206\214", nullptr));
        label_step_1->setText(QCoreApplication::translate("RegisterWindow", "1", nullptr));
        label_step_2->setText(QCoreApplication::translate("RegisterWindow", "2", nullptr));
        label_11->setText(QCoreApplication::translate("RegisterWindow", ">>", nullptr));
        label_9->setText(QCoreApplication::translate("RegisterWindow", ">>", nullptr));
        label_step_3->setText(QCoreApplication::translate("RegisterWindow", "3", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", " \346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWindow", "\346\263\250\345\206\214\345\217\243\344\273\244\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterWindow", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", nullptr));
        checkBox_display_passwd2->setText(QString());
        label_6->setText(QCoreApplication::translate("RegisterWindow", "\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", nullptr));
        checkBox_display_passwd1->setText(QString());
        pushButton_register->setText(QCoreApplication::translate("RegisterWindow", "\346\263\250\345\206\214", nullptr));
        label_info_output->setText(QString());
        label_2->setText(QCoreApplication::translate("RegisterWindow", "\350\257\267\346\202\250\350\276\223\345\205\245\350\264\246\345\217\267\345\257\206\347\240\201\345\217\212\346\263\250\345\206\214\345\217\243\344\273\244\n"
"\345\257\206\347\240\201\345\217\252\350\203\275\347\224\2610-9\343\200\201a-z\343\200\201A-Z\345\222\214_!@?\345\255\227\347\254\246\347\273\204\346\210\220\n"
"\344\270\224\351\225\277\345\272\246\344\270\2728-20\344\275\215", nullptr));
        label_account_output->setText(QCoreApplication::translate("RegisterWindow", "null", nullptr));
        pushButton_nickame->setText(QCoreApplication::translate("RegisterWindow", "\350\267\263\350\277\207", nullptr));
        radioButton_gender_woman->setText(QCoreApplication::translate("RegisterWindow", "\345\245\263\345\243\253", nullptr));
        radioButton_gender_man->setText(QCoreApplication::translate("RegisterWindow", "\345\205\210\347\224\237", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterWindow", "\346\263\250\345\206\214\346\210\220\345\212\237\357\274\201\350\257\267\346\202\250\347\211\242\350\256\260\346\202\250\350\242\253\345\210\206\351\205\215\347\232\204\350\264\246\345\217\267", nullptr));
        label_19->setText(QCoreApplication::translate("RegisterWindow", "\347\216\260\345\234\250\346\202\250\345\217\257\344\273\245\344\270\272\346\202\250\347\232\204\350\264\246\345\217\267\350\256\276\347\275\256\346\202\250\347\232\204\346\230\265\347\247\260\345\222\214\346\200\247\345\210\253", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterWindow", "\346\201\255\345\226\234\346\202\250\357\274\214\346\263\250\345\206\214\345\256\214\346\210\220\343\200\202\n"
"\346\202\250\347\216\260\345\234\250\345\217\257\344\273\245\344\273\245\346\255\244\350\264\246\345\217\267\347\231\273\345\275\225\344\272\206\343\200\202", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterWindow", "\346\202\250\347\232\204\350\264\246\345\217\267\345\267\262\347\273\217\350\242\253\350\207\252\345\212\250\350\276\223\345\205\245\345\210\260\347\231\273\345\275\225\346\241\206\343\200\202", nullptr));
        pushButton_finish->setText(QCoreApplication::translate("RegisterWindow", "\345\245\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_WINDOW_H
