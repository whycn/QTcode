#include "trainwidget.h"
#include "ui_TrainWidget.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QImage>
#include <QDebug>
#include <QList>
#include <QStandardItemModel>
#include <QSqlTableModel>
#include <QWindow>
#include <Windows.h>

#include "LoginDlg.h"
#include "reg.h"

TrainWidget::TrainWidget(LoginDlg *logindlg, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrainWidget),
    m_loginDlg(logindlg)
{
    ui->setupUi(this);
    img = new QImage();
    QString title = QString("训练窗口");
    setWindowTitle(title);

}


void TrainWidget::InitTrainWidget(QString username)
{
    m_username = username;
    ui->lineUserName->setText(m_username);
    QSqlQuery query(m_loginDlg->m_db);

    QString select_info = QString("select * from UserInfo where username='%1'").arg(username);  // 在UserInfob表中找头像信息
    query.exec(select_info);
    query.next();
    QString headerPath = query.value("headerpath").toString();
    if(!img->load(headerPath)){
        QMessageBox::warning(0,"错误",QString("头像图片打开失败，请确认图片在以下目录:%1").arg(headerPath));
    }
    else{
        ui->labelHeader->setPixmap(QPixmap::fromImage(*img).scaled(ui->labelHeader->size()));   // 显示头像
    }

}


TrainWidget::~TrainWidget()
{
    delete ui;
}

void TrainWidget::on_btnReEdit_clicked()
{
    this->hide();
    m_reg->Initreg(m_username, false);
    m_reg->show();
}

void TrainWidget::on_btnLogout_clicked()
{
    this->hide();
    m_loginDlg->show();
}
