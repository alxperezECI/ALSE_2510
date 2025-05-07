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

void ventana_pp::on_Calcular_clicked()
{
    Eigen::MatrixX2d A(2,2), B(2,2), R(2,2);
    A(0,0) = ui -> txt_A11 -> text().toDouble();
    A(0,1) = ui -> txt_A12 -> text().toDouble();
    A(1,0) = ui -> txt_A21 -> text().toDouble();
    A(1,1) = ui -> txt_A22 -> text().toDouble();

    B(0,0) = ui -> txt_B11 -> text().toDouble();
    B(0,1) = ui -> txt_B12 -> text().toDouble();
    B(1,0) = ui -> txt_B21 -> text().toDouble();
    B(1,1) = ui -> txt_B22 -> text().toDouble();

    switch(ui -> Operacion ->currentIndex()){
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
        break;
    }

    ui->txt_R11->setText(QString().number(R(0,0)));
    ui->txt_R12->setText(QString().number(R(0,1)));
    ui->txt_R21->setText(QString().number(R(1,0)));
    ui->txt_R22->setText(QString().number(R(1,1)));
}

