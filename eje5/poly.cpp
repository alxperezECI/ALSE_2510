#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv){
  cout << "He recibido " << argc << " argumentos de los cuales: " << endl;
  //separar cadenas 
  //obtenar coeficientes 
  int tamaño;
  double vec1[tamaño]={0.0};
  double vec2[tamaño]={0.0};
  for(int i = 0; i < argc; i++){  
    cout << argv[i] << endl;
    for(int j=0;i<argc;i++){
      
      if (isdigit(argv[i][j])){
        cout << "El argumento" << i << "es  un numero" << endl;
        break;
      };
    };
  }
  return 0;
}