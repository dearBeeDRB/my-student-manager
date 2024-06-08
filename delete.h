#ifndef DELETE_H
#define DELETE_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class Delete;
}

class Delete : public QDialog
{
    Q_OBJECT

public:
    explicit Delete(QWidget *parent = nullptr);
    ~Delete();

private:
    Ui::Delete *ui;
};

#endif // DELETE_H
