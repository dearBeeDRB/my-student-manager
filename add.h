#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include "databaseheader.h"
// #include "mainwindow.h"

namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    ~Add();

private slots:
    void on_btnSave_clicked();

private:
    Ui::Add *ui;
};

#endif // ADD_H
