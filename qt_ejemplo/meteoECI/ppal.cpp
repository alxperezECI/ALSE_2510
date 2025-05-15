#include "ppal.h"
#include <sqlite3.h>
#include <sstream>
#include "./ui_ppal.h"

ppal::ppal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ppal)
{
    ui->setupUi(this);
    _registro_activo = 1;
    obtenerDatos(_registro_activo);

}

int ppal::mycall(void *data, int argc, char **argv, char **fields)
{
    Ui::ppal *ui = (Ui::ppal*)data;
    ui->txt_Alt->setText(QString( argv[2] ));
    return 0;
}

void ppal::obtenerDatos(int i)
{
  sqlite3* db;
  std::stringstream sql;
  int rc;
  char* errmsg;

  /* Open database */
  rc = sqlite3_open("meteo.als", &db);

  if( rc ) {
     return;
  }

  /* Create SQL statement */
  sql << "SELECT * FROM TBL_DATOS WHERE id_muestra= " << i <<";";

  /* Execute SQL statement */
  rc = sqlite3_exec(db, sql.str().c_str(), ppal::mycall, (void*)ui, &errmsg);

  if( rc != SQLITE_OK ) {
     return;
  }

  sqlite3_close(db);
}

ppal::~ppal()
{
    delete ui;
}


void ppal::on_cmd_Ant_clicked()
{
    _registro_activo = _registro_activo > 0 ? --_registro_activo : 1;
    obtenerDatos( _registro_activo );
}


void ppal::on_cmd_Sig_clicked()
{
    ++_registro_activo;
    obtenerDatos( _registro_activo );
}

