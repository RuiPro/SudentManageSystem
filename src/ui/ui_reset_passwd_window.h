/********************************************************************************
** Form generated from reading UI file 'reset_passwd_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESET_PASSWD_WINDOW_H
#define UI_RESET_PASSWD_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResetPasswdWindowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QWidget *widget_6;
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_passwd1;
    QCheckBox *checkBox_display_passwd1;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_passwd2;
    QCheckBox *checkBox_display_passwd2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_reset_token;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *lineEdit_account;
    QLabel *label_info_output;
    QWidget *widget_7;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_reset_passwd;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QMainWindow *ResetPasswdWindowClass)
    {
        if (ResetPasswdWindowClass->objectName().isEmpty())
            ResetPasswdWindowClass->setObjectName(QString::fromUtf8("ResetPasswdWindowClass"));
        ResetPasswdWindowClass->resize(480, 320);
        ResetPasswdWindowClass->setMinimumSize(QSize(480, 320));
        ResetPasswdWindowClass->setMaximumSize(QSize(480, 320));
        centralWidget = new QWidget(ResetPasswdWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 64));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        widget_6 = new QWidget(centralWidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout = new QGridLayout(widget_6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setCursor(QCursor(Qt::SizeVerCursor));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 5, -1, 5);
        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 24));
        label_6->setMaximumSize(QSize(100, 24));
        QFont font1;
        font1.setPointSize(10);
        label_6->setFont(font1);
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


        gridLayout->addWidget(widget_5, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 5, -1, 5);
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(100, 24));
        label_4->setMaximumSize(QSize(100, 24));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        lineEdit_passwd2 = new QLineEdit(widget_4);
        lineEdit_passwd2->setObjectName(QString::fromUtf8("lineEdit_passwd2"));
        lineEdit_passwd2->setMinimumSize(QSize(200, 24));
        lineEdit_passwd2->setMaximumSize(QSize(230, 24));
        QFont font2;
        font2.setPointSize(9);
        lineEdit_passwd2->setFont(font2);
        lineEdit_passwd2->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_passwd2);

        checkBox_display_passwd2 = new QCheckBox(widget_4);
        checkBox_display_passwd2->setObjectName(QString::fromUtf8("checkBox_display_passwd2"));

        horizontalLayout_3->addWidget(checkBox_display_passwd2);


        gridLayout->addWidget(widget_4, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 5);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 24));
        label_3->setMaximumSize(QSize(100, 24));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_reset_token = new QLineEdit(widget_3);
        lineEdit_reset_token->setObjectName(QString::fromUtf8("lineEdit_reset_token"));
        lineEdit_reset_token->setMinimumSize(QSize(218, 24));
        lineEdit_reset_token->setMaximumSize(QSize(230, 24));

        horizontalLayout_2->addWidget(lineEdit_reset_token);


        gridLayout->addWidget(widget_3, 3, 1, 1, 1);

        widget_8 = new QWidget(widget_6);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setCursor(QCursor(Qt::SizeVerCursor));
        horizontalLayout_6 = new QHBoxLayout(widget_8);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 5, -1, 5);
        label_7 = new QLabel(widget_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 24));
        label_7->setMaximumSize(QSize(100, 24));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_7);

        lineEdit_account = new QLineEdit(widget_8);
        lineEdit_account->setObjectName(QString::fromUtf8("lineEdit_account"));
        lineEdit_account->setMinimumSize(QSize(200, 24));
        lineEdit_account->setMaximumSize(QSize(230, 24));

        horizontalLayout_6->addWidget(lineEdit_account);


        gridLayout->addWidget(widget_8, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget_6, 1, 0, 1, 1);

        label_info_output = new QLabel(centralWidget);
        label_info_output->setObjectName(QString::fromUtf8("label_info_output"));
        label_info_output->setMinimumSize(QSize(200, 20));
        label_info_output->setLayoutDirection(Qt::LeftToRight);
        label_info_output->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_info_output, 2, 0, 1, 1);

        widget_7 = new QWidget(centralWidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout_2 = new QGridLayout(widget_7);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 2, -1, 9);
        pushButton_reset_passwd = new QPushButton(widget_7);
        pushButton_reset_passwd->setObjectName(QString::fromUtf8("pushButton_reset_passwd"));
        pushButton_reset_passwd->setMinimumSize(QSize(100, 36));
        pushButton_reset_passwd->setMaximumSize(QSize(100, 36));

        gridLayout_2->addWidget(pushButton_reset_passwd, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_7, 3, 0, 1, 1);

        ResetPasswdWindowClass->setCentralWidget(centralWidget);

        retranslateUi(ResetPasswdWindowClass);

        QMetaObject::connectSlotsByName(ResetPasswdWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *ResetPasswdWindowClass)
    {
        ResetPasswdWindowClass->setWindowTitle(QCoreApplication::translate("ResetPasswdWindowClass", "\351\207\215\347\275\256\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("ResetPasswdWindowClass", "\351\207\215\347\275\256\345\257\206\347\240\201\n"
"\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\350\264\246\345\217\267\343\200\201\346\226\260\345\257\206\347\240\201\345\222\214\346\224\271\345\257\206\345\217\243\344\273\244", nullptr));
        label_6->setText(QCoreApplication::translate("ResetPasswdWindowClass", "\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        checkBox_display_passwd1->setText(QString());
        label_4->setText(QCoreApplication::translate("ResetPasswdWindowClass", "\345\206\215\346\254\241\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        checkBox_display_passwd2->setText(QString());
        label_3->setText(QCoreApplication::translate("ResetPasswdWindowClass", "\346\224\271\345\257\206\345\217\243\344\273\244\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("ResetPasswdWindowClass", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_info_output->setText(QString());
        pushButton_reset_passwd->setText(QCoreApplication::translate("ResetPasswdWindowClass", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResetPasswdWindowClass: public Ui_ResetPasswdWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESET_PASSWD_WINDOW_H
