/**
 * Project Untitled
 */


#ifndef _CUADRADO_H
#define _CUADRADO_H

#include <iostream>

using namespace std;

class Cuadrado {
public: 
	
/**
 * @param l
 * @param x
 * @param y
 */
Cuadrado(float l, float x = 0., float y =0. );
	
float area();
float perimetro();
	
/**
 * @param stream
 */
friend ostream& operator<<(ostream& stream, Cuadrado& c);

void setLado(float l){_lado = l;};
float getLado(){return _lado;}
void setX(float x){_xc = x;};
float getX(){return _xc;}
void setY(float y){_yc = y;};
float getY(){return _yc;}
void setAngulo(float a){_angulo = a;};
float getAngulo(){return _angulo;}

private: 
	float _lado;
	float _xc;
	float _yc;
	float _angulo;
	float _area;
	float _perimetro;
	
Cuadrado();
};

#endif //_CUADRADO_H
