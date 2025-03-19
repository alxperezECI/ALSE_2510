#include "estudiante.h"
#include <vector>
#include <iostream>
using namespace std;

Estudiante::Estudiante():Persona("", "", 0) 
{
    codigo = 0;

}


Estudiante::Estudiante(const string &nombre, const string &apellido, const int &docid, const int &cod):Persona(nombre, apellido, docid) 
{
    codigo = cod;
}

void Estudiante::agregarNota(const double &nota) 
{
    notas.push_back(nota);
}

double Estudiante::Promedio() const
{
    double promedio = 0.0;
    for(int i = 0; i < notas.size(); i++)
    {
        promedio += notas[i];
    }    

   return promedio / notas.size();
}

ostream &operator<<(ostream &os,const Estudiante &e)
{
    os << "ID: " << e.codigo << " Nombre: " << e.Nombre() << " Apellido: " << e.Apellido() << " Promedio: " << e.Promedio();
    return os;
}