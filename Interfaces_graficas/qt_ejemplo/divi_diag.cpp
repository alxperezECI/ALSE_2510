#include "divi_diag.h"
#include "ui_divi_diag.h"

divi_diag::divi_diag(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::divi_diag)
{
    ui->setupUi(this);
}

divi_diag::~divi_diag()
{
    delete ui;
}
