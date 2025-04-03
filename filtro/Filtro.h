#ifndef FILTRO_H
#define FILTRO_H

#include <list>
using namespace std;

class Filtro{
    int _tamaño;
    list<float> _memoria;
    Filtro();

public:
    Filtro(const int &n);
    void agregar_muestra (const float &m);
    float salida();
};



#endif