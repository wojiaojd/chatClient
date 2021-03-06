#ifndef SIGNINWIDGET_1_H
#define SIGNINWIDGET_1_H

#include <QWidget>
#include "sockhandler.h"
#include "legalitycheck.h"

namespace Ui {
class signinWidget_1;
}

class signinWidget_1 : public QWidget
{
    Q_OBJECT

public:
    explicit signinWidget_1(QWidget *parent = nullptr);
    ~signinWidget_1();
    bool eventFilter(QObject *watched, QEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    Ui::signinWidget_1 *ui;
    QPoint oldMousePos;
    QString styleFormat;
    SockHandler *sockHandler;
    int newId;
    bool isSignup;
signals:
    void backToSigninWidget(const QPoint&);
public slots:
    void signup();
    void handleSignupResult(int newId);
    void signin();
    void handleSigninResult(int cmd_1);
};

#endif // SIGNINWIDGET_1_H
