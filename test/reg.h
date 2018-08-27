#ifndef REG_H
#define REG_H

#include <QWidget>
#include "LoginDlg.h"
#include <QImage>
#include <QPixmap>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>

class TrainWidget;

namespace Ui {
class reg;
}

class reg : public QWidget
{
    Q_OBJECT

public:
    explicit reg(LoginDlg *logindlg, QWidget *parent = 0);
    ~reg();

    QString m_username;

    void Initreg(QString username, bool is_register);

    TrainWidget *m_trainWidget;

private slots:
    void on_btnOK_clicked();

    void on_btnCancel_clicked();

    void on_btnHeader_clicked();

protected slots:
    void closeEvent(QCloseEvent *event);

private:
    Ui::reg *ui;
    LoginDlg* m_loginDlg;
    QImage *m_img;
    QString m_strHeaderPath;
    bool m_bIsRegister; // 判断是注册还是修改
};

#endif // REG_H
