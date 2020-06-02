#include "mybutton.h"
#include <QDebug>

myButton::myButton(QWidget *parent): QPushButton(parent)
{

}
void myButton::leaveEvent(QEvent *e)
{

}
void myButton::enterEvent(QEvent *e)
{
    qDebug() << "鼠标进入了";
}
