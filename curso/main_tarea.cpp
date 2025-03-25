#include <iostream>
#include "estudiante_tarea.h"
#include "persona_tarea.h"
#include <list>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        cout << "Uso: " << argv[0] << " <archivo de datos>" << endl;
        return 1;
    }
    list<Estudiante> estudiantes;
    vector<float> promedios;
    float promedio_curso = 0.0;

    // Se leeerá de un archivo en donde en cada línea se tiene el nombre, apellido, documento de identidad y código del estudiante
    // Se leerán las notas de cada estudiante y se calculará el promedio del curso
    ifstream archivo(argv[1]);
    string nombre, apellido;
    int docid, codigo;
    double nota[5];
    while (archivo >> codigo >> nombre >> apellido >> docid >> nota[0] >> nota[1] >> nota[2] >> nota[3] >> nota[4])
    {
        // Poner aquí el código para crear un objeto de la clase Estudiante y agregarlo al vector estudiantes
        Estudiante est(nombre, apellido, docid, codigo);

        for (int i = 0; i < 5; i++)
        {
            est.agregar_nota(nota[i]);
        }

        estudiantes.push_back(est);
        promedios.push_back(est.promedio());
        cout << est << endl;
    }
    archivo.close();

    cout << "No. de estudiantes cargados: " << estudiantes.size() << endl;

    list<Estudiante>::iterator it;

    for (it = estudiantes.begin(); it != estudiantes.end(); it++)
    {
        promedio_curso += it->promedio();
    }

    cout << "Promedio del curso: " << promedio_curso / estudiantes.size() << endl;

    promedio_curso = promedios[0];

    for (int i = 1; i < promedios.size(); i++)
    {
        promedio_curso = (promedio_curso < promedios[i]) ? promedios[i] : promedio_curso;
    }

    cout << "El mayor promedio del curso es: " << promedio_curso << endl;

    estudiantes.sort();

    cout << "El estudiante con menor promedio es: " << (*estudiantes.begin()) << endl;  //.begin() retorna un puntero
    cout << "El estudiante con mayor promedio es: " << (*estudiantes.rbegin()) << endl; //.back() retorna el último objeto de la lista

    cout << "Estudiantes ordenados por por promedio: " << endl;
    for (it = estudiantes.begin(); it != estudiantes.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}