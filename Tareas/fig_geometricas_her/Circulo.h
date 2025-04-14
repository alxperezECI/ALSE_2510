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
void setCentro(float x, float y) { _x = x; _y = y; }
float getX() const { return _x; }
float getY() const { return _y; }

// Método para verificar si dos círculos se intersectan
bool seIntersectaCon(const Circulo& otro) const;

private: 
	float _radio;
	float _x;
	float _y;
Circulo();
};

#endif //_CIRCULO_H
