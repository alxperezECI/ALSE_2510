#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string.h>
<<<<<<< HEAD
=======

>>>>>>> 21cceaeb1bd009a487e3df767f71973d78f36f92
using namespace std;

int main(int argc, char** argv){
  cout << "He recibido " << argc << " argumentos de los cuales: " << endl;
<<<<<<< HEAD
  for(int i = 0; i < argc; i++){  
    for(int j=0;j<strlen(argv[i]);j++){
      if (isdigit(argv[i][j])){
        cout << "El argumento " << i << " es  un numero" << endl;
        int len=strlen(argv[i-1]);
        

        break;
      }
    }
    cout << "ingreso " << argv[i] << endl;
=======
  for(int i = 0; i < argc; i++){
    for( int j=0; j<strlen(argv[i]); j++){
      if( isdigit(argv[i][j]) ){
        cout << "El argumento " << i << " es un numero" << endl;
        break;
      }
    }
    cout << argv[i] << endl;
>>>>>>> 21cceaeb1bd009a487e3df767f71973d78f36f92
  }
}

/*
#include <iostream>
#include <cstring>  // Para strcat y strlen

void identificar(void* ptr, size_t size) {
    char mensaje[50] = "Es ";  // Buffer para concatenar el mensaje

    if (size == sizeof(int)) {
        strcat(mensaje, "un número entero: ");
        std::cout << mensaje << (int)ptr << std::endl;
    } else if (size == sizeof(double)) {
        strcat(mensaje, "un número decimal: ");
        std::cout << mensaje << (double)ptr << std::endl;
    } else {
        strcat(mensaje, "un texto con ");
        
        char numCaracteres[10];
        sprintf(numCaracteres, "%lu", size);  // Convertir tamaño a cadena
        strcat(mensaje, numCaracteres);
        strcat(mensaje, " caracteres: ");
        strcat(mensaje, (char*)ptr);
        
        std::cout << mensaje << std::endl;
    }
}

int main() {
    int num1 = 4;
    double num2 = 3.15;
    const char* texto = "hola";

    identificar(&num1, sizeof(num1));
    identificar(&num2, sizeof(num2));
    identificar((void*)texto, strlen(texto));

    return 0;
}
*/