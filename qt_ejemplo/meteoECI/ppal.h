#ifndef PPAL_H
#define PPAL_H

#include <QMainWindow>
#include <sqlite3.h>

QT_BEGIN_NAMESPACE
namespace Ui { class ppal; }
QT_END_NAMESPACE

class ppal : public QMainWindow
{
    Q_OBJECT

public:
    ppal(QWidget *parent = nullptr);
    static int mycall(void *data, int argc, char** argv, char **fields);
    void obtenerDatos(int i);
    ~ppal();

private slots:
    void on_cmd_Ant_clicked();

    void on_cmd_Sig_clicked();

private:
    Ui::ppal *ui;
    int _registro_activo;
};
#endif // PPAL_H
