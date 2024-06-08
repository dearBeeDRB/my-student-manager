#ifndef DELETES_H
#define DELETES_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class DeleteS;
}

class DeleteS : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteS(QWidget *parent = nullptr);
    ~DeleteS();

private slots:
    void on_deleteStu_clicked();

private:
    Ui::DeleteS *ui;
};

#endif // DELETES_H
