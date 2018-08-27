#include "reg.h"
#include "ui_reg.h"
#include "LoginDlg.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QFileDialog>
#include <QButtonGroup>
#include <QDebug>
#include <QWindow>
#include <Windows.h>
#include <QCloseEvent>


reg::reg(LoginDlg *logindlg,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reg),
    m_loginDlg(logindlg)
{
    ui->setupUi(this);

    m_img = new QImage();
    m_strHeaderPath = "";
    m_bIsRegister = true;

    QString title = QString("注册/修改窗口");
    setWindowTitle(title);
}

reg::~reg()
{
    delete ui;
}


/* 初始化测量窗口 */
void reg::Initreg(QString username, bool is_register)
{
    m_bIsRegister = is_register;
    ui->lineUserName->setText(username);
    QSqlQuery query(m_loginDlg->m_db);
    QString select_info = QString("select * from UserInfo where username='%1'").arg(username);  // 查询数据库中是不是有username指定的用户
    query.exec(select_info);
    if(query.next()){
        ui->linePassword->setText(query.value("password").toString());
        ui->linePasswordConfirm->setText(ui->linePassword->text());
        m_strHeaderPath = query.value("headerpath").toString();
        m_img->load(m_strHeaderPath);
        ui->labelHeader->setPixmap(QPixmap::fromImage(*m_img).scaled(ui->labelHeader->size()));
    }
    else{
        ui->linePassword->clear();
        ui->linePasswordConfirm->clear();
        ui->labelHeader->clear();
    }

    ui->lineUserName->setEnabled(m_bIsRegister);

    if(m_bIsRegister){
        ui->label_title->setText("注册新用户");
    }
    else
        ui->label_title->setText("修改个人信息");
}




void reg::on_btnOK_clicked()
{
    QString username,password,password_confirm;
    QSqlQuery query(m_loginDlg->m_db);

    /* 用户名密码 */
    username = ui->lineUserName->text();
    if(username==""){
        QMessageBox::warning(0,"警告","用户名不能为空，请填写用户名");
        return;
    }
    else if(m_bIsRegister){  // 如果是注册，则判断该用户是否已经注册，否则是修改用户信息
        QString select_info = QString("select * from UserInfo where username='%1'").arg(username);
        query.exec(select_info);
        if(query.next()){  // 数据库中存在记录
            QMessageBox::warning(0,"错误","该用户名已被注册，请更换用户名");
            ui->lineUserName->clear();
            return;
        }
    }
    password = ui->linePassword->text();
    if(password==""){
        QMessageBox::warning(0,"警告","密码不能为空，请填写密码");
        return;
    }

    password_confirm = ui->linePasswordConfirm->text();
    if(password_confirm=="" || password!=password_confirm){
        QMessageBox::warning(0,"警告","两次填写的密码不一致，请重新填写");
        return;
    }

    /* 用户头像 */
    if(m_strHeaderPath==""){
        QMessageBox::warning(0,"警告","尚未上传用户头像，无法注册");
        return;
    }

    bool result1;
    if(m_bIsRegister){  // 注册操作
        QString insert_info = QString("insert into UserInfo (username, password, headerpath) values ('%1', '%2', '%3')")
                .arg(username)
                .arg(password)
                .arg(m_strHeaderPath);

        result1 = query.exec(insert_info);  // 向UserInfo表中插入用户名密码头像等信息
    }
    else{   // 修改操作
        QString update_info = QString("update UserInfo set password='%1', headerpath='%2' where username='%3'")
                .arg(ui->linePassword->text())
                .arg(m_strHeaderPath)
                .arg(ui->lineUserName->text());

        result1 = query.exec(update_info);  //在UserInfo表中更新密码头像等信息
    }


    if((!result1))
        QMessageBox::warning(0,"错误","无法将记录写入数据库，请联系管理员");
    else{
        this->hide();
        m_loginDlg->show();  // 显示登录窗口
    }


}


/* 取消按钮点击事件处理函数 */
void reg::on_btnCancel_clicked()
{
    QString info;
    if(m_bIsRegister){  // 注册
        info = "该操作将取消注册操作，并且不会记录任何已经填写的信息,是否继续？";
    }
    else{   // 修改
       info = "该操作将直接退出修改，并且不会更新任何已经修改的信息,是否继续？";

    }
    QMessageBox box(QMessageBox::Warning,"警告",info,QMessageBox::Ok|QMessageBox::Cancel);
    box.setButtonText(QMessageBox::Ok,QString("继续"));
    box.setButtonText(QMessageBox::Cancel,QString("取消"));
    if(box.exec()==QMessageBox::Ok){
        this->hide();
        m_loginDlg->show();   // 显示登录窗口
    }

}


/* 上传头像按钮点击事件处理函数 */
void reg::on_btnHeader_clicked()
{
    m_strHeaderPath = QFileDialog::getOpenFileName(0,"打开头像文件","./","*.jpg *.bmp *.png");
    if(m_strHeaderPath!=""){
        m_img->load(m_strHeaderPath);
        ui->labelHeader->setPixmap(QPixmap::fromImage(m_img->scaled(ui->labelHeader->size())));
    }
}

/* 拦截窗口关闭事件 */
void reg::closeEvent(QCloseEvent *event)
{

    QString info;
    if(m_bIsRegister){  // 注册
        info = "该操作将取消注册操作，并且不会记录任何已经填写的信息,是否继续？";
    }
    else{   // 修改
       info = "该操作将直接退出修改，并且不会更新任何已经修改的信息,是否继续？";

    }
    QMessageBox box(QMessageBox::Warning,"警告",info,QMessageBox::Ok|QMessageBox::Cancel);
    box.setButtonText(QMessageBox::Ok,QString("继续"));
    box.setButtonText(QMessageBox::Cancel,QString("取消"));
    if(box.exec()==QMessageBox::Ok){
        this->hide();
        m_loginDlg->show();
    }
    else
        event->ignore();
}
