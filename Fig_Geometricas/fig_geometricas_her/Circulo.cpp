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
