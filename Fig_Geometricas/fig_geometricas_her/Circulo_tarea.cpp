/**
 * Project Untitled
 */
 #include "Circulo_tarea.h"
 #include <math.h>
 #include <cmath>
 /**
  * Circulo implementation
  */
 /**
  * @param r
  * @param x
  * @param y
  */
 Circulo::Circulo(float r, float x, float y)
 {
     _radio = r;
     setX(x);
     setY(y);
 }
 
 Circulo::Circulo()
 {
 }
 
 float Circulo::area()
 {
     return M_PI * _radio * _radio;
 }
 
 float Circulo::perimetro()
 {
     return 2 * M_PI * _radio;
 }
 
 bool Circulo::intersectaCon(const Circulo &otro)
 {
     float distancia = sqrt(pow(getX() - otro.getX(), 2) + pow(getY() - otro.getY(), 2));
     if (distancia <= (_radio + otro._radio))
     {
         return true;
     }
     return false;
 }
 