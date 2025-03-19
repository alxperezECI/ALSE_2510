#include "estudiante.h"
#include <vector>
#include <iostream>
using namespace std;

Estudiante::Estudiante():Persona("", "", 0) 
{
    codigo = 0;
<<<<<<< HEAD
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
=======

}


Estudiante::Estudiante(const string &nombre, const string &apellido, const int &docid, const int &cod):Persona(nombre, apellido, docid) 
{
    codigo = cod;
}

int Estudiante::Codigo() const
{
    return codigo;
}

double Estudiante::Nota(const int &i)
{
    return notas[i];
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
>>>>>>> 79db24c (Subiendo tarea interseccion circulos)
}

ostream &operator<<(ostream &os,const Estudiante &e)
{
<<<<<<< HEAD
    os << e.codigo << " " << e.Nombre() << " " << e.Apellido() << " Promedio: " << e._promedio;
    return os;
}

=======
    os << "ID: " << e.codigo << " Nombre: " << e.Nombre() << " Apellido: " << e.Apellido() << " Promedio: " << e.Promedio();
    return os;
}
>>>>>>> 79db24c (Subiendo tarea interseccion circulos)
