#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
class TrainWidget;
class reg;

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>

namespace Ui {
class LoginDlg;
}

class LoginDlg : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDlg(QWidget *parent = 0);
    ~LoginDlg();
    QSqlDatabase m_db;




private slots:
    void on_btnLogin_clicked();

    void on_btnRegister_clicked();

private:
    Ui::LoginDlg *ui;
    reg *m_reg;
    TrainWidget *m_trainWidget;

};

#endif // LOGINDLG_H
