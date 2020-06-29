#include "chatlistitem.h"
#include "ui_chatlistitem.h"
#include <QDebug>

ChatListItem::ChatListItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatListItem)
{
    ui->setupUi(this);
    ui->lbHeadIcon->setPixmap(QPixmap(":/icons/headIcon.png").scaled(ui->lbHeadIcon->size()));
    ui->lbStateIcon->setPixmap(QPixmap(":/icons/config.png").scaled(ui->lbStateIcon->height(), ui->lbStateIcon->height()));
    setStyleSheet("QWidget{background-color:rgb(237,237,237);}");
    ui->widget_2->installEventFilter(this);
    ui->lbDate->setStyleSheet("QLabel{color:rgb(192,189,187)}");
    ui->lbMostRecentMsg->setStyleSheet("QLabel{color:rgb(192,189,187)}");

    this->scroMsgList = new QScrollArea;
    this->wgtMsgList = new QWidget;
    this->msgListLayout = new QVBoxLayout;
    msgListLayout->setSizeConstraint(QVBoxLayout::SetMinAndMaxSize);
    msgListLayout->setMargin(0);
    scroMsgList->setWidget(wgtMsgList);
    wgtMsgList->setLayout(msgListLayout);

    this->scroMsgList->setStyleSheet("QScrollArea{"
                                     "border-radius:0px;"
                                     "border-width:1px;"
                                     "border-color:rgb(231,231,231);"
                                     "border-style:solid;"
                                     "}");
}

ChatListItem::~ChatListItem()
{
    delete ui;
}

bool ChatListItem::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->widget_2)
    {
        if(event->type() == QMouseEvent::Enter || event->type() == QEvent::MouseButtonRelease)
        {
            setStyleSheet("QWidget{background-color:rgb(227,227,227);}");
        }
        else if(event->type() == QMouseEvent::Leave || event->type() == QEvent::MouseButtonPress)
        {
            setStyleSheet("QWidget{background-color:rgb(237,237,237);}");
        }
    }
    return QWidget::eventFilter(watched, event);
}

int ChatListItem::getId()
{
    return this->id;
}
void ChatListItem::msgFormResize()
{
    this->wgtMsgList->resize(this->scroMsgList->width()-20, this->wgtMsgList->height());

}
void ChatListItem::setUsrName(const QString &usrName)
{
    ui->lbUserName->setText(usrName);
}
