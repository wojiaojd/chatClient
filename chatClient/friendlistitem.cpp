#include "friendlistitem.h"
#include "ui_friendlistitem.h"

FriendListItem::FriendListItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendListItem)
{
    ui->setupUi(this);
}

FriendListItem::~FriendListItem()
{
    delete ui;
}
