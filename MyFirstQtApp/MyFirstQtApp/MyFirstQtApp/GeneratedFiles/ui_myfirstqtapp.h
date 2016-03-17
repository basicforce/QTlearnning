/********************************************************************************
** Form generated from reading UI file 'myfirstqtapp.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFIRSTQTAPP_H
#define UI_MYFIRSTQTAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFirstQtAppClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyFirstQtAppClass)
    {
        if (MyFirstQtAppClass->objectName().isEmpty())
            MyFirstQtAppClass->setObjectName(QStringLiteral("MyFirstQtAppClass"));
        MyFirstQtAppClass->resize(600, 400);
        centralWidget = new QWidget(MyFirstQtAppClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 30, 341, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        MyFirstQtAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyFirstQtAppClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        MyFirstQtAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyFirstQtAppClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyFirstQtAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyFirstQtAppClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyFirstQtAppClass->setStatusBar(statusBar);

        retranslateUi(MyFirstQtAppClass);
        QObject::connect(pushButton, SIGNAL(clicked()), MyFirstQtAppClass, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(MyFirstQtAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyFirstQtAppClass)
    {
        MyFirstQtAppClass->setWindowTitle(QApplication::translate("MyFirstQtAppClass", "MyFirstQtApp", 0));
        pushButton->setText(QApplication::translate("MyFirstQtAppClass", "Click Me\357\274\201", 0));
    } // retranslateUi

};

namespace Ui {
    class MyFirstQtAppClass: public Ui_MyFirstQtAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFIRSTQTAPP_H
