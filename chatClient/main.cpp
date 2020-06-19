#include "signinwidget.h"
#include "signinwidget_1.h"
#include "mainwidget.h"
#include "chatlistitem.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    signinWidget w;
//    w.show();
    signinWidget_1 w;
    w.show();
//    mainWidget m;
//    m.show();

    return a.exec();
}
