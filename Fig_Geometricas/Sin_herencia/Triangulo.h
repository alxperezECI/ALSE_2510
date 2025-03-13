/**
 * Project Untitled
 */


#ifndef _TRIANGULO_H
#define _TRIANGULO_H

#include <iostream>

using namespace std;

class Triangulo {
public: 
	
/**
 * @param b
 * @param h
 * @param x
 * @param y
 */
Triangulo(float b, float h, float x = 0., float y = 0.);
	
float area();
float perimetro();
	
/**
 * @param stream
 */
friend ostream& operator<<(ostream& stream, Triangulo& t);
void setBase(float b){_base = b;};
void setAltura(float h){_altura = h;};
float getBase(){return _base;}
float getAltura(){return _altura;}
void setX(float x){_xc = x;};
float getX(){return _xc;}
void setY(float y){_yc = y;};
float getY(){return _yc;}
void setAngulo(float a){_angulo = a;};
float getAngulo(){return _angulo;}
private: 
	float _base;
	float _altura;
	float _xc;
	float _yc;
	float _angulo;
	float _area;
	float _perimetro;
	
Triangulo();
};

#endif //_TRIANGULO_H
