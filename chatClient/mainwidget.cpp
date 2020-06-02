#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "chatlistitem.h"
#include "friendlistitem.h"
#include "othersidemsg.h"
#include <QBitmap>
#include <QPainter>
#include <QStackedLayout>
#include <QDebug>

mainWidget::mainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainWidget)
{
    ui->setupUi(this);
    this->oldMousePos = this->geometry().topLeft();

    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);

    ui->widget_12->setStyleSheet("QWidget{background-color:rgb(245,245,245);border-radius:4px;}");

    ui->widget->setStyleSheet("QWidget{"
                              "background-color:rgb(39,43,47);"
                              "border-top-right-radius:0px;"
                              "border-bottom-right-radius:0px;"
                              "}");
    ui->scroAreaLeft->setStyleSheet("QScrollArea{"
                                    "border-radius:0px;"
                                    "border-top-width:1px;"
                                    "border-color:rgb(231,231,231);"
                                    "border-style:solid;"
                                    "}");
    ui->scroAreaRight->setStyleSheet("QScrollArea{"
                                     "border-radius:0px;"
                                     "border-width:1px;"
                                     "border-color:rgb(231,231,231);"
                                     "border-style:solid;"
                                     "}");
    ui->ledtSearch->setStyleSheet("QLineEdit{"
                                  "background-color:white;"
                                  "border-top-left-radius:0px;"
                                  "border-bottom-left-radius:0px;"
                                  "}");
    ui->btnSearch->setStyleSheet("QPushButton{"
                                 "background-color:white;"
                                 "border-top-right-radius:0px;"
                                 "border-bottom-right-radius:0px;"
                                 "}");
    ui->widget_10->setStyleSheet("QWidget{"
                                 "border:0px;"
                                 "background-color:white;"
                                 "}");
    ui->widget_9->setStyleSheet("QWidget{"
                                "background-color:white;"
                                "border-width:1px;"
                                "border-top-width:0px;"
                                "border-radius:0px;"
                                "border-bottom-right-radius:4px;"
                                "border-color:rgb(231,231,231);"
                                "border-style:solid;"
                                "}");
    ui->widget_11->setStyleSheet("QWidget{border:0px;"
                                 "background-color:white;"
                                 "}");
    ui->tedtInputArea->setStyleSheet("QPlainTextEdit{border:none;"
                                     "background-color:white;"
                                     "}");
    ui->btnSend->setStyleSheet("QPushButton{border-width:1px;"
                               "border-color:rgb(231,231,231);"
                               "border-style:solid;"
                               "border-radius:0px;"
                               "}");

    ui->btnUsrMsg->setIcon(QIcon(":/icons/headIcon.png"));
    ui->btnUsrMsg->setIconSize(ui->btnUsrMsg->size());
    ui->btnChatMsg->setIcon(QPixmap(":/icons/chatMsg.png"));
    ui->btnChatMsg->setIconSize(ui->btnChatMsg->size());
    ui->btnCut->setIcon(QIcon(":/icons/cut.png"));
    ui->btnCut->setIconSize(ui->btnCut->size()*0.5);
    ui->btnTop->setIcon(QIcon(":/icons/top.png"));
    ui->btnTop->setIconSize(ui->btnTop->size()*0.5);
    ui->btnFile->setIcon(QIcon(":/icons/file.png"));
    ui->btnFile->setIconSize(ui->btnFile->size());
    ui->btnLook->setIcon(QIcon(":/icons/look.png"));
    ui->btnLook->setIconSize(ui->btnLook->size());
    ui->btnMore->setIcon(QIcon(":/icons/more.png"));
    ui->btnMore->setIconSize(ui->btnMore->size());
    ui->btnClose->setIcon(QIcon(":/icons/close.png"));
    ui->btnClose->setIconSize(ui->btnClose->size());
    ui->btnEmoji->setIcon(QIcon(":/icons/emoji.png"));
    ui->btnEmoji->setIconSize(ui->btnEmoji->size()*0.5);
    ui->btnPhone->setIcon(QIcon(":/icons/phone.png"));
    ui->btnPhone->setIconSize(ui->btnPhone->size());
    ui->btnSearch->setIcon(QIcon(":/icons/search.png"));
    ui->btnSearch->setIconSize(ui->btnSearch->size());
    ui->btnMaxSize->setIcon(QIcon(":/icons/maxSize.png"));
    ui->btnMaxSize->setIconSize(ui->btnMaxSize->size()*0.5);
    ui->btnMinSize->setIcon(QIcon(":/icons/minSize.png"));
    ui->btnMinSize->setIconSize(ui->btnMinSize->size()*0.5);
    ui->btnSendFile->setIcon(QIcon(":/icons/fileSend.png"));
    ui->btnSendFile->setIconSize(ui->btnSendFile->size()*0.5);
    ui->btnUserList->setIcon(QIcon(":/icons/friendList.png"));
    ui->btnUserList->setIconSize(ui->btnUserList->size());
    ui->btnChatRecord->setIcon(QIcon(":/icons/chatRecord.png"));
    ui->btnChatRecord->setIconSize(ui->btnChatRecord->size()*0.5);
    ui->btnCollection->setIcon(QIcon(":/icons/collection.png"));
    ui->btnCollection->setIconSize(ui->btnCollection->size());
    ui->btnChatWidget->setIcon(QIcon(":/icons/chat.png"));
    ui->btnChatWidget->setIconSize(ui->btnChatWidget->size());
    ui->btnTinyProgram->setIcon(QIcon(":/icons/tinyProgram.png"));
    ui->btnTinyProgram->setIconSize(ui->btnTinyProgram->size());
    ui->btnSearch->setIcon(QIcon(":/icons/search.png"));
    ui->btnSearch->setIconSize(ui->btnSearch->size());
    ui->btnNewChat->setIcon(QIcon(":/icons/add.png"));
    ui->btnNewChat->setIconSize(ui->btnNewChat->size()*0.7);

    connect(ui->btnClose, &QPushButton::clicked, this, &QWidget::close);
    connect(ui->btnMaxSize, &QPushButton::clicked, [=](){
        this->showFullScreen();
    });

    //栈布局添加页面
    QStackedLayout *myStackedLayout = new QStackedLayout;
    ui->widget_5->setLayout(myStackedLayout);
    //聊天列表页面
    QVBoxLayout *chatListLayout = new QVBoxLayout;
    chatListLayout->setSizeConstraint(QVBoxLayout::SetMinAndMaxSize);
    chatListLayout->setMargin(0);
    QWidget *chatListWidget = new QWidget;
    chatListWidget->setLayout(chatListLayout);
    ui->scroAreaLeft->resize(ui->widget_5->size());
    ui->scroAreaLeft->setWidget(chatListWidget);
    myStackedLayout->addWidget(ui->scroAreaLeft);
    //通讯录页面
    QScrollArea *scroAreaLeftAddrList = new QScrollArea(ui->widget_5);
    scroAreaLeftAddrList->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding));
    scroAreaLeftAddrList->setStyleSheet("QScrollArea{"
                                    "border-radius:0px;"
                                    "border-top-width:1px;"
                                    "border-color:rgb(231,231,231);"
                                    "border-style:solid;"
                                    "}");
