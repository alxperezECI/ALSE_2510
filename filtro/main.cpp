#include <iostream>
#include <fstream>
#include "Filtro.h"

using namespace std;
#define N 9

int main(int argc, char** argv)
{
    cout << "Probando un filtro de media de tamaño " << N <<"." << endl;

    // El problema es abrir un archivo y guardar los resultados en otro.
    // Primero habro el archivo. Asumo que la ruta será pasado por la consola.

    if(argc < 2){
        cout << "Please provide the path to file that contains the data." << endl;
        cout << "The file with the output will be placed in the same folder." << endl;
        return -1;
    }

    string path = argv[1];
    ifstream archivo;
    archivo.open(path);

    cout << "Se abrirá el archivo: " << path ;

    if(archivo.is_open()){
        // Aquí va el codigo que se va a hacer para leer el archivo
        cout << " ...... ...... archivo abierto" << endl;
        ofstream archSal;
        archSal.open("output.txt");

        cout << "los datos de salida irán al archivo: output.txt";
        if( archSal.is_open() ){
            cout << " ...... ...... archivo abierto" << endl;
            Filtro filtro(N);
            float media, _dato;
            do{
              getline(archivo, path);
              _dato = atof( path.c_str() ) ;
              media = filtro.promedio();
              filtro.agregarDato( _dato );
              _dato -= media;
              archSal << _dato << endl;
            }while(!archivo.eof());
            archSal.close();
        }
    }

    archivo.close();
    return 0;
}
