/**
 * Project Untitled
 * Circulo.cpp
 */

#include "Circulo_tarea.h"
#include <math.h>
/**
 * Circulo implementation
 */

/**
 * @param r
 * @param x
 * @param y
 */
Circulo::Circulo(float r, float x, float y)
{
    _radio = r;
    setX(x);
    setY(y);
}

Circulo::Circulo()
{
}

float Circulo::area()
{
    return M_PI * _radio * _radio;
}

float Circulo::perimetro()
{
    return 2 * M_PI * _radio;
}

bool Circulo::interseccion(Circulo &comparar)
{
    float distancia = sqrt(pow(getX() - comparar.getX(), 2) + pow(getY() - comparar.getY(), 2));
    return distancia < _radio + comparar.getRadio();
}
