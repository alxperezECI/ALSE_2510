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

bool Circulo::interseccion(Circulo &a){
    //Captación de los datos del circulo a y calculo de las magnitudes para determinación de dichos datos:
    float distancia = sqrt(pow(a.getX()-_x, 2.0)+pow(a.getY()-_y, 2.0));
    float radios = _radio + a.getRadio();

    //Prueba de intersección:
    if (distancia < radios){
        return true;
    }else{
        return false;
    }
}

Circulo::~Circulo(){
    cout << "Llamando destructor de Circulo." << endl;
}