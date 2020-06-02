#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <QPushButton>
#include <QEnterEvent>

class myButton:public QPushButton
{
    Q_OBJECT
public:
    explicit myButton(QWidget *parent = nullptr);
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);

signals:

public slots:

};

#endif // MYBUTTON_H
