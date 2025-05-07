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

private slots:
    void on_rbt_AE_clicked();
    void on_rbt_AB_clicked();
    void on_rbt_BA_clicked();
    void on_rbt_BE_clicked();
signals:
    void enviar(int tipo, double esc);

private:
    Ui::divi_diag *ui;
    void activar_desactivar();
};

#endif // DIVI_DIAG_H
