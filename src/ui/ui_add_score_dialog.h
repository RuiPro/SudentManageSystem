/********************************************************************************
** Form generated from reading UI file 'add_score_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_SCORE_DIALOG_H
#define UI_ADD_SCORE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScoreDialogClass
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_add_row;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_remove_row;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_confirm;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *ScoreDialogClass)
    {
        if (ScoreDialogClass->objectName().isEmpty())
            ScoreDialogClass->setObjectName(QString::fromUtf8("ScoreDialogClass"));
        ScoreDialogClass->resize(825, 659);
        gridLayout = new QGridLayout(ScoreDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(ScoreDialogClass);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("QHeaderView::section {border: 6px black;}\n"
""));
        tableWidget->verticalHeader()->setHighlightSections(true);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        widget_4 = new QWidget(ScoreDialogClass);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_3 = new QGridLayout(widget_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_add_row = new QPushButton(widget_4);
        pushButton_add_row->setObjectName(QString::fromUtf8("pushButton_add_row"));
        pushButton_add_row->setMinimumSize(QSize(0, 24));

        gridLayout_3->addWidget(pushButton_add_row, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 4, 1, 1);

        pushButton_remove_row = new QPushButton(widget_4);
        pushButton_remove_row->setObjectName(QString::fromUtf8("pushButton_remove_row"));
        pushButton_remove_row->setMinimumSize(QSize(0, 24));

        gridLayout_3->addWidget(pushButton_remove_row, 1, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 2, 1, 1);


        gridLayout->addWidget(widget_4, 1, 0, 1, 1);

        widget_3 = new QWidget(ScoreDialogClass);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_confirm = new QPushButton(widget_3);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setMinimumSize(QSize(0, 24));

        gridLayout_2->addWidget(pushButton_confirm, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton_cancel = new QPushButton(widget_3);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(0, 24));

        gridLayout_2->addWidget(pushButton_cancel, 1, 1, 1, 1);


        gridLayout->addWidget(widget_3, 2, 0, 1, 1);


        retranslateUi(ScoreDialogClass);

        QMetaObject::connectSlotsByName(ScoreDialogClass);
    } // setupUi

    void retranslateUi(QDialog *ScoreDialogClass)
    {
        ScoreDialogClass->setWindowTitle(QCoreApplication::translate("ScoreDialogClass", "AddScoreDialog", nullptr));
        pushButton_add_row->setText(QCoreApplication::translate("ScoreDialogClass", "\346\267\273\345\212\240\344\270\200\350\241\214", nullptr));
        pushButton_remove_row->setText(QCoreApplication::translate("ScoreDialogClass", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("ScoreDialogClass", "\347\241\256\350\256\244", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("ScoreDialogClass", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScoreDialogClass: public Ui_ScoreDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_SCORE_DIALOG_H
