#ifndef EXPENSE_H
#define EXPENSE_H

#include <QDialog>

namespace Ui {
class expense;
}

class expense : public QDialog
{
    Q_OBJECT

public:
    explicit expense(QWidget *parent = 0);
    ~expense();

private:
    Ui::expense *ui;
};

#endif // EXPENSE_H
