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
    int Incrementation;
    double Value;
public slots:
    void UpdateValue(const int&,const int &,const int&);
    void UpdateIncrementation();
    void UpdateFinal();
};

#endif // PROGRESSDIALOG_H
