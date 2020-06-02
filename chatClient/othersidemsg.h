#ifndef OTHERSIDEMSG_H
#define OTHERSIDEMSG_H

#include <QWidget>
#include <QHBoxLayout>

namespace Ui {
class otherSideMsg;
}

class otherSideMsg : public QWidget
{
    Q_OBJECT

public:
    explicit otherSideMsg(QWidget *parent = nullptr);
    ~otherSideMsg();
    void setText(const QString &msg);
    void setUserName(const QString &userName);

private:
    Ui::otherSideMsg *ui;
    QHBoxLayout *contentLayout;
};

#endif // OTHERSIDEMSG_H
