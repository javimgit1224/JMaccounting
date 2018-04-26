/********************************************************************************
** Form generated from reading UI file 'jmaccounting.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JMACCOUNTING_H
#define UI_JMACCOUNTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JMaccounting
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JMaccounting)
    {
        if (JMaccounting->objectName().isEmpty())
            JMaccounting->setObjectName(QStringLiteral("JMaccounting"));
        JMaccounting->resize(657, 501);
        centralWidget = new QWidget(JMaccounting);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 30, 95, 14));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(220, 120, 201, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        JMaccounting->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(JMaccounting);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 657, 19));
        JMaccounting->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JMaccounting);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        JMaccounting->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(JMaccounting);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        JMaccounting->setStatusBar(statusBar);

        retranslateUi(JMaccounting);

        QMetaObject::connectSlotsByName(JMaccounting);
    } // setupUi

    void retranslateUi(QMainWindow *JMaccounting)
    {
        JMaccounting->setWindowTitle(QApplication::translate("JMaccounting", "JMaccounting", 0));
        label->setText(QApplication::translate("JMaccounting", "Home", 0));
        pushButton->setText(QApplication::translate("JMaccounting", "Enter Expense", 0));
        pushButton_2->setText(QApplication::translate("JMaccounting", "Create Invoice", 0));
    } // retranslateUi

};

namespace Ui {
    class JMaccounting: public Ui_JMaccounting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JMACCOUNTING_H
