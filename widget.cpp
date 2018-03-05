#include "widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    pd=new ProgressDialog(this);
    pd->Segment=3;
    mThread=new Thread(this);
    mThread->start();

    connect(mThread,SIGNAL(started()),this,SLOT(ShowDialog()));
//    connect(mThread,SIGNAL(ThreadFinished()),this,SLOT(HideDialog()));
    connect(mThread,SIGNAL(UpdateValue(int,int,int)),pd,SLOT(UpdateValue(int,int,int)));
}

Widget::~Widget()
{

}

void Widget::HideDialog()
{
    pd->CloseInstance();
}

void Widget::ShowDialog()
{
    pd->NewInstance();
}
