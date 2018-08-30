/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName(QStringLiteral("LoginWidget"));
        LoginWidget->resize(400, 300);
        menuBar = new QMenuBar(LoginWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        LoginWidget->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LoginWidget);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LoginWidget->addToolBar(mainToolBar);
        centralWidget = new QWidget(LoginWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LoginWidget->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LoginWidget);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LoginWidget->setStatusBar(statusBar);

        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWidget)
    {
        LoginWidget->setWindowTitle(QApplication::translate("LoginWidget", "LoginWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
