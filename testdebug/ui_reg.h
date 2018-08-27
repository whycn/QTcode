/********************************************************************************
** Form generated from reading UI file 'reg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_H
#define UI_REG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reg
{
public:
    QLabel *label_title;
    QLabel *label_2;
    QLineEdit *lineUserName;
    QLabel *label_3;
    QLineEdit *linePassword;
    QLabel *label_4;
    QLineEdit *linePasswordConfirm;
    QLabel *labelHeader;
    QPushButton *btnHeader;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QWidget *reg)
    {
        if (reg->objectName().isEmpty())
            reg->setObjectName(QStringLiteral("reg"));
        reg->setMinimumSize(QSize(460, 300));
        reg->setMaximumSize(QSize(460, 300));
        label_title = new QLabel(reg);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(130, 10, 251, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_title->setFont(font);
        label_2 = new QLabel(reg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 81, 21));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        lineUserName = new QLineEdit(reg);
        lineUserName->setObjectName(QStringLiteral("lineUserName"));
        lineUserName->setGeometry(QRect(100, 60, 201, 31));
        lineUserName->setFont(font1);
        label_3 = new QLabel(reg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 71, 41));
        label_3->setFont(font1);
        linePassword = new QLineEdit(reg);
        linePassword->setObjectName(QStringLiteral("linePassword"));
        linePassword->setGeometry(QRect(100, 130, 201, 31));
        linePassword->setFont(font1);
        linePassword->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(reg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 190, 91, 41));
        label_4->setFont(font1);
        linePasswordConfirm = new QLineEdit(reg);
        linePasswordConfirm->setObjectName(QStringLiteral("linePasswordConfirm"));
        linePasswordConfirm->setGeometry(QRect(100, 190, 201, 31));
        linePasswordConfirm->setFont(font1);
        linePasswordConfirm->setEchoMode(QLineEdit::Password);
        labelHeader = new QLabel(reg);
        labelHeader->setObjectName(QStringLiteral("labelHeader"));
        labelHeader->setGeometry(QRect(340, 60, 101, 111));
        btnHeader = new QPushButton(reg);
        btnHeader->setObjectName(QStringLiteral("btnHeader"));
        btnHeader->setGeometry(QRect(350, 190, 81, 31));
        btnOK = new QPushButton(reg);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(80, 240, 81, 41));
        btnOK->setFont(font1);
        btnCancel = new QPushButton(reg);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(290, 240, 81, 41));
        btnCancel->setFont(font1);

        retranslateUi(reg);

        QMetaObject::connectSlotsByName(reg);
    } // setupUi

    void retranslateUi(QWidget *reg)
    {
        reg->setWindowTitle(QString());
        label_title->setText(QApplication::translate("reg", "\347\224\250 \346\210\267 \344\277\241 \346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("reg", "\347\224\250 \346\210\267 \345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("reg", "\345\257\206  \347\240\201 :", Q_NULLPTR));
        label_4->setText(QApplication::translate("reg", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        labelHeader->setText(QApplication::translate("reg", "TextLabel", Q_NULLPTR));
        btnHeader->setText(QApplication::translate("reg", "\344\270\212\344\274\240\345\244\264\345\203\217", Q_NULLPTR));
        btnOK->setText(QApplication::translate("reg", "\347\241\256\350\256\244", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("reg", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class reg: public Ui_reg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_H
