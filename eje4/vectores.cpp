#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

double punto2(const double x[], const double y[], double r[], const int &cant) {
    double suma = 0.0;
    for (int i = 0; i < cant; i++) {
        r[i] = x[i] * y[i]; // Producto elemento a elemento
        suma += r[i];       // Suma acumulada de los productos
    }
    return suma;
}

double punto1(double *x, double *y, double *r, const int &cant) {
    double suma = 0.0;
    for (int i = 0; i < cant; i++) {
        r[i] = x[i] * y[i]; // Producto elemento a elemento
        suma += r[i];       // Suma acumulada de los productos
    }
    return suma;
}

int main() {
    srand(time(0));
    double v1[100], v2[100], vres[100];

    for (int i = 0; i < 100; i++) {
        v1[i] = 3.0;
    }

    for (int i = 0; i < 100; i++) {
        v2[i] = 50 + rand() % 100;
    }

    cout << "La suma total con punto1 es: " << punto1(v1, v2, vres, 100) << endl;
    cout << "La suma total con punto2 es: " << punto2(v1, v2, vres, 100) << endl;
    for (int i = 0; i < 100; i++) {
        cout << "vres[" << i << "] = " << vres[i] << endl;
    }

    return 0;
}
