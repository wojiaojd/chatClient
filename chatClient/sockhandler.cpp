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
    qDebug() << "connected to server:" << this->hostAddress->toString().toUtf8().data();;
}
void SockHandler::signup(const QByteArray &userName, const QByteArray &password)
{
    /*
     *  CMD_SIGNUP
     *  userName
     *  password
     *
    */
    QByteArray buf;
    buf = QByteArray::number(SockHandler::CMD_SIGNUP)+'\n'+userName+'\n'+password+'\n';
    this->write(buf.data());
}

QByteArray SockHandler::signupRecv()
{
    QByteArray buf;
    buf = this->readLine(20);
    buf = this->readLine(20);
    buf.remove(buf.size()-1, 1);
    qDebug() << "new Id: " << buf;
    this->write("");
    this->disconnectFromHost();

    return buf;
}

void SockHandler::signin(const QByteArray &account, const QByteArray &password)
{
    /*
     *  CMD_SIGNIN
     *  account
     *  password
     *
    */
    QByteArray buf = QByteArray::number(SockHandler::CMD_SIGNIN)+'\n'+account+'\n'+password+'\n';
    this->write(buf.data());
}
bool SockHandler::signinRecv()
{
    QByteArray buf;
    buf = this->readLine(20);
    if(buf ==  "1\n")
        return true;
    return false;
}
void SockHandler::receive()
{
    qDebug() << "receive";
    UsrInfo *info;
    QByteArray cmd;
    QByteArray id;
    cmd = this->readLine(20);
    cmd.remove(cmd.size()-1, 1);

    switch (cmd.toInt()) {
        case CMD_USRINFO :
            cmd = this->readLine(20);
            cmd.remove(cmd.size()-1, 1);
            if((info = this->readUsrInfo()) == nullptr)
                break;
            if(cmd.toInt() == CMD_BRIEF)
            {
                qDebug() << "searched:----"<<info->getUsrName();
                emit this->searchedUsr(info);
            }
            else if(cmd.toInt() == CMD_DETAIL)
            {
                emit this->initUsrList(info);
            }
            break;
        case CMD_NEWFND:
            cmd = this->readLine(20);
            cmd.remove(cmd.size()-1, 1);
        default:
            break;
    }
}
UsrInfo *SockHandler::readUsrInfo()
{
    UsrInfo *info = new UsrInfo;
    QByteArray buf;
    if(this->readLine() != "$\n")
        return nullptr;
    buf = this->readLine();
    buf.remove(buf.size()-1, 1);
    info->setId(buf.toInt());
    buf = this->readLine();
    buf.remove(buf.size()-1, 1);
    info->setUsrName(buf);
    QByteArray msg;
    buf = this->readLine();
    while(buf != "$\n")
    {
        msg.append(buf);
        buf = this->readLine();
    }
    msg.remove(msg.size()-1, 1);
    info->setMsg(msg);
    return info;
}
void SockHandler::getUserInfoBrief(QString uid)
{
    /*
     *  CMD_USRINFO
     *  CMD_BRIEF | CMD_DETAIL
     *  sender_id
     *  request_id
     *
    */
    QByteArray buf;
    buf = QByteArray::number(CMD_USRINFO) + "\n" +
          QByteArray::number(CMD_BRIEF) + "\n" +
          QByteArray::number(this->id) + "\n" +
          uid.toUtf8() + "\n";
    this->write(buf.data());
}

void SockHandler::setId(int id)
{
    this->id = id;
}
void SockHandler::requestNewFriend(int id)
{
    /*
     *  CMD_NEWFND
     *  CMD_REQUEST
     *  sender_id
     *  recver_id
     *  $
     *  myName
     *  other request msg
     *  $
     *
    */
    QByteArray sendbuf;
    sendbuf = QByteArray::number(CMD_NEWFND) + "\n" +
              QByteArray::number(CMD_REQUEST) + "\n" +
              QByteArray::number(this->id) + "\n" +
              QByteArray::number(id) + "\n$\n$\n";
    this->write(sendbuf.data());
}
