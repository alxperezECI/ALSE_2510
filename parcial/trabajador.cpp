#include "trabajador.h"
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

Trabajador::Trabajador():Persona("", "", 0) 
{
    _salario = 0.0;
}


Trabajador::Trabajador(const string &nombre, const string &apellido, const int &docid, const double &sal)
:Persona(nombre, apellido, docid) 
{
    _salario = sal;
}

void Trabajador::salario(const double &s)
{
    _salario = s;
}   

double Trabajador::salario() const
{
    return _salario;
} 

double Trabajador::horas_extra_dia(const int &i)
{ 
    // Aquí habría que buscar el día en el vector y retornar la cantidad si es que existe
    if( _vec_h_extra.size() == 0)   
       return 0.0;

    for(int j = 0; j < _vec_h_extra.size(); j++)
    {
        if(_vec_h_extra[j].dia == i)
            return _vec_h_extra[j].horas_extra;
    }
    return 0.0;
}

void Trabajador::horas_extra_dia(const char &d, const float cant)
{
    h_extra dia;
    dia.dia = d;    
    dia.horas_extra = cant;
    _vec_h_extra.push_back(dia);    
}

ostream &operator<<(ostream &os, Trabajador &t)
{
    os << t.Doc_identidad() << " " << t.Nombre() << " " << t.Apellido() 
       << " Pago: " << std::setprecision(9) << t.Pago_mensual() << endl;   
    return os;
}

double Trabajador::Pago_mensual()
{   
    if(_vec_h_extra.size() == 0)
        return _salario;
    
    double total = 0.0;
    for(int i = 0; i < _vec_h_extra.size(); i++)
    {
        total += _vec_h_extra[i].horas_extra;
    }
    return _salario *(1.0 + total/240.0);
} 