#ifndef SOCKPACKAGE_H
#define SOCKPACKAGE_H
#include <QByteArray>
#include "usrinfo.h"

class SockPackage
{
public:
    SockPackage();
    void setCmd0(const QByteArray &cmd_0){this->cmd_0 = cmd_0.toInt();}
    void setCmd1(const QByteArray &cmd_1){this->cmd_1 = cmd_1.toInt();}
    void setSender(const QByteArray &sender){this->sender = sender.toInt();}
    void setRecver(const QByteArray &recver){this->recver = recver.toInt();}
    void setCmd0(const int &cmd_0){this->cmd_0 = cmd_0;}
    void setCmd1(const int &cmd_1){this->cmd_1 = cmd_1;}
    void setSender(const int &sender){this->sender = sender;}
    void setRecver(const int &recver){this->recver = recver;}
    void appendOtherMsg(const QByteArray &otherMsg){this->otherMsg += otherMsg;}
    void setOtherMsg(const QByteArray &otherMsg){this->otherMsg = otherMsg;}
    void clearOtherMsg(){this->otherMsg = "";}
    int getCmd0(){return this->cmd_0;}
    int getCmd1(){return this->cmd_1;}
    int getSender(){return this->sender;}
    int getrecver(){return this->recver;}
    QByteArray & getOtherMsg();
    const char * toRowMessage();
    //请求获取用户数据时使用
    UsrInfo * extractUsrInfo();
private:
    int cmd_0;
    int cmd_1;
    int sender;
    int recver;
    QByteArray otherMsg;
    QByteArray rowMsg;
};

#endif // SOCKPACKAGE_H
