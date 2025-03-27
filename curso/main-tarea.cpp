#include <iostream>
#include <list>
#include "estudiante-tarea.h"
#include <string>
#include <fstream>
// GRUPO: JULIANA TUTA Y ANGEL PEDREROS

using namespace std;

int main(int argc, char const *argv[]) {
    /*
    Estudiante est1("Juliana", "Tuta", 123456, 1);
    Estudiante est2("Angel", "Pedreros", 654321, 2);
    est1.promedio();
    est1.agregarnota(4.5);
    est1.agregarnota(3.5);
    est1.agregarnota(5.0);
    est2.agregarnota(4.0);
    est2.agregarnota(3.0);
    est2.agregarnota(2.5);
    cout << "Las notas de " << est1.Nombre() << " son:" << endl;
    for(int i =0; i < est1.cantnotas(); i++)
        	cout << (i + 1) << ") " << est1.getNota(1) << endl;
    cout << est1 << endl;
    cout << est2 << endl;
    //leer archivo
    */
    if(argc != 2)
    {
        cout << "Uso: " << argv[0] << " <archivo de datos>" << endl;
        return 1;
    }
    list<Estudiante> estudiantes;
    double promedio_curso = 0.0;

    // Se leeerá de un archivo en donde en cada línea se tiene el nombre, apellido, documento de identidad y código del estudiante
    // Se leerán las notas de cada estudiante y se calculará el promedio del curso  
    ifstream archivo(argv[1]);
    string nombre, apellido;
    int docid, codigo, i = 0;
    double nota[5];
    while(archivo >> codigo >> nombre >> apellido >> docid  >> nota[0] >> nota[1] >> nota[2] >> nota[3] >> nota[4])
    {
      estudiantes.push_back(Estudiante(nombre, apellido, docid, codigo));
      auto it = prev(estudiantes.end());
      for(int j=0; j < 5; j++)
            it->agregarnota(nota[j]);
       it->promedio();
    }
    archivo.close();

    cout << "No. de estudiantes cargados: " << estudiantes.size() << endl;
    
    list<Estudiante>::iterator it;
   
    cout << "Promedio del curso: " << promedio_curso / estudiantes.size() << endl;  
    estudiantes.sort();

    cout << "Estudiante con menor promedio: " << estudiantes.front() << endl;  
    cout << "Estudiante con myor promedio: " << estudiantes.back() << endl;

    for(it = estudiantes.begin(); it != estudiantes.end(); ++it){
        cout << *it << endl;
    }
    return 0;
}

