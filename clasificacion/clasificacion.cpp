// By: Juan Esteban Cortés y Dickson Trujillo

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char **argv)
{
  cout << "He recibido " << argc << " argumentos de los cuales: " << endl;
  for (int i = 0; i < argc; i++)
  {
    for (int j = 0; j < strlen(argv[i]); j++)
    {
      if (!isdigit(argv[i][j]) && argv[i][j] != '.')
      {
        cout << "El argumento '" << argv[i] << "' no es un número" << endl;
        cout << "    - tiene " << strlen(argv[i]) << " caracteres" << endl;
        break;
      }
    }
  }
  return 0;
}
