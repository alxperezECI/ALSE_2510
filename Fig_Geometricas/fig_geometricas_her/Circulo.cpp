/**
 * Project Untitled
 */


#include "Circulo.h"
#include <cmath>
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

bool Circulo::seIntersectaCon(const Circulo& otro) const {
    float distancia = sqrt(pow(_x - otro._x, 2) + pow(_y - otro._y, 2));
    return distancia <= (_radio + otro._radio);
}