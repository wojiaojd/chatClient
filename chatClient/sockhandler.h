#ifndef SOCKHANDLER_H
#define SOCKHANDLER_H
#include <QTcpSocket>
#include <QHostAddress>

#include"usrinfo.h"

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
    SockHandler(QObject *parent = nullptr);
    ~SockHandler();
    void signup(const QByteArray &userName, const QByteArray &password);
    void signin(const QByteArray &account, const QByteArray &password);
    bool signinRecv();
    QByteArray signupRecv();
    UsrInfo *readUsrInfo();
    void setId(int id);
private:
    QHostAddress *hostAddress;
    //此端用户id
    int id;
signals:
    void searchedUsr(UsrInfo *info);
    void initUsrList(UsrInfo *info);
public slots:
    void connectServer();
    void receive();
    void getUserInfoBrief(QString uid);

};

#endif // SOCKHANDLER_H
