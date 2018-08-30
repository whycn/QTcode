#include "loginwidget.h"
#include "ui_loginwidget.h"

LoginWidget::LoginWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWidget)
{
    ui->setupUi(this);
}

LoginWidget::~LoginWidget()
{
    delete ui;
}
