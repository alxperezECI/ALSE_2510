/**
 * Project Untitled
 */


#include "Triangulo.h"
#include <iostream>

using namespace std;

/**
 * Triangulo implementation
 */


/**
 * @param b
 * @param h
 * @param x
 * @param y
 */
Triangulo::Triangulo(float b, float h, float x, float y) {
    _base = b;
    _altura = h;
    _xc = x;
    _yc = y;
}

/**
 * @return float
 */
float Triangulo::area() {
    return _base * _altura / 2.;
}

/**
 * @return float
 */
float Triangulo::perimetro() {
    return 3. * _base;
}

/**
 * @param stream
 * @return ostream&
 */
ostream& operator<<(ostream& stream, Triangulo& t) {
    stream << "Soy un triángulo" << ". Mi perímetro es: " << t.perimetro() <<
               " y mi área es: " << t.area() ;
	return stream;
}

Triangulo::Triangulo() {

}
