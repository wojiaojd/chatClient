#ifndef THREADHANDLER_H
#define THREADHANDLER_H

#include <QVector>
#include <QThread>

class ThreadHandler : public QObject
{
    Q_OBJECT
public:
    ThreadHandler();
    QThread *newObjThread(QObject *worker);
signals:

public slots:
    //清理finished 线程
    void cleanUp();
private:
    QVector<QThread*> threads;
};

#endif // THREADHANDLER_H
