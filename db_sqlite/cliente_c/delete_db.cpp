#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <sqlite3.h> 


int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   std::stringstream sql;
   const char* data = "Callback function called";

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   int er = 8;
   /* Create merged SQL statement */
   sql << "DELETE FROM usuario WHERE Nombre='Wilfredo';" << std::endl; //id_usuario= " << er << ";" <<std::endl;

   std::cout << sql.str();
   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ) {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Operation done successfully\n");
   }

   sqlite3_close(db);
   return 0;
}
