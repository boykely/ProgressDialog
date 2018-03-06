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
    void LongProcess4();
protected:
    void run() override;
private:
    Widget *Function;
signals:
    void ThreadFinished();
    void UpdateValue(const int&,const int &,const int &);
    void UpdateIncrementation();
    void UpdateFinal();
};

#endif // THREAD_H
