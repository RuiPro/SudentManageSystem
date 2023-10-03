/********************************************************************************
** Form generated from reading UI file 'login_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_WINDOW_H
#define UI_LOGIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickable_lable.h"

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    ClickableLable *clickablelabel_register;
    QSpacerItem *horizontalSpacer_3;
    ClickableLable *clickablelabel_reset_passwd;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_login;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_account;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_passwd;
    QCheckBox *checkBox_dispaly_passwd;
    QWidget *widget_7;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QLabel *label_info_output;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(480, 320);
        LoginWindow->setMinimumSize(QSize(480, 320));
        LoginWindow->setMaximumSize(QSize(480, 320));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        widget_5 = new QWidget(frame);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        clickablelabel_register = new ClickableLable(widget_5);
        clickablelabel_register->setObjectName(QString::fromUtf8("clickablelabel_register"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setUnderline(true);
        clickablelabel_register->setFont(font);
        clickablelabel_register->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(clickablelabel_register);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        clickablelabel_reset_passwd = new ClickableLable(widget_5);
        clickablelabel_reset_passwd->setObjectName(QString::fromUtf8("clickablelabel_reset_passwd"));
        clickablelabel_reset_passwd->setFont(font);
        clickablelabel_reset_passwd->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(clickablelabel_reset_passwd);


        gridLayout->addWidget(widget_5, 3, 0, 1, 1);

        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        pushButton_login = new QPushButton(widget_2);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setMinimumSize(QSize(130, 30));
        pushButton_login->setMaximumSize(QSize(130, 30));

        horizontalLayout->addWidget(pushButton_login);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);


        gridLayout_2->addWidget(frame, 3, 1, 1, 1);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 2);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(60, 24));
        label_3->setMaximumSize(QSize(60, 24));
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_account = new QLineEdit(widget_3);
        lineEdit_account->setObjectName(QString::fromUtf8("lineEdit_account"));
        lineEdit_account->setMinimumSize(QSize(230, 24));
        lineEdit_account->setMaximumSize(QSize(230, 24));

        horizontalLayout_2->addWidget(lineEdit_account);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout_3->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 2, -1, 2);
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(60, 24));
        label_4->setMaximumSize(QSize(60, 24));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_4);

        lineEdit_passwd = new QLineEdit(widget_4);
        lineEdit_passwd->setObjectName(QString::fromUtf8("lineEdit_passwd"));
        lineEdit_passwd->setMinimumSize(QSize(230, 24));
        lineEdit_passwd->setMaximumSize(QSize(230, 24));
        QFont font2;
        font2.setPointSize(9);
        lineEdit_passwd->setFont(font2);
        lineEdit_passwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_passwd);

        checkBox_dispaly_passwd = new QCheckBox(widget_4);
        checkBox_dispaly_passwd->setObjectName(QString::fromUtf8("checkBox_dispaly_passwd"));

        horizontalLayout_3->addWidget(checkBox_dispaly_passwd);


        gridLayout_3->addWidget(widget_4, 1, 0, 1, 1);

        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout_4 = new QGridLayout(widget_7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);

        gridLayout_3->addWidget(widget_7, 2, 0, 1, 1);


        gridLayout_2->addWidget(widget_6, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(16);
        label->setFont(font3);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(12);
        label_2->setFont(font4);

        verticalLayout->addWidget(label_2);


        gridLayout_2->addWidget(widget, 0, 1, 1, 1);

        label_info_output = new QLabel(centralwidget);
        label_info_output->setObjectName(QString::fromUtf8("label_info_output"));
        label_info_output->setMinimumSize(QSize(0, 20));
        label_info_output->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_info_output, 2, 1, 1, 1);

        LoginWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lineEdit_account, lineEdit_passwd);
        QWidget::setTabOrder(lineEdit_passwd, checkBox_dispaly_passwd);
        QWidget::setTabOrder(checkBox_dispaly_passwd, pushButton_login);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237 v0.0.1", nullptr));
        clickablelabel_register->setText(QCoreApplication::translate("LoginWindow", "\346\262\241\346\234\211\350\264\246\345\217\267?\345\216\273\346\263\250\345\206\214>", nullptr));
        clickablelabel_reset_passwd->setText(QCoreApplication::translate("LoginWindow", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237\345\216\273\351\207\215\347\275\256> ", nullptr));
        pushButton_login->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        checkBox_dispaly_passwd->setText(QString());
        label->setText(QCoreApplication::translate("LoginWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "\350\200\201\345\270\210\357\274\214\350\257\267\346\202\250\347\231\273\345\275\225\357\274\232", nullptr));
        label_info_output->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_WINDOW_H
