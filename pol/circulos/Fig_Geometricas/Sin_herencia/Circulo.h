/**
 * Project Untitled
 */


#ifndef _CIRCULO_H
#define _CIRCULO_H

#include <iostream>
#include <math.h>

using namespace std;

class Circulo {
public: 
	
/**
 * @param r
 * @param x
 * @param y
 */
Circulo(float r, float x = 0.0, float y = 0.0);
	
float area();
	
float perimetro();
	
/**
 * @param stream
 */
friend ostream& operator<<(ostream& stream,  Circulo &c);

void setRadio(float r){_radio = r;};
float getRadio(){return _radio;}
void setX(float x){_xc = x;};
float getX(){return _xc;}
void setY(float y){_yc = y;};
float getY(){return _yc;}

private: 
	float _radio;
	float _xc;
	float _yc;
	
Circulo();
};

#endif //_CIRCULO_H
