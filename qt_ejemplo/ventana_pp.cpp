#include "ventana_pp.h"
#include <eigen3/Eigen/Dense>
#include "./ui_ventana_pp.h"

ventana_pp::ventana_pp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ventana_pp)
{
    ui->setupUi(this);
}

ventana_pp::~ventana_pp()
{
    delete ui;
}


void ventana_pp::on_cmd_Calcular_clicked()
{
    Eigen::MatrixX2d A(2,2),B(2,2),R(2,2);
    double a11 = ui->txt_A11->text().toDouble();

    A(0,0)= a11;

    switch(ui->cb_Operacion->currentIndex()){
    case 0:
        R = A + B;
        break;
    case 1:
        R = A - B;
        break;
    case 2:
        R = A * B;
        break;
    case 3:
        R = A.inverse() * B;
    }

    ui->txt_A11->setText( ui->txt_B11->text() );

}

