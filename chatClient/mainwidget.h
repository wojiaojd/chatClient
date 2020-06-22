#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QPoint>
#include <QVBoxLayout>
#include <QStackedLayout>

#include "threadhandler.h"
#include "friendlistitem.h"
#include "chatlistitem.h"
#include "sockhandler.h"

namespace Ui {
class mainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(SockHandler *sockHandler, QWidget *parent = nullptr);
    ~MainWidget();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    bool eventFilter(QObject *watched, QEvent *event);
    void addFriendItem(FriendListItem *const item);
    FriendListItem *getFriendItem(int id);
    void addChatItem(ChatListItem *const item);
    ChatListItem *getChatItem(int id);
    void setId(int id);
    void setSockHandler(SockHandler *sockHandler);
signals:
    void searchUser(QByteArray uid);
public slots:
    void postSearchedUsr(UsrInfo *info);
private:
    Ui::mainWidget *ui;
    QPoint oldMousePos;
    //聊天窗口的栈布局
    QStackedLayout *myStackedLayout;
    //通讯录的布局
    QVBoxLayout *addressListLayout;
    //聊天好友的列表布局
    QVBoxLayout *chatListLayout;
    //搜索新好友的列表布局
    QVBoxLayout *newFriendListLayout;
    //通讯录好友项目
    QVector<FriendListItem*> friendListItems;
    //聊天列表好友项目
    QVector<ChatListItem*> chatListItems;
    //当前聊天好友项目
    ChatListItem *currentChatItem;
    //主窗口的套接字连接处理
    SockHandler *sockHandler;
    //接收并转发的线程
    ThreadHandler *threadHandler;
};

#endif // MAINWIDGET_H
