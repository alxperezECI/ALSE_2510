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

private:
    Ui::ventana_pp *ui;
};
#endif // VENTANA_PP_H
