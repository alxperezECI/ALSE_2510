#ifndef VENTANA_PP_H
#define VENTANA_PP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ventana_pp; }
QT_END_NAMESPACE

class ventana_pp : public QMainWindow
{
    Q_OBJECT

public:
    ventana_pp(QWidget *parent = nullptr);
    ~ventana_pp();

private slots:
    void on_cmd_Calcular_clicked();
    void on_cb_Operacion_currentIndexChanged(int index);
    void recibir(int tipo, double esc);

private:
    Ui::ventana_pp *ui;
    int _tipo;
    double _escalar;
};
#endif // VENTANA_PP_H
