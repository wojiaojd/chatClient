#include "newfriend.h"
#include "ui_newfriend.h"

NewFriend::NewFriend(NewFriendType type, QWidget *parent) :
    QWidget(parent),
    dateTime(QDateTime::currentDateTime()),
    ui(new Ui::NewFriend),
    type(type)
{
    ui->setupUi(this);
    ui->lbHeadIcon->setPixmap(QPixmap(":/icons/headIcon.png").scaled(ui->lbHeadIcon->size()));
    //设置按钮文本
    if(this->type == SEARCHED)
    {
        ui->btnAccept->setText("发送");
        connect(ui->btnAccept, &QPushButton::clicked, [=](){emit this->requestNewFriend(this->info->getId());});
    }
    else if(this->type == REQUESTED)
    {
        ui->btnAccept->setText("接受");
        connect(ui->btnAccept, &QPushButton::clicked, [=](){emit this->confirmNewFriend(this->info->getId());});
    }

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



//    connect(this, &NewFriend::requestNewFriend, this->sockHandler, &SockHandler::requestNewFriend);

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
    return QWidget::eventFilter(watched, event);
}

void NewFriend::setInfo(UsrInfo *info)
{
    this->info = info;
    if(info->getUsrName() == "")
    {
        ui->lbUserName->setText(QByteArray::number(this->info->getId()));
    }
    else
    {
        ui->lbUserName->setText(this->info->getUsrName());
    }
}
