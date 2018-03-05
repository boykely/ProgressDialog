#ifndef THREAD_H
#define THREAD_H

#include <QThread>

class Widget;

class Thread: public QThread
{
    Q_OBJECT
public:
    Thread(Widget *func);
    void LaunchProcess();
    void LongProcess1();
    void LongProcess2();
    void LongProcess3();
protected:
    void run() override;
private:
    Widget *Function;
signals:
    void ThreadFinished();
    void UpdateValue(const int&,const int &,const int &);
};

#endif // THREAD_H
