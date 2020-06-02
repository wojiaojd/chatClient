#ifndef LEGALITYCHECK_H
#define LEGALITYCHECK_H
#include <QByteArray>

class LegalityCheck
{
public:
    LegalityCheck();
    static bool validPassword(const QByteArray &psw);
    static bool validUsername(const QByteArray &usrName);
    static bool validUserData(const QByteArray &usrName,const QByteArray &fstPwd,const QByteArray &sndPwd = nullptr);
};

#endif // LEGALITYCHECK_H
