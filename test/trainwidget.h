#ifndef TRAINWIDGET_H
#define TRAINWIDGET_H

#include <QWidget>

class LoginDlg;
class reg;


namespace Ui {
class TrainWidget;
}

class TrainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TrainWidget(LoginDlg *logindlg, QWidget *parent = 0);
    ~TrainWidget();

    QString m_username;

    void InitTrainWidget(QString username);

    reg *m_reg;

private slots:
    void on_btnReEdit_clicked();

    void on_btnLogout_clicked();

private:
    Ui::TrainWidget *ui;
    LoginDlg *m_loginDlg;
    QImage *img;
};

#endif // TRAINWIDGET_H
