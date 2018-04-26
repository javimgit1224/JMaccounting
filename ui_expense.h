/********************************************************************************
** Form generated from reading UI file 'expense.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSE_H
#define UI_EXPENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_expense
{
public:
    QCalendarWidget *calendarWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *expense)
    {
        if (expense->objectName().isEmpty())
            expense->setObjectName(QStringLiteral("expense"));
        expense->resize(707, 571);
        calendarWidget = new QCalendarWidget(expense);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 30, 272, 149));
        lineEdit = new QLineEdit(expense);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 210, 261, 22));
        lineEdit_2 = new QLineEdit(expense);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 260, 261, 22));
        lineEdit_3 = new QLineEdit(expense);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 310, 131, 22));
        label = new QLabel(expense);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 271, 16));
        label_2 = new QLabel(expense);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 190, 271, 16));
        label_3 = new QLabel(expense);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 240, 271, 16));
        label_4 = new QLabel(expense);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 290, 271, 16));
        pushButton = new QPushButton(expense);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 360, 131, 22));

        retranslateUi(expense);

        QMetaObject::connectSlotsByName(expense);
    } // setupUi

    void retranslateUi(QDialog *expense)
    {
        expense->setWindowTitle(QApplication::translate("expense", "Dialog", 0));
        label->setText(QApplication::translate("expense", "Choose Date", 0));
        label_2->setText(QApplication::translate("expense", "Vendor", 0));
        label_3->setText(QApplication::translate("expense", "Account", 0));
        label_4->setText(QApplication::translate("expense", "Amount", 0));
        pushButton->setText(QApplication::translate("expense", "Save and Create", 0));
    } // retranslateUi

};

namespace Ui {
    class expense: public Ui_expense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSE_H
