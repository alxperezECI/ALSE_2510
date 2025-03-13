/**
 * Project Untitled
 */


#include "Cuadrado.h"
#include <iostream>

using namespace std;

/**
 * Cuadrado implementation
 */


/**
 * @param l
 * @param x
 * @param y
 */
Cuadrado::Cuadrado(float l, float x , float y ) {
	_lado = l;
	_xc = x;
	_yc = y;
}

/**
 * @return float
 */
float Cuadrado::area() {
    return _lado * _lado;
}

/**
 * @return float
 */
float Cuadrado::perimetro() {
    return 4. * _lado;
}

/**
 * @param stream
 * @return ostream&
 */
ostream& operator<<(ostream& stream, Cuadrado& c) {
    stream  << "Soy un cuadrado de lado: " << c._lado << ". Mi perímetro es: " << c.perimetro() <<
               " y mi área es: " << c.area();

    return stream;
}

Cuadrado::Cuadrado() {

}
