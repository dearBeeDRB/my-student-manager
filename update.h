#ifndef UPDATE_H
#define UPDATE_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class Update;
}

class Update : public QDialog
{
    Q_OBJECT

public:
    explicit Update(QWidget *parent = nullptr);
    ~Update();

private slots:
    void on_updateBtn_clicked();

private:
    Ui::Update *ui;
};

#endif // UPDATE_H
