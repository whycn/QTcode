/* 登录窗口源文件  */
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>

#include <QDebug>
#include <QMessageBox>

#include "logindlg.h"
#include "ui_logindlg.h"
#include "TrainWidget.h"
#include "reg.h"

LoginDlg::LoginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDlg)
{
    ui->setupUi(this);

    /* 显示标题 */
    QString title = QString("登录/注册");
    setWindowTitle(title);


    m_trainWidget = new TrainWidget(this);    // 初始化训练窗口
    m_reg = new reg(this);    // 初始化测量窗口

    m_trainWidget->m_reg = m_reg;
    m_reg->m_trainWidget = m_trainWidget;


    /* 初始时隐藏"用户名或密码错误"的提示 */
    ui->labelLoginInfo->hide();
    ui->labelLoginInfo->setStyleSheet("color:red;");

    /* 数据库操作，打开名字为database.db的数据库（和exe同级目录）  */
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("database.db");
    if(!m_db.open()){
        QMessageBox::warning(0,"打开数据库错误","当前路径下找不到database.db数据库文件");
        qDebug()<<"打开数据库错误";
        return;
    }
    else{
         QSqlQuery query(m_db);
         QString sql=QString("create table UserInfo (username varchar(30), password varchar(30), headerpath varchar(100))");
         query.exec(sql);
    }
}

LoginDlg::~LoginDlg()
{
    delete ui;
}

void LoginDlg::on_btnLogin_clicked()
{
    QString username = ui->lineUserName->text();
    QString password = ui->linePassword->text();

    if(username==""){
        ui->labelLoginInfo->setText("用户名不能为空");
        ui->labelLoginInfo->show();
        return;
    }
    if(password==""){
        ui->labelLoginInfo->setText("密码不能为空");
        ui->labelLoginInfo->show();
        return;
    }

    /* search username and password in the database */
    QString select_username = QString("select * from UserInfo where username='%1'").arg(username);
    QSqlQuery query(m_db);
    query.exec(select_username);
    bool result = query.next();   // 数据库中是否有这条记录
    QString password_in_database;
    if (result)
        password_in_database = query.value("password").toString();

    if(result && password==password_in_database){
        m_trainWidget->InitTrainWidget(username);
        m_trainWidget->show();
        ui->labelLoginInfo->hide();
        this->hide();
    }
    else{
        ui->labelLoginInfo->setText("用户名或密码错误");
        ui->labelLoginInfo->show();
    }
}

void LoginDlg::on_btnRegister_clicked()
{
    m_reg->Initreg("",true);  // 初始化测量窗口
    m_reg->show();   // 显示测量窗口
    this->hide();   // 隐藏登录窗口
}
