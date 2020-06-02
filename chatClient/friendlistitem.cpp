#include "friendlistitem.h"
#include "ui_friendlistitem.h"

FriendListItem::FriendListItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendListItem)
{
    ui->setupUi(this);
    ui->lbHeadIcon->setPixmap(QPixmap(":/icons/headIcon.png").scaled(ui->lbHeadIcon->size()));
    setStyleSheet("QWidget{background-color:rgb(227,227,227);}");
    ui->lbUserName->setStyleSheet("QLabel{color:black}");
}

FriendListItem::~FriendListItem()
{
    delete ui;
}
void FriendListItem::setText(const QString &userName)
{
    ui->lbUserName->setText(userName);
}
void FriendListItem::setPixmap(const QPixmap &headIcon)
{
    ui->lbHeadIcon->setPixmap(headIcon.scaled(ui->lbHeadIcon->size()));
}
