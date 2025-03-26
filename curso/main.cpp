#include <iostream>
#include "estudiante.h"
#include "persona.h"
#include <vector>
#include <fstream>
#include <string>   
using namespace std;

int main(int argc, char const *argv[])
{
    if(argc != 2)
    {
        cout << "Uso: " << argv[0] << " <archivo de datos>" << endl;
        return 1;
    }
    vector<Estudiante> estudiantes;
    double promedio_curso = 0.0;

    // Se leeerá de un archivo en donde en cada línea se tiene el nombre, apellido, documento de identidad y código del estudiante
    // Se leerán las notas de cada estudiante y se calculará el promedio del curso  
    ifstream archivo(argv[1]);
    string nombre, apellido;
    int docid, codigo;
    double nota[5];
    while(archivo >> codigo >> nombre >> apellido >> docid  >> nota[0] >> nota[1] >> nota[2] >> nota[3] >> nota[4])
    {
      // Poner aquí el código para crear un objeto de la clase Estudiante y agregarlo al vector estudiantes
    }
    archivo.close();

    cout << "No. de estudiantes cargados: " << estudiantes.size() << endl;
    
    vector<Estudiante>::iterator it;
    for(it = estudiantes.begin(); it != estudiantes.end(); it++)
    {
        promedio_curso += it->Promedio();
    }
    cout << "Promedio del curso: " << promedio_curso / estudiantes.size() << endl;  

    return 0;
}