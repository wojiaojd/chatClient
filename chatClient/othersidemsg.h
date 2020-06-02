#ifndef OTHERSIDEMSG_H
#define OTHERSIDEMSG_H

#include <QWidget>

namespace Ui {
class otherSideMsg;
}

class otherSideMsg : public QWidget
{
    Q_OBJECT

public:
    explicit otherSideMsg(QWidget *parent = nullptr);
    ~otherSideMsg();

private:
    Ui::otherSideMsg *ui;
};

#endif // OTHERSIDEMSG_H
