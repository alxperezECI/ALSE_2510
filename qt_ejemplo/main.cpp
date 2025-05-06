#include "ventana_pp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ventana_pp w;
    w.show();
    return a.exec();
}
