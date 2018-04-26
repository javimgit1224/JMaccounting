#include "jmaccounting.h"
#include "ui_jmaccounting.h"

JMaccounting::JMaccounting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::JMaccounting)
{
    ui->setupUi(this);
}

JMaccounting::~JMaccounting()
{
    delete ui;
}

void JMaccounting::on_pushButton_clicked()
{
    ex = new expense(this);
    ex->show();

}
