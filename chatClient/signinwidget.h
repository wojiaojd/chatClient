#ifndef SIGNINWIDGET_H
#define SIGNINWIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include "signinwidget_1.h"
#include "sockhandler.h"


namespace Ui {
class signinWidget;
}

class signinWidget : public QWidget
{
    Q_OBJECT

public:
    explicit signinWidget(QWidget *parent = nullptr);
    ~signinWidget();
    bool eventFilter(QObject *watched, QEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);


private:
    Ui::signinWidget *ui;
    QPoint oldPos;
    signinWidget_1 *signinWgt;
    SockHandler *sockHandler;
signals:

public slots:
    void showWidget(const QPoint&);
};

#endif // SIGNINWIDGET_H
