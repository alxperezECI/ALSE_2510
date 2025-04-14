/**
 * Project Untitled
 */


#include "Cuadrado.h"

/**
 * Cuadrado implementation
 */


/**
 * @param l
 * @param x
 * @param y
 */
Cuadrado::Cuadrado(float l, float x, float y) {
    _lado = l;
    setX( x );
    setY( y );
}

Cuadrado::Cuadrado() {

}

float Cuadrado::area(){
    return _lado * _lado;
}

float Cuadrado::perimetro(){
    return 4 * _lado;
}

