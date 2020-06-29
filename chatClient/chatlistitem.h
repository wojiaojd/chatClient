#ifndef CHATLISTITEM_H
#define CHATLISTITEM_H

#include <QWidget>
#include <QMouseEvent>
#include <QScrollArea>
#include <QVBoxLayout>

namespace Ui {
class ChatListItem;
}

class ChatListItem : public QWidget
{
    Q_OBJECT

public:
    explicit ChatListItem(QWidget *parent = nullptr);
    ~ChatListItem();
    bool eventFilter(QObject *watched, QEvent *event);
    int getId();
    void msgFormResize();
    void setUsrName(const QString &usrName);
    void setId(int id){this->id = id;}

    QScrollArea *scroMsgList;
    QVBoxLayout *msgListLayout;
    QWidget *wgtMsgList;

private:
    Ui::ChatListItem *ui;
    int id;
};

#endif // CHATLISTITEM_H
