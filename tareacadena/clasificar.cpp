#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(int argc, char** argv){
  cout << "He recibido " << argc - 1 << " argumentos de los cuales: " << endl;
  for(int i = 1; i < argc; i++){
    bool esNumero = true;
    for (int j = 0; j < strlen(argv[i]); j++){
      if (!isdigit(argv[i][j])){
        esNumero = false;
        break;
      }
    }
    if (esNumero){
      cout << "El argumento " << i << " es un número" << endl;
    }
    else{
      cout << "El argumento " << i << " es una cadena de caracteres y tiene " << strlen(argv[i]) << " caracteres" << endl;
    }
    cout << argv[i] << endl;
  }
  return 0;
}

