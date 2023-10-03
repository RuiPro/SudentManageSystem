/********************************************************************************
** Form generated from reading UI file 'exam_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAM_DIALOG_H
#define UI_EXAM_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamDialogClass
{
public:
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QWidget *widget_5;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QDateEdit *dateEdit_date;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_confirm;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ExamDialogClass)
    {
        if (ExamDialogClass->objectName().isEmpty())
            ExamDialogClass->setObjectName(QString::fromUtf8("ExamDialogClass"));
        ExamDialogClass->resize(310, 200);
        ExamDialogClass->setMinimumSize(QSize(310, 200));
        ExamDialogClass->setMaximumSize(QSize(310, 200));
        gridLayout_5 = new QGridLayout(ExamDialogClass);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget = new QWidget(ExamDialogClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 5, -1, 5);
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_id = new QLineEdit(widget_3);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));

        gridLayout->addWidget(lineEdit_id, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 5, -1, 5);
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_name = new QLineEdit(widget_4);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        gridLayout_2->addWidget(lineEdit_name, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget_4, 1, 0, 1, 1);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_3 = new QGridLayout(widget_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 5, -1, 5);
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        dateEdit_date = new QDateEdit(widget_5);
        dateEdit_date->setObjectName(QString::fromUtf8("dateEdit_date"));

        gridLayout_3->addWidget(dateEdit_date, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_4->addWidget(widget_5, 2, 0, 1, 1);


        gridLayout_5->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(ExamDialogClass);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 9, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(widget_2);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(80, 30));

        horizontalLayout->addWidget(pushButton_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_confirm = new QPushButton(widget_2);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setMinimumSize(QSize(80, 30));

        horizontalLayout->addWidget(pushButton_confirm);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_5->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(ExamDialogClass);

        QMetaObject::connectSlotsByName(ExamDialogClass);
    } // setupUi

    void retranslateUi(QDialog *ExamDialogClass)
    {
        ExamDialogClass->setWindowTitle(QCoreApplication::translate("ExamDialogClass", "ExamDialog", nullptr));
        label->setText(QCoreApplication::translate("ExamDialogClass", "\350\200\203\350\257\225ID\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("ExamDialogClass", "\350\200\203\350\257\225\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ExamDialogClass", "\350\200\203\350\257\225\346\227\245\346\234\237\357\274\232", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("ExamDialogClass", "\345\217\226\346\266\210", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("ExamDialogClass", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamDialogClass: public Ui_ExamDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAM_DIALOG_H
