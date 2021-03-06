#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "chatlistitem.h"
#include "othersidemsg.h"
#include "thissidemsg.h"

#include <QBitmap>
#include <QPainter>
#include <QStackedLayout>
#include <QDebug>
#include <QScrollBar>

MainWidget::MainWidget(SockHandler *sockHandler, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainWidget),
    sockHandler(sockHandler)
{
    ui->setupUi(this);
    this->oldMousePos = this->geometry().topLeft();
    this->currentChatItem = nullptr;
    this->threadHandler = new ThreadHandler();

    this->newFriendListLayout = new QVBoxLayout;
    this->myStackedLayout = new QStackedLayout;
    this->chatListLayout = new QVBoxLayout;
    this->addressListLayout = new QVBoxLayout;

    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);

    //ui stylesheet
    {
        ui->widget_12->setStyleSheet("QWidget{background-color:rgb(245,245,245);border-radius:4px;}");

        ui->widget->setStyleSheet("QWidget{"
                                  "background-color:rgb(39,43,47);"
                                  "border-top-right-radius:0px;"
                                  "border-bottom-right-radius:0px;"
                                  "}");
        ui->scroAreaLeft->setStyleSheet("QScrollArea{"
                                        "border-radius:0px;"
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
        ui->widget_14->setStyleSheet("QWidget{"
                                     "border-color:rgb(231,231,231);"
                                     "border-bottom-width:1px;"
                                     "border-style:solid;"
                                     "border-radius:0px;"
                                     "}");
        ui->widget_2->setStyleSheet("QWidget{"
                                    "background-color:rgb(222,222,222);"
                                    "}");
        ui->widget_15->setStyleSheet("QLineEdit{"
                                     "background-color:white;"
                                     "border-radius:3px;"
                                     "}"
                                     "QPushButton{"
                                     "background-color:rgb(26,173,25);"
                                     "color:white;"
                                     "}");
        ui->ledtNewFriend->setAlignment(Qt::AlignCenter);

    }

    //ui image
    {
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
        ui->lbIcon->setPixmap(QPixmap(":/icons/trip.png").scaled(ui->lbIcon->size()));
    }


    //栈布局添加页面
    ui->widget_5->setLayout(this->myStackedLayout);
    //聊天列表页面
    this->chatListLayout->setSizeConstraint(QVBoxLayout::SetMinAndMaxSize);
    this->chatListLayout->setMargin(0);
    QWidget *chatListWidget = new QWidget;
    chatListWidget->setLayout(chatListLayout);
    ui->scroAreaLeft->resize(ui->widget_5->size());
    ui->scroAreaLeft->setWidget(chatListWidget);
    this->myStackedLayout->addWidget(ui->scroAreaLeft);
    //通讯录页面
    QScrollArea *scroAreaLeftAddrList = new QScrollArea(ui->widget_5);
    scroAreaLeftAddrList->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding));
    scroAreaLeftAddrList->setStyleSheet("QScrollArea{"
                                    "border-radius:0px;"
                                    "border-color:rgb(231,231,231);"
                                    "border-style:solid;"
                                    "}");
