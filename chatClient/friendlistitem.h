#ifndef FRIENDLISTITEM_H
#define FRIENDLISTITEM_H

#include <QWidget>

namespace Ui {
class FriendListItem;
}

class FriendListItem : public QWidget
{
    Q_OBJECT

public:
    explicit FriendListItem(QWidget *parent = nullptr);
    ~FriendListItem();
    void setText(const QString &userName);
    void setPixmap(const QPixmap &headIcon);

private:
    Ui::FriendListItem *ui;
};

#endif // FRIENDLISTITEM_H
