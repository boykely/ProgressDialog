#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "thread.h"
#include "progressdialog.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void HideDialog();
    void ShowDialog();
private:
    Thread  *mThread;
    ProgressDialog *pd;
};

#endif // WIDGET_H
