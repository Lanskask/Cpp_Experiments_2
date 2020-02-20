/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStartServer;
    QPushButton *btnStopServer;
    QMenuBar *menubar;
    QMenu *menuTcpServer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(251, 151);
        centralwidget = new QWidget(MainView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnStartServer = new QPushButton(centralwidget);
        btnStartServer->setObjectName(QString::fromUtf8("btnStartServer"));

        horizontalLayout->addWidget(btnStartServer);

        btnStopServer = new QPushButton(centralwidget);
        btnStopServer->setObjectName(QString::fromUtf8("btnStopServer"));

        horizontalLayout->addWidget(btnStopServer);

        MainView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainView);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 251, 22));
        menuTcpServer = new QMenu(menubar);
        menuTcpServer->setObjectName(QString::fromUtf8("menuTcpServer"));
        MainView->setMenuBar(menubar);
        statusbar = new QStatusBar(MainView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainView->setStatusBar(statusbar);

        menubar->addAction(menuTcpServer->menuAction());

        retranslateUi(MainView);

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QCoreApplication::translate("MainView", "MainView", nullptr));
        btnStartServer->setText(QCoreApplication::translate("MainView", "Start Server", nullptr));
        btnStopServer->setText(QCoreApplication::translate("MainView", "Stop Server", nullptr));
        menuTcpServer->setTitle(QCoreApplication::translate("MainView", "TcpServer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
