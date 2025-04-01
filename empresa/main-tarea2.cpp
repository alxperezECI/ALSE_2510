#include "Trabajador-tarea.h"
#include <fstream>
#include <vector>
#include <string>
#include <iostream> 

using namespace std;

int main(int argc, char const *argv[]){
    if (argc != 2) {
        cout << "Error, no se conecta con el archivo" << endl;
    }
    vector<Trabajador> Trabajadores;
    double horas_acum[30];
    ifstream archivo(argv[1]);
    string nombre, apellido;
    double sal;
    int docid;
    float dia_cant[8];
    while(archivo >> nombre >> apellido >> docid >> sal >> dia_cant[0] >> dia_cant[1] 
        >> dia_cant[2] >> dia_cant[3] >> dia_cant[4]
        >> dia_cant[5] >> dia_cant[6] >> dia_cant[7])
    {
      // Poner aquí el código para crear un objeto de la clase Trabajador y agregarlo al vector estudiantes
      Trabajador e(nombre, apellido, docid, sal);
        for(int i=0; i< 4; i++)
        {
            e.agregarhoras(dia_cant[i*2], dia_cant[i*2+1] );
        }
                
        Trabajadores.push_back(e);
    }
    archivo.close();
    
    cout << "No. de trabajadores cargados: " << Trabajadores.size() << endl;
    
    vector<Trabajador>::iterator it;
    for(it = Trabajadores.begin(); it != Trabajadores.end(); it++)
    {
        it->pago_mensual();
        cout << (*it) << endl;
    }

    for(it = Trabajadores.begin(); it != Trabajadores.end(); it++)
    {
        for(int i = 0; i <30; i++){
            horas_acum[i] += it->obtener_horasdia(i);
        }
    }
    // Imprimir el contenido del vector horas_acum
    
    for (int i = 0; i < 30; i++) {
        cout << "Horas acumuladas: "<< horas_acum[i] << " Dia: " << (i + 1) << endl;
    }
    
}