//    scroAreaLeftAddrList->setWidgetResizable(true);
    scroAreaLeftAddrList->resize(ui->widget_5->size());
    this->addressListLayout->setSizeConstraint(QVBoxLayout::SetMinAndMaxSize);
    this->addressListLayout->setMargin(0);
    QWidget *addressListWidget = new QWidget();
    addressListWidget->setLayout(addressListLayout);
    scroAreaLeftAddrList->setWidget(addressListWidget);
    this->myStackedLayout->addWidget(scroAreaLeftAddrList);
    //scroAreaLeftAddrList->show();
    //通讯录中添加好友的选项
    FriendListItem *newFriend = new FriendListItem(1);
    newFriend->installEventFilter(this);
    newFriend->setText("新的朋友");
    newFriend->setPixmap(QPixmap(":/icons/newFriend.png"));
    addressListLayout->addWidget(newFriend);
    this->addFriendItem(newFriend);
    newFriend->show();

    //右栈布局
    ui->stackedWidget->setCurrentIndex(0);
    newFriendListLayout->setSizeConstraint(QVBoxLayout::SetMinAndMaxSize);
    QWidget *wgtNewFriendList = new QWidget;
    wgtNewFriendList->setLayout(newFriendListLayout);
    ui->scrollArea->setWidget(wgtNewFriendList);

    ui->verticalLayout_10->setAlignment(Qt::AlignCenter);
    connect(ui->btnClose, &QPushButton::clicked, this, &QWidget::close);
    connect(ui->btnMaxSize, &QPushButton::clicked, [=](){
        this->showFullScreen();
        this->currentChatItem->msgFormResize();
    });
    //发起新聊天
    connect(ui->btnNewChat, &QPushButton::clicked, [=](){
        ChatListItem *item = new ChatListItem();
        item->installEventFilter(this);
        //加入管理
        this->addChatItem(item);
        ui->stackWgtMsgList->addWidget(item->scroMsgList);
        chatListLayout->addWidget(item);
        item->show();

    });
    connect(ui->btnSend, &QPushButton::clicked, [=](){
        int recver = this->currentChatItem->getId();
        qDebug() << "recver == " << recver;
        QByteArray msg = ui->tedtInputArea->toPlainText().toUtf8();
        int tail = msg.size()-1;
        while(msg[tail] == '\n')
        {
            msg.remove(tail, 1);
            tail--;
        }
        emit this->preparedMsgThisSide(recver, msg);
    });
    connect(this, &MainWidget::preparedMsgThisSide, this, &MainWidget::sendMsgThisSide);
    connect(this, &MainWidget::preparedMsgThisSide, sockHandler, &SockHandler::sendTo);

    connect(ui->btnChatWidget, &QToolButton::clicked, [=](){
        myStackedLayout->setCurrentIndex(0);
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->btnUserList, &QToolButton::clicked, [=](){
        myStackedLayout->setCurrentIndex(1);
        ui->stackedWidget->setCurrentIndex(0);
    });
    //搜索用户
    connect(ui->btnSearchFriend, &QPushButton::clicked, [=](){
        QString uid = ui->ledtNewFriend->text();
        emit this->searchUser(uid.toUtf8());
    });

    ////TODO:
    /// 从通讯录选择用户聊天,待改进成为信号槽模式
    connect(ui->btnSendMsg, &QPushButton::clicked, [=](){
        //中间的布局选择聊天列表
        myStackedLayout->setCurrentIndex(0);
        //右边的布局选择聊天窗口
        ui->stackedWidget->setCurrentIndex(1);
        //聊天列表对象组件
        ChatListItem *item = new ChatListItem();

        item->setUsrName(ui->lbIdContent->text());
        item->setId(ui->lbIdContent->text().toInt());
        qDebug() << "item->setid:"<< item->getId();
        item->installEventFilter(this);
        this->addChatItem(item);
        ui->stackWgtMsgList->addWidget(item->scroMsgList);
        chatListLayout->addWidget(item);
        this->currentChatItem = item;
        item->show();

        ui->stackWgtMsgList->setCurrentWidget(item->scroMsgList);
        //重置widget的宽度，使聊天气泡widget横向填充
        this->currentChatItem->msgFormResize();

    });

    connect(this, &MainWidget::searchUser, sockHandler, &SockHandler::getUserInfoBrief);
    connect(sockHandler, &SockHandler::searchedUsr, this, &MainWidget::postSearchedUsr);
    connect(sockHandler, &SockHandler::recvNewFriendRequest, this, &MainWidget::handleNewFriendRequest);
    connect(sockHandler, &SockHandler::recvNewFriendConfirm, this, &MainWidget::handleNewFriendConfirm);
    connect(sockHandler, &SockHandler::recvMsgFrom, this, &MainWidget::postMsgTo);
//    //线程相关初始化
//    QThread *recver = threadHandler->newObjThread(sockHandler);
//    connect(recver, &QThread::finished, sockHandler, &SockHandler::deleteLater);
//    connect(recver, &QThread::finished, threadHandler, &ThreadHandler::cleanUp);
//    connect(sockHandler, &SockHandler::connected, [=](){recver->start();});

    //过滤、转发来自服务器的消息
    connect(sockHandler, &SockHandler::readyRead, sockHandler, &SockHandler::receive);
}

