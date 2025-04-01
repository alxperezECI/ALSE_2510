#include "filtro.h"

Filtro::Filtro()
{
    _tamano = 0;
}

Filtro::Filtro(const int &tam)
{
    _tamano = tam;
}

Filtro::~Filtro()
{
}

void Filtro::agregar_muestra(const float &muestra)
{
    _memoria.push_back(muestra);
    if (_memoria.size() > _tamano)
    {
        _memoria.pop_front();
    }
}

void Filtro::setTamano(const int &tam)
{
    _tamano = tam;
}

int Filtro::getTamano()
{
    return _tamano;
}

float Filtro::salida_promedio()
{
    if (_memoria.empty())
    {
        return 0;
    }

    float promedio = 0;
    for (list<float>::iterator it = _memoria.begin(); it != _memoria.end(); it++)
    {
        promedio += *it;
    }
    return promedio / _memoria.size();
}