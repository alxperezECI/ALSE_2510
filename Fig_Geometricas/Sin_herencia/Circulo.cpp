/**
 * Project Untitled
 */


#include "Circulo.h"
#include <iostream>
#include <cmath>

using namespace std;

/**
 * Circulo implementation
 */


/**
 * @param r
 * @param x
 * @param y
 */
Circulo::Circulo(float r, float x, float y ) {
    _radio = r;
    _xc = x;
    _yc = y;
}

/**
 * @return float
 */
float Circulo::area() {
    return M_PI * _radio * _radio;
}

/**
 * @return float
 */
float Circulo::perimetro() {
    return 2 * M_PI * _radio;
}

/**
 * @param stream
 * @return ostream&
 */
ostream& operator<<(ostream& stream,  Circulo &c) {
    stream  << "Soy un círculo de radio: " << c._radio << ". Mi perímetro es: " << c.perimetro() <<
               " y mi área es: " << c.area();

    return stream;
}

