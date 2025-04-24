#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <string>
#include <iostream>

using namespace std;

static int callback(void *data, int argc, char **argv, char **azColName){
   int i;
   std::cout << (*(double*)data) << std::endl;

   for(i = 0; i<argc; i++){
      std::cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL")  << std::endl;
   }

   std::cout << std::endl;
   double *local = (double*)data;
   *local += 3.141592;
   return 0;
}

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   string sql;
   const char* data = "He llamado la función Callback";
   double f = 89.98;

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "SELECT * FROM usuario;";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql.c_str(), callback, (void*)&f, &zErrMsg);

   if( rc != SQLITE_OK ) {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Operation done successfully\n");
   }
   cout << f << endl;
   sqlite3_close(db);
   return 0;
}
