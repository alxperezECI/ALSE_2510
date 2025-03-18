#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main(int argc, char** argv){
  cout << "He recibido " << argc << " argumentos de los cuales: " << endl;
  //separar cadenas 
  //obtenar coeficientes 
  int tamaño=0;
  vector<double> vec1(tamaño);
  vector<double> vec2(tamaño);
  for(int i = 0; i < argc; i++){  
    cout << argv[i] << endl;
    for(int j=0;j<argc;j++){
      if(argv[i][j]=='x'){
        if(argv[i][j+1]=='^'){
          cout << "El argumento " << argv[i][j] << " tiene un expoente" << endl;

        if (isdigit(argv[i][j+2]) && isdigit(argv[i][j-1])){
            for (int y = j+2;  argv[i][y] != "+"; y++)
            {
              vec1.push_back(int atoi(argv[i][y]));
              cout << vec1[0] << endl;
              vec1.push_back(int atoi(argv[i][y]));
              cout << vec1[1] << endl;
            }

         };
        };
      };
/*
        if (isdigit(argv[i][j+2])){
          cout << "El argumento" << argv[i][j] << "es  un numero" << endl;
          };
        };
*/
//     if (isdigit(argv[i][j])){
//        cout << "El argumento" << argv[i][j] << "es  un numero" << endl;
//      };
    };
  }
  return 0;
}