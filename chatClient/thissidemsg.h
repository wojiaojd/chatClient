#ifndef THISSIDEMSG_H
#define THISSIDEMSG_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>

namespace Ui {
class ThisSideMsg;
}

class ThisSideMsg : public QWidget
{
    Q_OBJECT

public:
    explicit ThisSideMsg(QWidget *parent = nullptr);
    ~ThisSideMsg();
    void setText(const QString &msg);
    void setUserName(const QString &userName);
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::ThisSideMsg *ui;
    QHBoxLayout *contentLayout;
    QLabel *textMsg;
};

#endif // THISSIDEMSG_H
