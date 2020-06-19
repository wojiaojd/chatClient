#ifndef OTHERSIDEMSG_H
#define OTHERSIDEMSG_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>

namespace Ui {
class otherSideMsg;
}

class OtherSideMsg : public QWidget
{
    Q_OBJECT

public:
    explicit OtherSideMsg(QWidget *parent = nullptr);
    ~OtherSideMsg();
    void setText(const QString &msg);
    void setUserName(const QString &userName);
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::otherSideMsg *ui;
    QHBoxLayout *contentLayout;
    QLabel *textMsg;
};

#endif // OTHERSIDEMSG_H
