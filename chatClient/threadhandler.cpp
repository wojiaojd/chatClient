#include "threadhandler.h"

ThreadHandler::ThreadHandler()
{

}

QThread *ThreadHandler::newObjThread(QObject *worker)
{
    QThread *newThread = new QThread;
    worker->moveToThread(newThread);
    this->threads.push_back(newThread);
    return newThread;
}
//可能有同步问题
void ThreadHandler::cleanUp()
{
    for(QThread *thread : this->threads)
    {
        if(thread->isFinished())
        {
            thread->deleteLater();
            this->threads.removeOne(thread);
        }
    }
}
