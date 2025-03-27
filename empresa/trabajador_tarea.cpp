#include "trabajador_tarea.h"

Trabajador::Trabajador() : Persona("","",0)
{
    _salario = 0;
}

Trabajador::Trabajador(const string &name, const string &ape, const int &docid, const float &salario) : Persona(name, ape, docid)
{
    _salario = salario;
    _pmensual = 0;
    _totalex = 0;
}

Trabajador::~Trabajador(){}

void Trabajador::horasextra(const char &dia, const float &horas)
{
    h_extra diahor;
    diahor.dia = dia;
    diahor.canthoras = horas;
    _horextra.push_back(diahor);
}

float Trabajador::gethorasex(const char &dia)
{
    if (_horextra.size() == 0)
        return 0.0;

    else
    {
        for(int i = 0; i < _horextra.size(); i++)
        {
            if (_horextra[i].dia == dia)
                return _horextra[i].canthoras;
        }
        return 0.0
    } 
}

float Trabajador::pagoHextra()
{
    float valhora = _salario/240;
    float horas = 0;

    for(int i = 0; i < _horextra.size(); i++)
    {
        horas = _horextra[i].canthoras + horas;
    }

    _totalex = horas*valhora;

    return _totalex;
}

float Trabajador::pago_mensual()
{
    return _salario*(1+_totalex);
}