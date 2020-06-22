#include "sockpackage.h"

SockPackage::SockPackage()
{
    this->setCmd0(404);
    this->setCmd1(404);
    this->setSender(0);
    this->setRecver(0);
    this->setOtherMsg("");
}
const char * SockPackage::toRowMessage()
{

    this->rowMsg = QByteArray::number(this->getCmd0()) + "\n" +
             QByteArray::number(this->getCmd1()) + "\n" +
             QByteArray::number(this->getSender()) + "\n" +
             QByteArray::number(this->getrecver()) + "\n$\n" +
             getOtherMsg() + "\n$\n";
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
