#ifndef USRINFO_H
#define USRINFO_H

#include <QByteArray>

class UsrInfo
{
public:
    UsrInfo();
    void setId(int id){this->id = id;}
    void setUsrName(const QByteArray usrName){this->usrName = usrName;}
//    void setMsg(const QByteArray msg){this->msg = msg;}
    int getId(){return this->id;}
    QByteArray & getUsrName(){return this->usrName;}
//    QByteArray & getMsg(){return this->msg;}
private:
    int id;
    QByteArray usrName;
//    QByteArray msg;

};

#endif // USRINFO_H
