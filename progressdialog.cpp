#include "progressdialog.h"
#include <QDebug>

ProgressDialog::ProgressDialog(QWidget *parent):QProgressDialog(parent)
{
}

void ProgressDialog::NewInstance()
{
    setWindowTitle("Progress dialog");
    setWindowModality(Qt::WindowModal);
    setRange(0,100);
    setValue(0);
    Value=value();
    setAutoClose(false);
    setAutoReset(false);
    show();
}

void ProgressDialog::CloseInstance()
{
    close();
}

void ProgressDialog::UpdateValue(const int &_seg,const int & _max,const int &_value)
{
//    setValue(_value);
    double ratio=100/Segment;
    double step=ratio/_max;
    Value+=step;
//    qDebug()<<"actual="<<Value<<endl;
    setValue(Value);
}
