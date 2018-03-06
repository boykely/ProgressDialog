#include "thread.h"
#include <QDebug>
#include "widget.h"

Thread::Thread(Widget *func):Function(func)
{

}

void Thread::run()
{
    LaunchProcess();
    emit ThreadFinished();

}

void Thread::LaunchProcess()
{
    LongProcess1();
    LongProcess2();
    LongProcess3();
    LongProcess4();
    emit UpdateFinal();
}

void Thread::LongProcess1()
{
    int max=500000;
    int i=0;
    while(i<max)
    {
        emit UpdateValue(0,max,i);
        i++;
    }
    emit UpdateIncrementation();
}

void Thread::LongProcess2()
{
    int max=1000000;
    int i=0;
    while(i<max)
    {
        emit UpdateValue(1,max,i);
        i++;
    }
    emit UpdateIncrementation();
}

void Thread::LongProcess3()
{
    int max=700000;
    int i=0;
    while(i<max)
    {
        emit UpdateValue(2,max,i);
        i++;
    }
    emit UpdateIncrementation();
}

void Thread::LongProcess4()
{
    int max=80;
    int i=0;
    while(i<max)
    {
        emit UpdateValue(3,max,i);
        i++;
    }
    emit UpdateIncrementation();
}

