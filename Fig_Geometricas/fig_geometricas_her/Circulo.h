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

void setRadio(float r){_radio = r;}
float getRadio(){return _radio;}
private: 
	float _radio;
	
Circulo();
};

#endif //_CIRCULO_H
