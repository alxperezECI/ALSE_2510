#include <iostream>
#include "trabajador_tarea.h"
#include "persona_tarea.h"
#include <vector>
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

    vector<Trabajador> trabajadores;
    float extrames = 0.;

    // Se leeerá de un archivo en donde en cada línea se tiene el nombre, apellido, documento de identidad y código del estudiante
    // Se leerán las notas de cada estudiante y se calculará el promedio del curso
    ifstream archivo(argv[1]);
    string nombre, apellido;
    float sal;
    int docid;
    float dia_cant[8];
    if (archivo.is_open() == false)
    {
        cout << "No se pudo abrir el archivo " << argv[1] << endl;
        return 1;
    }

    while (archivo >> nombre >> apellido >> docid >> sal >> dia_cant[0] >> dia_cant[1] >> dia_cant[2] >> dia_cant[3] >> dia_cant[4] >> dia_cant[5] >> dia_cant[6] >> dia_cant[7])
    {
        // Poner aquí el código para crear un objeto de la clase Trabajador y agregarlo al vector estudiantes
        Trabajador t(nombre, apellido, docid, sal);
        for (int i = 0; i < 4; i++)
        {
            t.horasextra(dia_cant[i * 2], dia_cant[i * 2 + 1]);
        }

        trabajadores.push_back(t);
    }
    archivo.close();

    cout << "No. de trabajadores cargados: " << trabajadores.size() << endl;

    vector<Trabajador>::iterator it;
    for (it = trabajadores.begin(); it != trabajadores.end(); it++)
    {
        it->pago_mensual();
        cout << (*it);
    }

    cout << "Horas extra hechas en cada día" << endl;

    for (int j = 1; j < 32; j++)
    {
        for (it = trabajadores.begin(); it != trabajadores.end(); it++)
        {
            extrames = extrames + it->gethorasex(j);
        }

        cout << "Dia " << j << " horas extra: " << extrames << endl;
        extrames = 0;
    }

    return 0;
}