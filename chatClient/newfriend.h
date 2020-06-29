#ifndef NEWFRIEND_H
#define NEWFRIEND_H

#include <QWidget>
#include <QDateTime>
#include "usrinfo.h"
#include "sockhandler.h"
namespace Ui {
class NewFriend;
}

class NewFriend : public QWidget
{
    Q_OBJECT

public:
    enum NewFriendType{
        SEARCHED,
        REQUESTED
    };
    QDateTime dateTime;
    explicit NewFriend(NewFriendType type, QWidget *parent = nullptr);
    bool eventFilter(QObject *watched, QEvent *event);
    ~NewFriend();
    void setInfo(UsrInfo *info);
signals:
    void requestNewFriend(int id);
    void confirmNewFriend(int id);
public slots:

private:
    Ui::NewFriend *ui;
    UsrInfo *info;
    NewFriendType type;
};

#endif // NEWFRIEND_H
