#include "sockpackage.h"

SockPackage::SockPackage()
{
    this->setCmd0(404);
    this->setCmd1(404);
    this->setSender(0);
    this->setRecver(0);
    this->setOtherMsg("");
}
//otherMsg不自动填充最后的回车
const char * SockPackage::toRowMessage()
{

    this->rowMsg = QByteArray::number(this->getCmd0()) + "\n" +
             QByteArray::number(this->getCmd1()) + "\n" +
             QByteArray::number(this->getSender()) + "\n" +
             QByteArray::number(this->getrecver()) + "\n$\n";
    if(getOtherMsg() == "")
    {
        this->rowMsg += "$\n";
    }
    else
    {
        this->rowMsg += getOtherMsg() +"$\n";
    }
    return this->rowMsg.data();
}
//请求用户信息专用，用完即销
UsrInfo * SockPackage::extractUsrInfo()
{
    if(this->getrecver() == 0)
        return nullptr;
    UsrInfo *info = new UsrInfo;
    info->setId(this->getrecver());
    QByteArray usrName = this->getOtherMsg();
    usrName.remove(usrName.size()-1, 1);
    info->setUsrName(usrName);
    return info;
}
//清楚行末回车并返回
QByteArray & SockPackage::getOtherMsg()
{
//    int tail = this->otherMsg.size()-1;
//    while(this->otherMsg[tail] == '\n')
//        tail--;
//    this->otherMsg.resize(tail+1);
    return this->otherMsg;
}
