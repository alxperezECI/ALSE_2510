//Tarea
//Luna Sofía Pedraza
//Paula Vanessa Cárdenas Cárdenas


#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include <vector>

using namespace std;

int main(){
    vector<Geometrica*> vFig;

/*    // Se crean de figuras 
    cout << "\n=== FIGURAS DE PRUEBA CON LOS VALORES PREDEFINIDOS ===" << endl;
    
    // 1. Círculo de prueba con el radio inicial 5
    Circulo a = Circulo(5.);
    cout << "\nCírculo de prueba :" << endl;
    cout << "- Radio inicial: 5" << endl;
    cout << "- Perímetro: " << a.perimetro() << endl;
    cout << "- Área: " << a.area() << endl;
    
    // Se modifica el radio a 7
    a.setRadio(7.);
    cout << "\nCírculo de prueba con el radio modificado:" << endl;
    cout << "- Nuevo radio: 7" << endl;
    cout << "- Perímetro: " << a.perimetro() << endl;
    cout << "- Área: " << a.area() << endl;

    // 2. Cuadrado de prueba con los lados de 10
    Cuadrado b = Cuadrado(10.);
    cout << "\nCuadrado de prueba:" << endl;
    cout << "- Lado: 10" << endl;
    cout << "- Perímetro: " << b.perimetro() << endl;
    cout << "- Área: " << b.area() << endl;


    Geometrica* pG = 0;
    cout << "\nDemostración del polimorfismo:" << endl;
    
    pG = &a;
    cout << "- Se usa el puntero como Círculo (Radio 7):" << endl;
    cout << "  Perímetro: " << pG->perimetro() << ", Área: " << pG->area() << endl;

    pG = &b;
    cout << "- Se usa el puntero como Cuadrado (lados 10):" << endl;
    cout << "  Perímetro: " << pG->perimetro() << ", Área: " << pG->area() << endl;

    // 3. Triángulo de prueba
    pG = new Triangulo(5., 6.);
    cout << "\nTriángulo de prueba:" << endl;
    cout << "- Base: 5, Altura: 6" << endl;
    cout << "- Perímetro: " << pG->perimetro() << endl;
    cout << "- Área: " << pG->area() << endl;
    
    cout << "- Dirección de memoria: " << pG << endl;
    delete pG; 

    //  Figuras en las cuales el usuario da los valores
    cout << "\n\n=== CREACIÓN DE FIGURAS POR EL USUARIO ===" << endl;
    int tipo = 0;
    float radio, lado, base, altura;
    radio = lado = base = altura = 0.;

    for (int i = 0; i < 5; i++){
        cout << "Figura para crear Circulo(1), Cuadrado(2), Triangulo(3) o "
                "Pentagono(4)" << endl;
        cin >> tipo;
        switch (tipo) {
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
            cout << "Ingrese la base: ";
            cin >> base;
            cout << "Ahora la altura: ";
            cin >> altura;
            pG = new Triangulo(base, altura);
            break;
        default:
            cout << "Por favor lea bien" << endl;
            break;
        }
        vFig.push_back(pG);
    }

    cout << "El total de figuras creadas: " << vFig.size() << endl;

    for (int i = 0; i < vFig.size(); i++){
        cout << "Perímetro: " << vFig.at(i)->perimetro() << " y área: " << vFig.at(i)->area() << endl;
      }
*/

    // Para probar la intersección de los círculos
    cout << "\n--- PRUEBA DE LA INTERSECCIÓN DE LOS CÍRCULOS ---" << endl;
    
    float r1, x1, y1, r2, x2, y2;
    
    // Primer círculo
    cout << "\nPRIMER CÍRCULO:" << endl;
    cout << "Ingrese el radio: ";
    cin >> r1;
    cout << "Ingrese la coordenada x del centro: ";
    cin >> x1;
    cout << "Ingrese la coordenada y del centro: ";
    cin >> y1;
    
    // Segundo círculo
    cout << "\nSEGUNDO CÍRCULO:" << endl;
    cout << "Ingrese el radio: ";
    cin >> r2;
    cout << "Ingrese la coordenada x del centro: ";
    cin >> x2;
    cout << "Ingrese la coordenada y del centro: ";
    cin >> y2;
    
    // Se crean los círculos
    Circulo circulo1(r1, x1, y1);
    Circulo circulo2(r2, x2, y2);
    
    // Se verifica la intersección
    cout << "\nRESULTADO:" << endl;
    cout << "Círculo 1: Radio = " << r1 << ", Centro en (" << x1 << "," << y1 << ")" << endl;
    cout << "Círculo 2: Radio = " << r2 << ", Centro en (" << x2 << "," << y2 << ")" << endl;
    
    if(circulo1.intersectaCon(circulo2)) {
        cout << "LOS CÍRCULOS SI SE INTERSECTAN" << endl;
    } else {
        cout << "LOS CÍRCULOS NO SE INTERSECTAN" << endl;
    }

    // Se libera la memoria
    for (int i = 0; i < vFig.size(); i++){
        delete vFig.at(i);
    }

    return 0;
}
