#include "ventana_pp.h"
#include "divi_diag.h"
#include <eigen3/Eigen/Dense>
#include "./ui_ventana_pp.h"

ventana_pp::ventana_pp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ventana_pp)
{
    ui->setupUi(this);
    _escalar = 0.0;
    _tipo = 0;
}

ventana_pp::~ventana_pp()
{
    delete ui;
}


void ventana_pp::on_cmd_Calcular_clicked()
{
    Eigen::MatrixX2d A(2,2),B(2,2),R(2,2);

    A(0,0)= ui->txt_A11->text().toDouble();
    A(0,1)= ui->txt_A12->text().toDouble();
    A(1,0)= ui->txt_A21->text().toDouble();
    A(1,1)= ui->txt_A22->text().toDouble();

    B(0,0)= ui->txt_B11->text().toDouble();
    B(0,1)= ui->txt_B12->text().toDouble();
    B(1,0)= ui->txt_B21->text().toDouble();
    B(1,1)= ui->txt_B22->text().toDouble();

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
        switch( _tipo ){
        case 0:
            // A / B
            R = A * B.inverse();
            break;
        case 1: // B/A
            R = A.inverse() * B;
            break;
        case 2:
            R = A / _escalar;
            break;
        case 3:
            R = B / _escalar;

        }
    }

    ui->txt_R11->setText( QString().number(R(0,0)) );
    ui->txt_R12->setText( QString().number(R(0,1)) );
    ui->txt_R21->setText( QString().number(R(1,0)) );
    ui->txt_R22->setText( QString().number(R(1,1)) );
}


void ventana_pp::on_cb_Operacion_currentIndexChanged(int index)
{
    if(index == 3){
        divi_diag dv( this );
        connect(&dv,&divi_diag::enviar,this, &ventana_pp::recibir);
        dv.show();
        dv.exec();
    }
}

void ventana_pp::recibir(int tipo, double esc)
{
  _tipo = tipo;
  _escalar = esc;
}

