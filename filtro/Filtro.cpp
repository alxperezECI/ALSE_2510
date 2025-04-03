/**
 * Project Untitled
 */


#include "Filtro.h"
#include <list>
#include <iostream>

using namespace std;

/**
 * Filtro implementation
 */
Filtro::Filtro(int tamano){
    _tamano = tamano;
}

/**
 * @param a
 * @return void
 */
void Filtro::agregarDato(float a) {
    if( _datos.size() == _tamano )
        _datos.pop_front();

    _datos.push_back( a );
    return;
}

/**
 * @return float
 */
float Filtro::promedio() {
    float prom =0.;
    if( _datos.empty() ) return 0.;

    std::list<float>::iterator it;
    for( it = _datos.begin(); it != _datos.end(); ++it )
        prom += *it;

    prom /= _datos.size();
    return prom;
}



