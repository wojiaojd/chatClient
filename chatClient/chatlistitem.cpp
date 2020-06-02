#include "chatlistitem.h"
#include "ui_chatlistitem.h"

ChatListItem::ChatListItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatListItem)
{
    ui->setupUi(this);
//    setWindowFlag(Qt::FramelessWindowHint);
    ui->lbHeadIcon->setPixmap(QPixmap(":/icons/headIcon.png").scaled(ui->lbHeadIcon->size()));
    ui->lbStateIcon->setPixmap(QPixmap(":/icons/config.png").scaled(ui->lbStateIcon->height(), ui->lbStateIcon->height()));
    setStyleSheet("QWidget{background-color:rgb(227,227,227);}");
    ui->lbDate->setStyleSheet("QLabel{color:rgb(192,189,187)}");
    ui->lbMostRecentMsg->setStyleSheet("QLabel{color:rgb(192,189,187)}");
}

ChatListItem::~ChatListItem()
{
    delete ui;
}
