#include "friendlistitem.h"
#include "ui_friendlistitem.h"

FriendListItem::FriendListItem(int id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendListItem)
{
    setId(id);
    ui->setupUi(this);
    ui->lbHeadIcon->setPixmap(QPixmap(":/icons/headIcon.png").scaled(ui->lbHeadIcon->size()));
    setStyleSheet("QWidget{background-color:rgb(237,237,237);}");
    ui->lbUserName->setStyleSheet("QLabel{color:black}");
    ui->widget->installEventFilter(this);


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

void FriendListItem::setId(const int id)
{
    this->id = id;
}

int FriendListItem::getId()
{
    return this->id;
}

bool FriendListItem::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->widget)
    {
        if(event->type() == QMouseEvent::Enter || event->type() == QEvent::MouseButtonRelease)
        {
            ui->widget->setStyleSheet("QWidget{background-color:rgb(227,227,227);}");
        }
        else if(event->type() == QMouseEvent::Leave || event->type() == QEvent::MouseButtonPress)
        {
            ui->widget->setStyleSheet("QWidget{background-color:rgb(237,237,237);}");
            emit this->showUsrInfo(this->getId());
        }

    }

}
