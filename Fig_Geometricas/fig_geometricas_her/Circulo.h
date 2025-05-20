/**
 * Project Untitled
 */


 #ifndef _CIRCULO_H
 #define _CIRCULO_H
 
 #include "Geometrica.h"
 
 
 class Circulo: public Geometrica {
 public: 

 static bool interseccion( Circulo &c , Circulo  &b);
     
 /*
  * @param r
  * @param x
  * @param y
  */

 Circulo(float r, float x = 0., float y = 0.);
 float area();
 float perimetro();
 void setRadio(float r){_radio = r;}
 float getRadio(){return _radio;}
 Circulo();
 private:
 float _radio; 
 };
 
 #endif //_CIRCULO_H