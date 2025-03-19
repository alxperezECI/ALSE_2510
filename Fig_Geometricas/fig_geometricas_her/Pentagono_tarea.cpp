/**
 * Project Untitled
 * Pentagono.cpp
 */

#include "Pentagono_tarea.h"

/**
 * Pentagono implementation
 */

/**
 * @param l
 * @param x
 * @param y
 */

Pentagono::Pentagono(float l, float x, float y) // No default arguments here
{
    _lado = l;
    setX(x);
    setY(y);
}

Pentagono::Pentagono()
{
}

float Pentagono::area()
{
    return 1.7204774 * _lado * _lado;
}

float Pentagono::perimetro()
{
    return 5 * _lado;
}