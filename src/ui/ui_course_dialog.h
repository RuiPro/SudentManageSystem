/********************************************************************************
** Form generated from reading UI file 'course_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSE_DIALOG_H
#define UI_COURSE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseDialogClass
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_course_id;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_course_name;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *CourseDialogClass)
    {
        if (CourseDialogClass->objectName().isEmpty())
            CourseDialogClass->setObjectName(QString::fromUtf8("CourseDialogClass"));
        CourseDialogClass->resize(310, 200);
        CourseDialogClass->setMinimumSize(QSize(310, 200));
        CourseDialogClass->setMaximumSize(QSize(310, 200));
        gridLayout_5 = new QGridLayout(CourseDialogClass);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(CourseDialogClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        lineEdit_course_id = new QLineEdit(widget);
        lineEdit_course_id->setObjectName(QString::fromUtf8("lineEdit_course_id"));

        gridLayout_4->addWidget(lineEdit_course_id, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_course_name = new QLineEdit(widget_2);
        lineEdit_course_name->setObjectName(QString::fromUtf8("lineEdit_course_name"));

        gridLayout_3->addWidget(lineEdit_course_name, 0, 1, 1, 1);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        widget_3 = new QWidget(CourseDialogClass);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton_confirm = new QPushButton(widget_3);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setMinimumSize(QSize(0, 24));

        gridLayout_2->addWidget(pushButton_confirm, 1, 3, 1, 1);

        pushButton_cancel = new QPushButton(widget_3);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(0, 24));

        gridLayout_2->addWidget(pushButton_cancel, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 4, 1, 1);


        gridLayout_5->addWidget(widget_3, 1, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_course_id, lineEdit_course_name);
        QWidget::setTabOrder(lineEdit_course_name, pushButton_cancel);
        QWidget::setTabOrder(pushButton_cancel, pushButton_confirm);

        retranslateUi(CourseDialogClass);

        QMetaObject::connectSlotsByName(CourseDialogClass);
    } // setupUi

    void retranslateUi(QDialog *CourseDialogClass)
    {
        CourseDialogClass->setWindowTitle(QCoreApplication::translate("CourseDialogClass", "CourseDialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CourseDialogClass", "\350\257\276\347\250\213\347\274\226\350\276\221", nullptr));
        label->setText(QCoreApplication::translate("CourseDialogClass", "\350\257\276\347\250\213ID\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("CourseDialogClass", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("CourseDialogClass", "\347\241\256\350\256\244", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("CourseDialogClass", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseDialogClass: public Ui_CourseDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSE_DIALOG_H
