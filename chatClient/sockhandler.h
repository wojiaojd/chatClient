#ifndef SOCKHANDLER_H
#define SOCKHANDLER_H
#include <QTcpSocket>
#include <QHostAddress>

class SockHandler : public QTcpSocket
{
public:
    enum type{
        CMD_SIGNUP = 0,
        CMD_SIGNIN = 1,
        CMD_TALKTO = 2,
        CMD_REFUSE = 3
    };
    SockHandler(QObject *parent = nullptr);
    ~SockHandler();
    void signup(const QByteArray &userName, const QByteArray &password);
    void signin(const QByteArray &account, const QByteArray &password);
    bool signinRecv();
private:
    QHostAddress *hostAddress;
public slots:
    void connectServer();
    QByteArray signupRecv();

};

#endif // SOCKHANDLER_H
