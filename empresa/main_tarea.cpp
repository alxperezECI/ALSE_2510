#include <iostream>
#include "trabajador_tarea.h"
#include "persona.h"
#include <vector>
#include <fstream>
#include <string>   
using namespace std;

void vec_max(const double vec[], double &max)
    // Encuentra el máximo termino dentro del vector vec
    {
        max = vec[0];
        for(int i = 0; i < 30; i++){
          max = vec[i] > max ? vec[i] : max ;
        }
    }

int main(int argc, char const *argv[])
{

    if(argc != 2)
    {
        cout << "Uso: " << argv[0] << " <archivo de datos>" << endl;
        return 1;
    }
    vector<Trabajador> trabajadores;

    // Se leeerá de un archivo en donde en cada línea se tiene el nombre, apellido, documento de identidad y código del estudiante
    // Se leerán las notas de cada estudiante y se calculará el promedio del curso  
    ifstream archivo(argv[1]);
    string nombre, apellido;
    double sal;
    int docid;
    float dia_cant[8];
    if(archivo.is_open() == false)
    {
        cout << "No se pudo abrir el archivo " << argv[1] << endl;
        return 1;
    }

    while(archivo >> nombre >> apellido >> docid >> sal >> dia_cant[0] >> dia_cant[1] 
        >> dia_cant[2] >> dia_cant[3] >> dia_cant[4]
        >> dia_cant[5] >> dia_cant[6] >> dia_cant[7])
    {
      // Poner aquí el código para crear un objeto de la clase Trabajador y agregarlo al vector estudiantes
      Trabajador t(nombre, apellido, docid, sal);
        for(int i=0; i< 4; i++)
        {
            t.Horas_extra(dia_cant[i*2], dia_cant[i*2+1] );
        }
                
        trabajadores.push_back(t);
    }
    archivo.close();

    cout << "No. de trabajadores cargados: " << trabajadores.size() << endl;
    
    vector<Trabajador>::iterator it;
    for(it = trabajadores.begin(); it != trabajadores.end(); it++)
    {
        it->Pago_mensual();
        cout << (*it);
    }
    
    cout << endl;

    double mes[30] = {0.0};
    for(int i = 0; i < 30; i++)
    {
        vector<Trabajador>::iterator it;
        for(it = trabajadores.begin(); it != trabajadores.end(); it++)
        {
            mes[i] += it->Horas_extra(i);
        }   
        cout << "Total de horas extras del día " << i+1 << ": " << mes[i] << endl;
    }

    cout << endl;

    //Esta parte determina cual es el día con mayor cantidad de horas extras
    double max;
    vec_max(mes, max);

    for(int i = 0; i < 30; i++)
    {
        if(mes[i] == max)
        {
            cout << "El día con mayor cantidad de horas extras es el día " << i+1 << " con " << mes[i] << " horas extras." << endl;
            break;
        }
    }

    return 0;
}