#include "estudiante.h"
#include <vector>
#include <iostream>
using namespace std;

Estudiante::Estudiante():Persona("", "", 0) 
{
    codigo = 0;
    _promedio = 0.0;
}


Estudiante::Estudiante(const string &nombre, const string &apellido, const int &docid, const int &cod)
:Persona(nombre, apellido, docid) 
{
    codigo = cod;
    _promedio = 0.0;
}

void Estudiante::agregarNota(const double &nota)
{
    notas.push_back(nota);
    Promedio();
}

double Estudiante::Promedio() 
{
    if( _promedio == 0.0 ){
        for(int i = 0; i < notas.size(); i++)
        {
            _promedio += notas[i];
        }
        _promedio /= notas.size();
    }
   return _promedio;
}

bool Estudiante::operator<(const Estudiante &e) const
{
    return _promedio < e._promedio;
}

ostream &operator<<(ostream &os,const Estudiante &e)
{
    os << e.codigo << " " << e.Nombre() << " " << e.Apellido() << " Promedio: " << e._promedio;
    return os;
}

