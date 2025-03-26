/**
 * Project Untitled
 */


#ifndef _CUADRADO_H
#define _CUADRADO_H

#include "Geometrica.h"


class Cuadrado: public Geometrica {
public: 
	
/**
 * @param l
 * @param x
 * @param y
 */
Cuadrado(float l, float x = 0., float y = 0.);
float area();
float perimetro();

void setLado(float l){ _lado = l;}
float getLado(){ return _lado;}

private: 
	float _lado;
	
Cuadrado();
};

#endif //_CUADRADO_H
