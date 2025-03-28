/**
 * @file filtro.h
 * @brief Filtro de señales discretas
 */

#ifndef FILTRO_H
#define FILTRO_H

#include <iostream>
#include <list>

using namespace std;

class Filtro
{
    int _tamano;
    list<float> _memoria;
    Filtro();

public:
    Filtro(const int &tam);
    ~Filtro();

    void agregar_muestra(const float &muestra);

    float salida_promedio();

    void setTamano(const int &tam);
    int getTamano();
};

#endif // FILTRO_H