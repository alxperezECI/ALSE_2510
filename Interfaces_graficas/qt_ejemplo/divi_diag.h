#ifndef DIVI_DIAG_H
#define DIVI_DIAG_H

#include <QDialog>

namespace Ui {
class divi_diag;
}

class divi_diag : public QDialog
{
    Q_OBJECT

public:
    explicit divi_diag(QWidget *parent = nullptr);
    ~divi_diag();

private:
    Ui::divi_diag *ui;
};

#endif // DIVI_DIAG_H
