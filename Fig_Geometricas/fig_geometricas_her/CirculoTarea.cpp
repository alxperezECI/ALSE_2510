// Tarea
/**
 * Project Untitled
 */

#include "CirculoTarea.h"
#include <math.h>

/**
 * Circulo implementation
 */

Circulo::Circulo(float r, float x, float y) {
    _radio = r;
    setX(x);
    setY(y);
}

Circulo::Circulo() {
}

float Circulo::area(){
    return M_PI * _radio * _radio;
}

float Circulo::perimetro(){
    return 2 * M_PI * _radio;
}

// Implementar la Función para saber si se intersecan los círculos
bool Circulo::intersectaCon(Circulo& otro) {
    float distancia_centros = sqrt(pow(getX() - otro.getX(), 2) + pow(getY() - otro.getY(), 2));
    float suma_radios = _radio + otro.getRadio();
    return distancia_centros <= suma_radios;
}
