#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv){
  cout << "He recibido " << argc << " argumentos de los cuales: " << endl;
  for(int i = 0; i < argc; i++){
    for( int j=0; j<strlen(argv[i]); j++){
      if( isdigit(argv[i][j]) ){
        cout << "El argumento " << i << " es un numero" << endl;
        break;
      }
    }
    cout << argv[i] << endl;
  }
  return 0;
}

