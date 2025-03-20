#include <iostream>
#include "Circulo_tarea.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include <vector>

using namespace std;

int main()
{
    vector<Geometrica *> vFig;
    float r1, x1, y1, r2, x2, y2;

    cout << "Ingrese el radio del primer circulo:" << endl;
    cin >> r1;
    cout << "Ahora ingrese las coordenadas del centro del círculo." << endl;
    cout << "Ingrese la coordenada en x" << endl;
    cin >> x1;
    cout << "ingrese la coordenada en y" << endl;
    cin >> y1;
    cout << "Ingrese el radio del segundo circulo:" << endl;
    cin >> r2;
    cout << "Ahora ingrese las coordenadas del centro del círculo." << endl;
    cout << "Ingrese la coordenada en x" << endl;
    cin >> x2;
    cout << "Ingrese la coordenada en y" << endl;
    cin >> y2;

    Circulo c1(r1, x1, y1); // Círculo con radio 5 y centro en (0,0)
    Circulo c2(r2, x2, y2); // Círculo con radio 3 y centro en (6,0)

    if (c1.intersectaCon(c2))
    {
        cout << "Los círculos se intersectan." << endl;
    }
    else
    {
        cout << "Los círculos NO se intersectan." << endl;
    }

    Circulo a = Circulo(5.);
    cout << "Hello World!" << endl;
    cout << "Perímetro: " << a.perimetro() << " y área: " << a.area() << endl;
    a.setRadio(7.);
    cout << "Perímetro: " << a.perimetro() << " y área: " << a.area() << endl;

    Cuadrado b = Cuadrado(10.);
    cout << "Perímetro: " << b.perimetro() << " y área: " << b.area() << endl;

    Geometrica *pG = 0;

    pG = &a;
    cout << "Perímetro: " << pG->perimetro() << " y área: " << pG->area() << endl;

    pG = &b;
    cout << "Perímetro: " << pG->perimetro() << " y área: " << pG->area() << endl;

    pG = new Triangulo(5., 6.);
    cout << "Perímetro: " << pG->perimetro() << " y área: " << pG->area() << endl;

    cout << pG << endl;

    int tipo = 0;
    float radio, lado, base, altura;
    radio = lado = base = altura = 0.;

    for (int i = 0; i < 10; i++)
    {
        cout << "Figura para crear Circulo(1), Cuadrado(2), Triangulo(3) o "
                "Pentagono(4)"
             << endl;
        cin >> tipo;
        switch (tipo)
        {
        case 1:
            cout << "Ingrese el radio: ";
            cin >> radio;
            pG = new Circulo(radio);
            break;
        case 2:
            cout << "Ingrese el lado: ";
            cin >> lado;
            pG = new Cuadrado(lado);
            break;
        case 3:
            cout << "Ingrese el base: ";
            cin >> base;
            cout << "ahora la altura: ";
            cin >> altura;
            pG = new Triangulo(base, altura);
            break;
        default:
            cout << "Por favor lea bien" << endl;
            break;
        }
        vFig.push_back(pG);
    }

    cout << vFig.size() << endl;

    for (int i = 0; i < vFig.size(); i++)
    {
        cout << "Perímetro: " << vFig.at(i)->perimetro() << " y área: " << vFig.at(i)->area() << endl;
    }

    for (int i = 0; i < vFig.size(); i++)
    {
        delete vFig.at(i);
    }

    return 0;
}
