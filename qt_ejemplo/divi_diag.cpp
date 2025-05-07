#include "divi_diag.h"
#include "ui_divi_diag.h"

divi_diag::divi_diag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::divi_diag)
{
    ui->setupUi(this);
}

divi_diag::~divi_diag()
{
    int tipo;
    if(ui->rbt_AB->isChecked()) tipo = 0;
    if(ui->rbt_BA->isChecked()) tipo = 1;
    if(ui->rbt_AE->isChecked()) tipo = 2;
    if(ui->rbt_BE->isChecked()) tipo = 3;
    double esc = ui->spn_Escalar->text().toDouble();

    emit enviar(tipo, esc);
    delete ui;
}

void divi_diag::activar_desactivar(){
    ui->spn_Escalar->setEnabled( false );
    if( ui->rbt_AE->isChecked() || ui->rbt_BE->isChecked() )
        ui->spn_Escalar->setEnabled( true );
}
void divi_diag::on_rbt_AE_clicked()
{
   activar_desactivar();
}


void divi_diag::on_rbt_AB_clicked()
{
  activar_desactivar();
}


void divi_diag::on_rbt_BA_clicked()
{
  activar_desactivar();
}


void divi_diag::on_rbt_BE_clicked()
{
  activar_desactivar();
}

