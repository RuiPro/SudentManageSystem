/********************************************************************************
** Form generated from reading UI file 'student_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_DIALOG_H
#define UI_STUDENT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentDialogClass
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_student_edit;
    QGridLayout *gridLayout_11;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_grade;
    QLabel *label_4;
    QLineEdit *lineEdit_class;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *spinBox_age;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_6;
    QComboBox *comboBox_gender;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_confirm;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *StudentDialogClass)
    {
        if (StudentDialogClass->objectName().isEmpty())
            StudentDialogClass->setObjectName(QString::fromUtf8("StudentDialogClass"));
        StudentDialogClass->resize(280, 250);
        StudentDialogClass->setMinimumSize(QSize(280, 250));
        StudentDialogClass->setMaximumSize(QSize(280, 250));
        gridLayout = new QGridLayout(StudentDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_student_edit = new QGroupBox(StudentDialogClass);
        groupBox_student_edit->setObjectName(QString::fromUtf8("groupBox_student_edit"));
        gridLayout_11 = new QGridLayout(groupBox_student_edit);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(-1, -1, -1, 9);
        widget_7 = new QWidget(groupBox_student_edit);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_3 = new QHBoxLayout(widget_7);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 5, -1, 5);
        label_2 = new QLabel(widget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_2);

        lineEdit_id = new QLineEdit(widget_7);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_id->sizePolicy().hasHeightForWidth());
        lineEdit_id->setSizePolicy(sizePolicy1);
        lineEdit_id->setMinimumSize(QSize(0, 0));
        lineEdit_id->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_3->addWidget(lineEdit_id);


        gridLayout_11->addWidget(widget_7, 2, 0, 1, 1);

        widget_9 = new QWidget(groupBox_student_edit);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_2 = new QHBoxLayout(widget_9);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 5);
        label = new QLabel(widget_9);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        lineEdit_name = new QLineEdit(widget_9);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        sizePolicy1.setHeightForWidth(lineEdit_name->sizePolicy().hasHeightForWidth());
        lineEdit_name->setSizePolicy(sizePolicy1);
        lineEdit_name->setMinimumSize(QSize(130, 0));
        lineEdit_name->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_2->addWidget(lineEdit_name);


        gridLayout_11->addWidget(widget_9, 1, 0, 1, 1);

        widget_10 = new QWidget(groupBox_student_edit);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_6 = new QHBoxLayout(widget_10);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(9, 5, 9, 5);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        lineEdit_grade = new QLineEdit(widget_10);
        lineEdit_grade->setObjectName(QString::fromUtf8("lineEdit_grade"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_grade->sizePolicy().hasHeightForWidth());
        lineEdit_grade->setSizePolicy(sizePolicy2);
        lineEdit_grade->setMinimumSize(QSize(40, 0));
        lineEdit_grade->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_6->addWidget(lineEdit_grade);

        label_4 = new QLabel(widget_10);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        lineEdit_class = new QLineEdit(widget_10);
        lineEdit_class->setObjectName(QString::fromUtf8("lineEdit_class"));
        sizePolicy2.setHeightForWidth(lineEdit_class->sizePolicy().hasHeightForWidth());
        lineEdit_class->setSizePolicy(sizePolicy2);
        lineEdit_class->setMinimumSize(QSize(40, 0));
        lineEdit_class->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_6->addWidget(lineEdit_class);

        label_7 = new QLabel(widget_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        gridLayout_11->addWidget(widget_10, 4, 0, 1, 1);

        widget_3 = new QWidget(groupBox_student_edit);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 5, -1, 5);
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        spinBox_age = new QSpinBox(widget_3);
        spinBox_age->setObjectName(QString::fromUtf8("spinBox_age"));
        sizePolicy2.setHeightForWidth(spinBox_age->sizePolicy().hasHeightForWidth());
        spinBox_age->setSizePolicy(sizePolicy2);
        spinBox_age->setMinimumSize(QSize(50, 0));

        horizontalLayout_4->addWidget(spinBox_age);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_6);

        comboBox_gender = new QComboBox(widget_3);
        comboBox_gender->setObjectName(QString::fromUtf8("comboBox_gender"));
        sizePolicy2.setHeightForWidth(comboBox_gender->sizePolicy().hasHeightForWidth());
        comboBox_gender->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(comboBox_gender);


        gridLayout_11->addWidget(widget_3, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox_student_edit, 0, 0, 1, 1);

        widget_2 = new QWidget(StudentDialogClass);
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

        horizontalLayout->addWidget(pushButton_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_confirm = new QPushButton(widget_2);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));

        horizontalLayout->addWidget(pushButton_confirm);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_name, lineEdit_id);
        QWidget::setTabOrder(lineEdit_id, spinBox_age);
        QWidget::setTabOrder(spinBox_age, comboBox_gender);
        QWidget::setTabOrder(comboBox_gender, lineEdit_grade);
        QWidget::setTabOrder(lineEdit_grade, lineEdit_class);
        QWidget::setTabOrder(lineEdit_class, pushButton_cancel);
        QWidget::setTabOrder(pushButton_cancel, pushButton_confirm);

        retranslateUi(StudentDialogClass);

        QMetaObject::connectSlotsByName(StudentDialogClass);
    } // setupUi

    void retranslateUi(QDialog *StudentDialogClass)
    {
        StudentDialogClass->setWindowTitle(QCoreApplication::translate("StudentDialogClass", "\344\277\256\346\224\271\345\255\246\345\217\267", nullptr));
        groupBox_student_edit->setTitle(QCoreApplication::translate("StudentDialogClass", "\347\274\226\350\276\221", nullptr));
        label_2->setText(QCoreApplication::translate("StudentDialogClass", "\345\255\246\345\217\267\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("StudentDialogClass", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("StudentDialogClass", "\345\271\264\347\272\247", nullptr));
        label_7->setText(QCoreApplication::translate("StudentDialogClass", "\347\217\255", nullptr));
        label_5->setText(QCoreApplication::translate("StudentDialogClass", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("StudentDialogClass", "\346\200\247\345\210\253\357\274\232", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("StudentDialogClass", "\345\217\226\346\266\210", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("StudentDialogClass", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentDialogClass: public Ui_StudentDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_DIALOG_H
