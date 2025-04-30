#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <string>

using namespace std;


int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   string sql;

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "INSERT INTO sensor ( Temperatura, Humedad, Fecha )" \
         "VALUES (38.3, 78.8, '2025-04-24 13:57:00');" \
         "INSERT INTO sensor ( Temperatura, Humedad, Fecha )" \
         "VALUES (40.1, 68.7, '2025-04-24 13:59:00');"
         "INSERT INTO sensor ( Temperatura, Humedad, Fecha )" \
         "VALUES (42.8, 82.2, '2025-04-24 14:01:00');"
         "INSERT INTO sensor ( Temperatura, Humedad, Fecha )" \
         "VALUES (45.6, 85.12, '2025-04-24 14:03:00');";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Records created successfully\n");
   }
   sqlite3_close(db);
   return 0;
}
