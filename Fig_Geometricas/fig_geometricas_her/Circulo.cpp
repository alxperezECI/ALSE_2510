/**
 * Project Untitled
 */


 #include "Circulo.h"
 #include <math.h>
 /**
  * Circulo implementation
  */
 
 
 /**
  * @param r
  * @param x
  * @param y
  */
 Circulo::Circulo(float r, float x, float y) {
     _radio = r;
     setX( x );
     setY( y );
 }
 
 Circulo::Circulo() {
 
 }
 
 float Circulo::area(){
     return M_PI * _radio * _radio;
 }
 
 float Circulo::perimetro(){
     return 2 * M_PI * _radio;
 }
 
bool Circulo::interseccion( Circulo &c,Circulo &b){
     float d = sqrt( pow( c.getX() - b.getX(), 2) + pow( c.getY() - b.getY(), 2) );
     cout << "distancia: " << d << endl;
     cout << "suma radios: " << (c.getRadio() + b.getRadio()) << endl;
     return d < (c.getRadio() + b.getRadio());
 }