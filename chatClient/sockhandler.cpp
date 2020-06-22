#include "sockhandler.h"
#include <QDebug>
#include <windows.h>


SockHandler::SockHandler(QObject *parent):QTcpSocket (parent)
{
    this->hostAddress = new QHostAddress("59.110.124.54");

}
SockHandler::~SockHandler()
{
    delete hostAddress;
}
void SockHandler::connectServer()
{
    this->connectToHost(*hostAddress, 9998);
    qDebug() << "connected to server:" << this->hostAddress->toString().toUtf8().data();
}
void SockHandler::signup(const QByteArray &userName, const QByteArray &password)
{
    QByteArray sendbuf;
    SockPackage pack;
    pack.setCmd0(CMD_SIGNUP);
    pack.setCmd1(CMD_REQUEST);
    pack.appendOtherMsg(userName+"\n");
    pack.appendOtherMsg(password+"\n");
    this->write(pack.toRowMessage());
}

void SockHandler::signin(const QByteArray &account, const QByteArray &password)
{
    SockPackage pack;
    pack.setCmd0(CMD_SIGNIN);
    pack.setCmd1(CMD_REQUEST);
    pack.setSender(account);
    pack.setOtherMsg(password);
    this->write(pack.toRowMessage());
}

void SockHandler::receive()
{
    qDebug() << "receive";
    UsrInfo *info;

    this->package = this->readPackage();

    switch (this->package.getCmd0()) {
    case CMD_SIGNUP:
        emit this->signupResult(this->package.getrecver());
        this->write("");
        this->disconnectFromHost();
        break;
    case CMD_SIGNIN:
        emit this->signinResult(this->package.getCmd1());
        break;
    case CMD_USRINFO :
        //请求用户不存在的情况下返回空
        if((info = this->package.extractUsrInfo()) == nullptr)
            break;
        if(this->package.getCmd1() == CMD_BRIEF)
        {
            qDebug() << "searched:----"<<info->getUsrName();
            emit this->searchedUsr(info);
        }
        else if(this->package.getCmd1() == CMD_DETAIL)
        {
            emit this->initUsrList(info);
        }
        break;
    case CMD_NEWFND:
    //收到好友申请
        break;
    default:
        break;
    }
}

void SockHandler::getUserInfoBrief(QByteArray uid)
{
    SockPackage pack;
    pack.setCmd0(CMD_USRINFO);
    pack.setCmd1(CMD_BRIEF);
    pack.setSender(this->usrInfo.getId());
    pack.setRecver(uid);
    this->write(pack.toRowMessage());
}

void SockHandler::requestNewFriend(int id)
{
    SockPackage pack;
    pack.setCmd0(CMD_NEWFND);
    pack.setCmd1(CMD_REQUEST);
    pack.setSender(this->usrInfo.getId());
    pack.setRecver(id);
    pack.setOtherMsg(this->usrInfo.getUsrName());
    this->write(pack.toRowMessage());
}
SockPackage & SockHandler::readPackage()
{
    QByteArray buf;
    buf = readLine(20);
    this->package.setCmd0(buf.remove(buf.size()-1, 1));
    buf = readLine(20);
    this->package.setCmd1(buf.remove(buf.size()-1, 1));
    buf = readLine(20);
    this->package.setSender(buf.remove(buf.size()-1, 1));
    buf = readLine(20);
    this->package.setRecver(buf.remove(buf.size()-1, 1));
    buf = readLine(20);
    this->package.clearOtherMsg();
    while((buf = readLine(1024)) != "$\n")
    {
        this->package.appendOtherMsg(buf);
    }
    return this->package;
}





