/**
 * Project Untitled
 */


#ifndef _TRIANGULO_H
#define _TRIANGULO_H

#include "Geometrica.h"


class Triangulo: public Geometrica {
public: 
	
/**
 * @param b
 * @param h
 * @param x
 * @param y
 */

float area();
float perimetro();
Triangulo(float b, float h, float x = 0., float y = 0.);
private: 
	float _base;
	float _altura;
	
Triangulo();
};

#endif //_TRIANGULO_H
