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
    qDebug()<<"连接服务器"<<this->hostAddress->toString().toUtf8().data();
    this->connectToHost(*hostAddress, 9998);
}
void SockHandler::signup(const QByteArray &userName, const QByteArray &password)
{
    QByteArray buf = QByteArray::number(SockHandler::CMD_SIGNUP)+'\n'+userName+'\n'+password+'\n';
    this->write(buf.data());
}

QByteArray SockHandler::signupRecv()
{
    QByteArray buf;
    buf = this->readLine(20);
    qDebug() << "command:" << buf;
    buf = this->readLine(20);
    buf.remove(buf.size()-1, 1);
    qDebug() << "new Id: " << buf;
    this->write("");
    this->disconnectFromHost();

    return buf;
}

void SockHandler::signin(const QByteArray &account, const QByteArray &password)
{
    QByteArray buf = QByteArray::number(SockHandler::CMD_SIGNIN)+'\n'+account+'\n'+password+'\n';
    this->write(buf.data());
}
bool SockHandler::signinRecv()
{
    QByteArray buf;
    buf = this->readLine(20);
    qDebug() << "signin reply:" << buf;
    //do something if recv usrData
    if(buf ==  "1\n")
        return true;
    return false;
}
