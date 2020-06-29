#ifndef FRIENDLISTITEM_H
#define FRIENDLISTITEM_H

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class FriendListItem;
}

class FriendListItem : public QWidget
{
    Q_OBJECT

public:
    explicit FriendListItem(int id = 0, QWidget *parent = nullptr);
    ~FriendListItem();
    void setText(const QString &userName);
    void setPixmap(const QPixmap &headIcon);
    bool eventFilter(QObject *watched, QEvent *event);
    void setId(const int id);
    int getId();
signals:
    void showUsrInfo(int id);
private:
    Ui::FriendListItem *ui;
    int id;
};

#endif // FRIENDLISTITEM_H