void MainWidget::mousePressEvent(QMouseEvent *event)
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
void MainWidget::mouseMoveEvent(QMouseEvent *event)
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
bool MainWidget::eventFilter(QObject *watched, QEvent *event)
{
    //通讯录中id为1的好友是添加好友选项
    if(watched == getFriendItem(1))
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        if(event->type() == QEvent::MouseButtonPress && mouseEvent->button() == Qt::LeftButton)
        {
            ui->stackedWidget->setCurrentIndex(2);
        }
        return QWidget::eventFilter(watched, event);
    }
    //点击聊天列表好友
    for(auto item : this->chatListItems)
    {
        if(watched == item && event->type() == QEvent::MouseButtonPress)
        {
            ui->stackedWidget->setCurrentIndex(1);
            this->currentChatItem = item;
            ui->stackWgtMsgList->setCurrentWidget(item->scroMsgList);
            //重置widget的宽度，使聊天气泡widget横向填充
            this->currentChatItem->msgFormResize();
            return QWidget::eventFilter(watched, event);
        }
    }
    return QWidget::eventFilter(watched, event);
}
MainWidget::~MainWidget()
{
    delete ui;
}
void MainWidget::addFriendItem(FriendListItem *const item)
{
    this->friendListItems.push_back(item);
}
FriendListItem * MainWidget::getFriendItem(int id)
{
    for(auto item : this->friendListItems)
    {
        if(item->getId() == id)
            return item;
    }
    return nullptr;
}
void MainWidget::addChatItem(ChatListItem *const item)
{
    this->chatListItems.push_back(item);
}
ChatListItem * MainWidget::getChatItem(int id)
{
    for(auto item: this->chatListItems)
    {
        if(item->getId() == id)
            return item;
    }
    return nullptr;
}
//info是要展示的搜索到的用户信息
void MainWidget::postSearchedUsr(UsrInfo *info)
{
    NewFriend *newFriend = new NewFriend(NewFriend::SEARCHED);

    this->newFriendItems.prepend(newFriend);

    connect(newFriend, &NewFriend::requestNewFriend, this->sockHandler, &SockHandler::requestNewFriend);
    newFriend->setInfo(info);
    //清除好友申请列表,待改进
    while(this->newFriendListLayout->takeAt(0) != nullptr)
    {
        this->newFriendListLayout->removeItem(this->newFriendListLayout->takeAt(0));
    }
    this->newFriendListLayout->update();
    this->newFriendListLayout->addWidget(newFriend);
    newFriend->show();
}
void MainWidget::setSockHandler(SockHandler *sockHandler)
{
    this->sockHandler = sockHandler;
}
void MainWidget::handleNewFriendRequest(UsrInfo *info)
{
    NewFriend *newFriend = new NewFriend(NewFriend::REQUESTED);

    this->newFriendItems.prepend(newFriend);

    connect(newFriend, &NewFriend::confirmNewFriend, this->sockHandler, &SockHandler::confirmNewFriend);
    newFriend->setInfo(info);
    this->newFriendListLayout->addWidget(newFriend);
    newFriend->show();
}
void MainWidget::handleNewFriendConfirm(UsrInfo *info)
{
    FriendListItem *item = new FriendListItem(info->getId());
    item->setText(info->getUsrName());
    this->friendListItems.push_back(item);
    connect(item, &FriendListItem::showUsrInfo, this, &MainWidget::showUsrInfo);
    this->addressListLayout->addWidget(item);
    item->show();
}
void MainWidget::showUsrInfo(int id)
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->lbIdContent->setText(QString::number(id));
}
void MainWidget::sendMsgThisSide(int recver, const QByteArray &msg)
{
    ThisSideMsg *thisMsg = new ThisSideMsg();
    thisMsg->setText(msg);
    this->currentChatItem->msgListLayout->addWidget(thisMsg);
    thisMsg->show();
    //滑动条置底
    QScrollBar *scrollBar = this->currentChatItem->scroMsgList->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
    //清空输入框
    ui->tedtInputArea->clear();
}
void MainWidget::postMsgTo(int sender, const QByteArray &msg)
{
    for(auto item : this->chatListItems)
    {
        if(item->getId() == sender)
        {
            OtherSideMsg *otherMsg = new OtherSideMsg(this);
            QByteArray message(msg);
            int tail = message.size()-1;
            while(message[tail] == '\n')
                tail--;
            message[tail+1] = '\0';
            otherMsg->setText(message);
            this->currentChatItem->msgListLayout->addWidget(otherMsg);
            otherMsg->show();
            //滑动条置底
            QScrollBar *scrollBar = this->currentChatItem->scroMsgList->verticalScrollBar();
            scrollBar->setValue(scrollBar->maximum());
        }
    }
}
