/**
 * Circulo.h
 */

#ifndef _CIRCULO_TAREA_H
#define _CIRCULO_TAREA_H

#include "Geometrica.h"

class Circulo : public Geometrica
{
public:
    /**
     * @param r
     * @param x
     * @param y
     */
    Circulo(float r, float x = 0., float y = 0.);
    float area();
    float perimetro();

    void setRadio(float r) { _radio = r; }
    float getRadio() { return _radio; }
    bool interseccion(Circulo &comparar);

private:
    float _radio;

    Circulo();
};

#endif //_CIRCULO_H
