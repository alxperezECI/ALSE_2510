/**
 * Project Untitled
 * Pentagono.h
 */

#ifndef _PENTAGONO_H
#define _PENTAGONO_H

#include "Geometrica.h"

class Pentagono : public Geometrica
{
public:
    /**
     * @param l
     * @param x
     * @param y
     */

    float area();
    float perimetro();
    Pentagono(float l, float x = 0., float y = 0.);

private:
    float _lado;

    Pentagono();
};

#endif //_PENTAGONO_H
