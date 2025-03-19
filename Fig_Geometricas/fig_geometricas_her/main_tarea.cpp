#include <iostream>
#include "Circulo_tarea.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono_tarea.h"
#include <vector>

using namespace std;

int main()
{
    vector<Geometrica *> vFig;

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
    float radio, lado, base, altura, r1, r2, x1, x2, y1, y2;
    radio = lado = base = altura = r1 = r2 = x1 = x2 = y1 = y2 = 0.;

    for (int i = 0; i < 10; i++)
    {
        cout << "Figura para crear Circulo(1), Cuadrado(2), Triangulo(3), "
                "Pentagono(4) o Interseccion(5) "
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
        case 4:
            cout << "Ingrese el lado: ";
            cin >> lado;
            pG = new Pentagono(lado);
            break;
        case 5:
            cout << "Ingrese el radio del primer circulo: ";
            cin >> r1;
            cout << "Ingrese la coordenada en X del primer circulo: ";
            cin >> x1;
            cout << "Ingrese la coordenada en Y del primer circulo: ";
            cin >> y1;
            cout << "Ingrese el radio del segundo circulo: ";
            cin >> r2;
            cout << "Ingrese la coordenada en X del segundo circulo: ";
            cin >> x2;
            cout << "Ingrese la coordenada en Y del segundo circulo: ";
            cin >> y2;
            break;
        default:
            cout << "Por favor lea bien" << endl;
            break;
        }
        vFig.push_back(pG);
    }

    Circulo c1 = Circulo(r1, x1, y1);
    Circulo c2 = Circulo(r2, x2, y2);
    if (c1.interseccion(c2))
    {
        cout << "Los dos circulos se intersectan" << endl;
    }
    else
    {
        cout << "Los dos circulos no se intersectan" << endl;
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
