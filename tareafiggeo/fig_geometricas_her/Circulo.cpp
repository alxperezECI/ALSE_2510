/**
 * Project Untitled
 */


#include "Circulo.h"
#include <math.h>
using namespace std;
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
    _x = x;
    _y = y;
}

Circulo::Circulo() {

}
void Circulo::setRadio(float r) {
    _radio = r;
}

float Circulo::area(){
    return M_PI * _radio * _radio;
}

float Circulo::perimetro(){
    return 2 * M_PI * _radio;
}

bool Circulo::seCruzaCon(const Circulo& otro) const {
    double distancia = sqrt(pow(this->_x - otro._x, 2) + pow(this->_y - otro._y, 2));
    cout << "Distancia entre centros: " << distancia << endl;
    if (distancia <= (this->_radio + otro._radio)) {
        cout << "Los círculos se cruzan." << endl;
        return true;
    } else {
        cout << "Los círculos no se cruzan." << endl;
        return false;
    }
}

