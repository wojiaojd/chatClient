#ifndef SOCKHANDLER_H
#define SOCKHANDLER_H
#include <QTcpSocket>
#include <QHostAddress>

#include"usrinfo.h"
#include "sockpackage.h"

class SockHandler : public QTcpSocket
{
    Q_OBJECT
public:
    enum type{
        CMD_SIGNUP = 0,
        CMD_SIGNIN,
        CMD_TALKTO,
        CMD_REFUSE,
        CMD_NEWFND,
        CMD_REQUEST,
        CMD_CONFIRM,
        CMD_USRINFO,
        CMD_BRIEF,
        CMD_DETAIL
    };
    //此端用户信息
    UsrInfo usrInfo;

    SockHandler(QObject *parent = nullptr);
    ~SockHandler();
    void signup(const QByteArray &userName, const QByteArray &password);
    void signin(const QByteArray &account, const QByteArray &password);
    bool signinRecv();
    QByteArray signupRecv();
    void setId(int id);
    SockPackage & readPackage();

private:
    QHostAddress *hostAddress;
    //最近收到的一个包
    SockPackage package;

signals:
    void searchedUsr(UsrInfo *info);
    void initUsrList(UsrInfo *info);
    void signupResult(int id);
    void signinResult(int cmd_1);

public slots:
    void connectServer();
    void receive();
    void getUserInfoBrief(QByteArray uid);
    void requestNewFriend(int id);

};

#endif // SOCKHANDLER_H