//    scroAreaLeftAddrList->setWidgetResizable(true);
    scroAreaLeftAddrList->resize(ui->widget_5->size());
    QVBoxLayout *addressListLayout = new QVBoxLayout;
    addressListLayout->setSizeConstraint(QVBoxLayout::SetMinAndMaxSize);
    addressListLayout->setMargin(0);
    QWidget *addressListWidget = new QWidget();
    addressListWidget->setLayout(addressListLayout);
    scroAreaLeftAddrList->setWidget(addressListWidget);
    myStackedLayout->addWidget(scroAreaLeftAddrList);
    //scroAreaLeftAddrList->show();

        FriendListItem *newFriend = new FriendListItem;
        newFriend->setText("新的朋友");
        newFriend->setPixmap(QPixmap(":/icons/newFriend.png"));
        addressListLayout->addWidget(newFriend);
        newFriend->show();

    connect(ui->btnNewChat, &QPushButton::clicked, [=](){
        ChatListItem *item = new ChatListItem();
        chatListLayout->addWidget(item);
        item->show();
    });


    //右滚动布局
    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->setSizeConstraint(QVBoxLayout::SetMinAndMaxSize);
    rightLayout->setMargin(0);
    QWidget *rightWidget = new QWidget;
    rightWidget->setLayout(rightLayout);
    ui->scroAreaRight->setWidget(rightWidget);

    connect(ui->btnSend, &QPushButton::clicked, [=](){
        otherSideMsg *otherMsg = new otherSideMsg(rightWidget);
        otherMsg->setText(ui->tedtInputArea->toPlainText());
        ui->tedtInputArea->clear();
        rightLayout->addWidget(otherMsg);
        otherMsg->show();

    });

    connect(ui->btnChatWidget, &QToolButton::clicked, [=](){
        myStackedLayout->setCurrentIndex(0);
    });
    connect(ui->btnUserList, &QToolButton::clicked, [=](){
        myStackedLayout->setCurrentIndex(1);
    });

}

void mainWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        QPoint mousePoint(mapFromGlobal(QCursor::pos()));
        if(ui->widget->geometry().contains(mousePoint) ||
           ui->widget_4->geometry().contains(mousePoint)||
           ui->widget_3->geometry().contains(mousePoint))
        {
            this->oldMousePos = event->pos();
            event->accept();
        }
    }
}
void mainWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() == Qt::LeftButton)
    {
        QPoint mousePoint(mapFromGlobal(QCursor::pos()));
        if(ui->widget->geometry().contains(mousePoint) ||
           ui->widget_4->geometry().contains(mousePoint)||
           ui->widget_3->geometry().contains(mousePoint))
        {
            move(event->globalPos() - oldMousePos);
            event->accept();
        }
    }
}

mainWidget::~mainWidget()
{
    delete ui;
}
