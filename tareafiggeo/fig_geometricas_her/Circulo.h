/**
 * Project Untitled
 */


#ifndef _CIRCULO_H
#define _CIRCULO_H

#include "Geometrica.h"


class Circulo: public Geometrica {
public: 
	
/**
 * @param r
 * @param x
 * @param y
 */
Circulo(float r, float x = 0., float y = 0.);
float area();
float perimetro();
bool seCruzaCon(const Circulo& otro) const;
void setRadio(float r);

private: 
	float _radio;
	float _x;
    float _y;
	
Circulo();
};

#endif //_CIRCULO_H
