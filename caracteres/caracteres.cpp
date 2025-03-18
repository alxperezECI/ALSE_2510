#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <strings.h>
#include <string.h>
//GRUPO: JULIANA TUTA Y ANGEL FABIAN PEDREROS
using namespace std;

int main(int argc, char* argv[]){
  cout << "He recibido " << argc << " argumentos de los cuales: " << endl;
  int count;
  for(int i = 1; i < argc; i++){
    count=0;
    for(int j=0; j < strlen(argv[i]); j++){
        if (isalpha(argv[i][j]))
            count++;
        }
    if (count == strlen(argv[i]))
        cout << "La longitud del caracter es " << strlen(argv[i]) << " y el caracter es " << argv[i] << endl;
    }
    return 0;
}