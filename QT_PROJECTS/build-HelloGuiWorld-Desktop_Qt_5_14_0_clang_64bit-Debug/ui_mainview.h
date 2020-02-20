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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralwidget;
    QPushButton *w_exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(800, 600);
        centralwidget = new QWidget(MainView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        w_exitButton = new QPushButton(centralwidget);
        w_exitButton->setObjectName(QString::fromUtf8("w_exitButton"));
        w_exitButton->setGeometry(QRect(100, 100, 113, 32));
        MainView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainView);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainView->setMenuBar(menubar);
        statusbar = new QStatusBar(MainView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainView->setStatusBar(statusbar);

        retranslateUi(MainView);
        QObject::connect(w_exitButton, SIGNAL(clicked()), MainView, SLOT(close()));

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QCoreApplication::translate("MainView", "MainView", nullptr));
        w_exitButton->setText(QCoreApplication::translate("MainView", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
