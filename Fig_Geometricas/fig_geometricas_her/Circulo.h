/**
 * Project Untitled
 */

 #ifndef _CIRCULO_H
 #define _CIRCULO_H
 
 #include <cmath>
 #include "Geometrica.h"
 
 class Circulo : public Geometrica {
 public:
	 Circulo(float r, float x = 0., float y = 0.);
	 Circulo();
 
	 float getRadio() const;
	 void setRadio(float r);
 
	 float getX() const override;  
	 float getY() const override;
 
	 float area() const;
	 float perimetro() const;
 
	 bool Interseccion(const Circulo& otro); // hacemos la declaracion 
 
 private:
	 float _radio;
 };
 
 #endif //_CIRCULO_H
 