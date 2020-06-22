#ifndef NEWFRIEND_H
#define NEWFRIEND_H

#include <QWidget>
#include "usrinfo.h"
#include "sockhandler.h"
namespace Ui {
class NewFriend;
}

class NewFriend : public QWidget
{
    Q_OBJECT

public:
    explicit NewFriend(QWidget *parent = nullptr);
    bool eventFilter(QObject *watched, QEvent *event);
    ~NewFriend();
    void setInfo(UsrInfo *info);
signals:
    void requestNewFriend(int id);
public slots:

private:
    Ui::NewFriend *ui;
    UsrInfo *info;
};

#endif // NEWFRIEND_H
