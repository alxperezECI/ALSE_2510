/**
 * Project Untitled
 */


#include "Circulo.h"
//Se define el constructor con parametros 

Circulo::Circulo(float r, float x, float y) {
    _radio = r;
    setX(x);
    setY(y);
}

Circulo::Circulo() {
    _radio = 0;
    setX(0);
    setY(0);
}
//metodo
float Circulo::getRadio() const {
    return _radio;
}
//metodo
void Circulo::setRadio(float r) {
    _radio = r;
}

float Circulo::getX() const {  // Puse getX() constante para que no puedamodificar ningun atrtibuto del objeto
    return Geometrica::getX();
}

float Circulo::getY() const {  // Puse getY() constante para que no puedamodificar ningun atrtibuto del objeto
    return Geometrica::getY();
}

float Circulo::area() const {
    return M_PI * _radio * _radio;
}

float Circulo::perimetro() const {
    return 2 * M_PI * _radio;
}
// aplicamos la formula para calcular la distancia entre los centros
bool Circulo::Interseccion(const Circulo& otro) {
    float dx = getX() - otro.getX();
    float dy = getY() - otro.getY();
    float distancia = std::sqrt(dx * dx + dy * dy);
    return distancia < (getRadio() + otro.getRadio());
}
