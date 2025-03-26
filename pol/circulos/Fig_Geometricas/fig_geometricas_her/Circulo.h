/**
 * Project Untitled
 */


#ifndef _CIRCULO_H
#define _CIRCULO_H

#include "Geometrica.h"


class Circulo: public Geometrica {
public:
Circulo();
/**
 * @param r
 * @param x
 * @param y
 */
Circulo(float r, float x = 0., float y = 0.);
~Circulo();
float area();
float perimetro();
bool interseccion(Circulo &a);

//Setters:
void setRadio(float r){_radio = r;}
void setX(float x){_x = x;}
void setY(float y){_y = y;}

//Getters
float getRadio(){return _radio;} 
float getX(){return _x;}
float getY(){return _y;}

private:
	float _radio;
	float _x;
	float _y;
};

#endif //_CIRCULO_H
