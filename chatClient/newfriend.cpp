#include "newfriend.h"
#include "ui_newfriend.h"

NewFriend::NewFriend(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewFriend)
{
    ui->setupUi(this);
    ui->lbHeadIcon->setPixmap(QPixmap(":/icons/headIcon.png").scaled(ui->lbHeadIcon->size()));
    ui->widget->setStyleSheet("QWidget{"
                              "background-color:rgb(233,233,233);"
                              "}"
                              "QPushButton{"
                              "background-color:rgb(26,173,25);"
                              "color:white;"
                              "border-radius:0px;"
                              "}");
    ui->widget->installEventFilter(this);
    ui->btnAccept->installEventFilter(this);
}

NewFriend::~NewFriend()
{
    delete ui;
}

bool NewFriend::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->widget)
    {
        if(event->type() == QEvent::Enter)
        {
            ui->widget->setStyleSheet("QWidget{background-color:rgb(220,220,220);}"
                                      "QPushButton{background-color:rgb(26,173,25);color:white;}");
        }
        else if (event->type() == QEvent::Leave)
        {
            ui->widget->setStyleSheet("QWidget{background-color:rgb(233,233,233);}"
                                      "QPushButton{background-color:rgb(26,173,25);color:white;}");
        }
    }
    else if(watched == ui->btnAccept)
    {
        if(event->type() == QEvent::Enter || event->type() == QEvent::MouseButtonRelease)
        {
            ui->btnAccept->setStyleSheet("QPushButton{background-color:rgb(18,150,17);color:white;}");
        }
        else if (event->type() == QEvent::Leave || event->type() == QEvent::MouseButtonPress)
        {
            ui->btnAccept->setStyleSheet("QPushButton{background-color:rgb(26,173,25);color:white;}");
        }

    }
}

void NewFriend::setInfo(UsrInfo *info)
{
    this->info = info;
    ui->lbMsg->setText(this->info->getMsg());
    ui->lbUserName->setText(this->info->getUsrName());
}