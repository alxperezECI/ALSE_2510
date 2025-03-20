/**
 * Project Untitled
 */


 #include "Circulo-tarea.h"
 #include "Geometrica.h"
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
 
 bool Circulo::interseccion(Circulo& otro) {
     float distancia = std::sqrt(pow(getX() - otro.getX(), 2) + pow(getY() - otro.getY(), 2));
     return distancia <= (_radio + otro._radio);
 }
 