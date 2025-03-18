#include <iostream>
#include "Circulo-tarea.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include <vector>
// GRUPO: JULIANA TUTA Y ANGEL PEDREROS
using namespace std;

int main(){
    vector<Geometrica*> vFig;

    Circulo a = Circulo( 5. );
    cout << "Hello World!" << endl;
    cout << "Perímetro: " << a.perimetro() << " y área: " << a.area() << endl;
    a.setRadio( 7. );
    cout << "Perímetro: " << a.perimetro() << " y área: " << a.area() << endl;

    Cuadrado b = Cuadrado( 10. );
    cout << "Perímetro: " << b.perimetro() << " y área: " << b.area() << endl;

    Geometrica* pG=0;

    pG = &a;
    cout << "Perímetro: " << pG->perimetro() << " y área: " << pG->area() << endl;

    pG = &b;
    cout << "Perímetro: " << pG->perimetro() << " y área: " << pG->area() << endl;

    pG = new Triangulo( 5., 6. );
    cout << "Perímetro: " << pG->perimetro() << " y área: " << pG->area() << endl;

    cout << pG << endl;

    int radio1, radio2, x1, x2 ,y1, y2 ,tipo = 0;
    float radio, lado, base, altura;
    radio = lado = base = altura = 0.;

    for (int i = 0; i < 5; i++){
        cout << "Figura para crear Circulo(1), Cuadrado(2), Triangulo(3) o "
                "Inter de circulos(4)" << endl;
        cin >> tipo;
        switch (tipo) {
        case 1:
            cout << "Ingrese el radio: ";
            cin >> radio;
            pG = new Circulo( radio );
            break;
        case 2:
            cout << "Ingrese el lado: ";
            cin >> lado;
            pG = new Cuadrado( lado );
            break;
        case 3:
            cout << "Ingrese el base: ";
            cin >> base;
            cout << "ahora la altura: ";
            cin >> altura;
            pG = new Triangulo( base, altura );
            break;
        case 4:
            cout << "Radio del circulo 1" << endl;
            cin >> radio1;
            cout << "Coordenada X-1" << endl;
            cin >> x1;
            cout << "Coordenada Y-1" << endl;
            cin >> y1;
            cout << "Radio del circulo 2" << endl;
            cin >> radio2;
            cout << "Coordenada X-2" << endl;
            cin >> x2;
            cout << "Coordenada Y-2" << endl;
            cin >> y2;
            break;
        default:
            cout << "Por favor lea bien" << endl;
            break;
        }
        vFig.push_back( pG );
    }

    cout << vFig.size() << endl;

    for (int i = 0; i < vFig.size(); i++){
        cout << "Perímetro: " << vFig.at(i)->perimetro() << " y área: " << vFig.at(i)->area() << endl;
    }

    for (int i = 0; i < vFig.size(); i++){
        delete vFig.at(i);
    }
    Circulo d = Circulo(radio1, x1, y1);
    Circulo f = Circulo(radio2, x2, y2);
    if (d.interseccion(f))
        cout << "Los circulos se intersectan" << endl;
    else    
        cout << "Los circulos NO se intersectan" << endl;

    return 0;
}
