#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   string sqlstr;

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc != 0 ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(1);
   } else {
      fprintf(stdout, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sqlstr = "CREATE TABLE IF NOT EXISTS usuario (id_usuario INTEGER PRIMARY KEY NOT NULL," \
      "Nombre TEXT NOT NULL, Apellido TEXT NOT NULL," \
      "user_name TEXT NOT NULL, passwd TEXT NOT NULL);";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
      return (2);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }

   /* Create SQL statement */
   sqlstr = "CREATE TABLE sensor (id_medida INTEGER PRIMARY KEY NOT NULL," \
      "Temperatura REAL NOT NULL, Humedad REAL NOT NULL," \
      "Fecha TEXT NOT NULL );";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
      return (3);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }

   sqlite3_close(db);
   return 0;
}
