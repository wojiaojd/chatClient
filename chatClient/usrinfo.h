#ifndef USRINFO_H
#define USRINFO_H

#include <QByteArray>

class UsrInfo
{
public:
    UsrInfo();
    void setId(int id);
    int getId();
    void setUsrName(QByteArray usrName);
    QByteArray getUsrName();
    void setMsg(QByteArray msg);
    QByteArray getMsg();
private:
    int id;
    QByteArray usrName;
    QByteArray msg;

};

#endif // USRINFO_H
