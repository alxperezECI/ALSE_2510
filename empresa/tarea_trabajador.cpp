#include "tarea_trabajador.h"
#include <vector>
#include <iostream>
#include <iomanip> 

using namespace std;

Trabajador::Trabajador():Persona("", "", 0) 
{
    _salario = 0.0;
}

Trabajador::Trabajador(const std::string &nombre, const std::string &apellido, const int &docid, const double &sal)
:Persona(nombre, apellido, docid), _salario(sal) {}

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
    for(const auto &he : _vec_h_extra) {
        if(he.dia == i) return he.horas_extra;
    }
    return 0.0;
}

void Trabajador::horas_extra_dia(const int &d, const float cant)
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

double Trabajador::Pago_mensual() const {
    if(_vec_h_extra.empty()) {
        return _salario;
    }

    const double horas_mensuales = (48.0 / 6) * 30; //((48 horas semanales) / 6 Días de Lunes a Sábado)= 8 horas diarias * 30 días= 240 horas
    const double valor_hora = _salario / horas_mensuales;
    double total_extra = 0.0;

    for(const auto &he : _vec_h_extra) {
        total_extra += he.horas_extra * valor_hora * 2.5; //2.5 = 1 (hora normal) + 1.5 (recargo nocturno en domingo o festivo)
    }
    return _salario + total_extra;
}

