#ifndef FIND_H
#define FIND_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class Find;
}

class Find : public QDialog
{
    Q_OBJECT

public:
    explicit Find(QWidget *parent = nullptr);
    ~Find();

private slots:
    void on_btnSearch_clicked();

private:
    Ui::Find *ui;
    QSqlQueryModel *model;
};

#endif // FIND_H
