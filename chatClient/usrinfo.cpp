#include "usrinfo.h"

UsrInfo::UsrInfo()
{

}
void UsrInfo::setId(int id)
{
    this->id = id;
}
int UsrInfo::getId()
{
    return this->id;
}
void UsrInfo::setUsrName(QByteArray usrName)
{
    this->usrName = usrName;
}
QByteArray UsrInfo::getUsrName()
{
    return this->usrName;
}
void UsrInfo::setMsg(QByteArray msg)
{
    this->msg = msg;
}
QByteArray UsrInfo::getMsg()
{
    return this->msg;
}
