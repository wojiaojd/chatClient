#include "legalitycheck.h"

LegalityCheck::LegalityCheck()
{

}
bool LegalityCheck::validPassword(const QByteArray &psw)
{
    char c;
    if(psw.size() > 20)
        return false;
    for(int i = 0; i < psw.size(); i++)
    {
        c = psw[i];
        if(c == ' ' || c == '\n' || c == '$' || c == '"' || c == '\'' || c == '=')
            return false;
    }
    return true;
}
bool LegalityCheck::validUsername(const QByteArray &usrName)
{
    if(usrName.size() > 20)
        return false;
    return true;
}
bool LegalityCheck::validUserData(const QByteArray &usrName,const QByteArray &fstPwd,const QByteArray &sndPwd)
{
    if(LegalityCheck::validPassword(fstPwd) && LegalityCheck::validUsername(usrName))
    {
        if(sndPwd == nullptr || sndPwd == fstPwd)
            return true;
    }
    return false;
}

