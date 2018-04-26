#ifndef JMACCOUNTING_H
#define JMACCOUNTING_H

#include <QMainWindow>
#include <expense.h>

namespace Ui {
class JMaccounting;
}

class JMaccounting : public QMainWindow
{
    Q_OBJECT

public:
    explicit JMaccounting(QWidget *parent = 0);
    ~JMaccounting();

private slots:
    void on_pushButton_clicked();

private:
    Ui::JMaccounting *ui;
    expense *ex;

};

#endif // JMACCOUNTING_H
