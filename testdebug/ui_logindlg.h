/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDlg
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnLogin;
    QPushButton *btnRegister;
    QLineEdit *lineUserName;
    QLineEdit *linePassword;
    QLabel *labelLoginInfo;

    void setupUi(QDialog *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName(QStringLiteral("LoginDlg"));
        LoginDlg->resize(300, 280);
        LoginDlg->setMinimumSize(QSize(300, 280));
        LoginDlg->setMaximumSize(QSize(300, 280));
        label = new QLabel(LoginDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 10, 91, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(LoginDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 74, 71, 21));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(LoginDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 140, 71, 21));
        label_3->setFont(font1);
        btnLogin = new QPushButton(LoginDlg);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(30, 210, 89, 41));
        QFont font2;
        font2.setPointSize(11);
        btnLogin->setFont(font2);
        btnRegister = new QPushButton(LoginDlg);
        btnRegister->setObjectName(QStringLiteral("btnRegister"));
        btnRegister->setGeometry(QRect(170, 210, 89, 41));
        btnRegister->setFont(font2);
        lineUserName = new QLineEdit(LoginDlg);
        lineUserName->setObjectName(QStringLiteral("lineUserName"));
        lineUserName->setGeometry(QRect(90, 70, 181, 31));
        lineUserName->setFont(font1);
        linePassword = new QLineEdit(LoginDlg);
        linePassword->setObjectName(QStringLiteral("linePassword"));
        linePassword->setGeometry(QRect(90, 140, 181, 31));
        linePassword->setFont(font1);
        linePassword->setEchoMode(QLineEdit::Password);
        labelLoginInfo = new QLabel(LoginDlg);
        labelLoginInfo->setObjectName(QStringLiteral("labelLoginInfo"));
        labelLoginInfo->setGeometry(QRect(90, 180, 161, 20));
        QFont font3;
        font3.setPointSize(10);
        labelLoginInfo->setFont(font3);

        retranslateUi(LoginDlg);

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QDialog *LoginDlg)
    {
        LoginDlg->setWindowTitle(QString());
        label->setText(QApplication::translate("LoginDlg", "\347\231\273 \345\275\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginDlg", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginDlg", "\345\257\206 \347\240\201 \357\274\232", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("LoginDlg", "\347\231\273\345\275\225", Q_NULLPTR));
        btnRegister->setText(QApplication::translate("LoginDlg", "\346\263\250\345\206\214", Q_NULLPTR));
        labelLoginInfo->setText(QApplication::translate("LoginDlg", "\347\224\250\346\210\267\345\220\215\346\210\226\345\257\206\347\240\201\351\224\231\350\257\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
