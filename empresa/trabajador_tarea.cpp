#include "trabajador_tarea.h"
#include <iostream>
#include <vector>
using namespace std;

Trabajador::Trabajador():Persona("", "", 0) 
{
    _salario = 0.0;
}


Trabajador::Trabajador(const string &nombre, const string &apellido, const int &docid, const double &sal):Persona(nombre, apellido, docid) 
{
    _salario = 0.0;
}

void Trabajador::Salario(const double &s) 
{
    _salario = s;
}

double Trabajador::Salario() const
{
    return _salario;
}

void Trabajador::Horas_extra(const char &d, const float &cant)
{
    h_extra dia;
    dia.dia = d;
    dia.horas_extra = cant;
    vec_horas_extras.push_back(dia);
}

double Trabajador::Horas_extra(const int &i)
{
    if(vec_horas_extras.size() == 0)
        return 0.0;

    for(int j = 0; j < vec_horas_extras.size(); j++)
    {
        if(vec_horas_extras[j].dia == i)
            return vec_horas_extras[j].horas_extra;
    }

    return 0.0;
}

double Trabajador::Pago_mensual() const
{
    if(vec_horas_extras.size() == 0)
        return _salario;

    double total = _salario;
    for(int i = 0; i < vec_horas_extras.size(); i++)
    {
        total += vec_horas_extras[i].horas_extra;
    }

    return _salario + total;
}

ostream &operator<<(ostream &os, Trabajador &t)
{
    os << t.Doc_identidad() << " " << t.Nombre() << " "<< t.Apellido() << " Pago: " << t.Pago_mensual() << endl;
    return os;
}