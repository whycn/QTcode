/********************************************************************************
** Form generated from reading UI file 'trainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINWIDGET_H
#define UI_TRAINWIDGET_H

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

class Ui_TrainWidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineUserName;
    QLabel *labelHeader;
    QPushButton *btnLogout;
    QPushButton *btnReEdit;

    void setupUi(QWidget *TrainWidget)
    {
        if (TrainWidget->objectName().isEmpty())
            TrainWidget->setObjectName(QStringLiteral("TrainWidget"));
        TrainWidget->resize(650, 600);
        TrainWidget->setMinimumSize(QSize(650, 600));
        TrainWidget->setMaximumSize(QSize(650, 600));
        label = new QLabel(TrainWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 10, 231, 41));
        QFont font;
        font.setFamily(QStringLiteral("ADMUI3Lg"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(TrainWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 101, 21));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        lineUserName = new QLineEdit(TrainWidget);
        lineUserName->setObjectName(QStringLiteral("lineUserName"));
        lineUserName->setEnabled(false);
        lineUserName->setGeometry(QRect(130, 70, 221, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("ADMUI3Lg"));
        font2.setPointSize(12);
        lineUserName->setFont(font2);
        labelHeader = new QLabel(TrainWidget);
        labelHeader->setObjectName(QStringLiteral("labelHeader"));
        labelHeader->setGeometry(QRect(210, 120, 241, 231));
        btnLogout = new QPushButton(TrainWidget);
        btnLogout->setObjectName(QStringLiteral("btnLogout"));
        btnLogout->setGeometry(QRect(520, 70, 91, 31));
        QFont font3;
        font3.setPointSize(11);
        btnLogout->setFont(font3);
        btnReEdit = new QPushButton(TrainWidget);
        btnReEdit->setObjectName(QStringLiteral("btnReEdit"));
        btnReEdit->setGeometry(QRect(370, 70, 91, 31));
        btnReEdit->setFont(font3);

        retranslateUi(TrainWidget);

        QMetaObject::connectSlotsByName(TrainWidget);
    } // setupUi

    void retranslateUi(QWidget *TrainWidget)
    {
        TrainWidget->setWindowTitle(QApplication::translate("TrainWidget", "\350\256\255\347\273\203\347\252\227\345\217\243", Q_NULLPTR));
        label->setText(QApplication::translate("TrainWidget", "\350\256\255 \347\273\203 ", Q_NULLPTR));
        label_2->setText(QApplication::translate("TrainWidget", "\347\224\250 \346\210\267 \345\220\215\357\274\232", Q_NULLPTR));
        labelHeader->setText(QApplication::translate("TrainWidget", "\345\244\264\345\203\217", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("TrainWidget", "\347\231\273\345\207\272", Q_NULLPTR));
        btnReEdit->setText(QApplication::translate("TrainWidget", "\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TrainWidget: public Ui_TrainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINWIDGET_H
