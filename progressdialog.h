#ifndef PROGRESSDIALOG_H
#define PROGRESSDIALOG_H

#include <QProgressDialog>

class ProgressDialog:public QProgressDialog
{
    Q_OBJECT
public:
    ProgressDialog(QWidget *parent=nullptr);
    void NewInstance();
    void CloseInstance();
    int Segment;
    double Value;
public slots:
    void UpdateValue(const int&,const int &,const int&);
};

#endif // PROGRESSDIALOG_H
