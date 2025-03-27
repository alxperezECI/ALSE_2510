#include <iostream>
#include <vector>
#include "estudiante.h"
#include <string>
// GRUPO: JULIANA TUTA Y ANGEL PEDREROS

int main() {
    Estudiante est1("Juliana", "Tuta", 123456, 1);
    Estudiante est2("Angel", "Pedreros", 654321, 2);
    est1.promedio();
    est1.agregarnota(4.5);
    est1.agregarnota(3.5);
    est1.agregarnota(5.0);
    est2.agregarnota(4.0);
    est2.agregarnota(3.0);
    est2.agregarnota(2.5);
    cout << "Las notas de " << est1.Nombre() << " son:" << endl;
    for(int i =0; i < est1.cantnotas(); i++)
        	cout << (i + 1) << ") " << est1.getNota(1) << endl;
    cout << est1 << endl;
    cout << est2 << endl;
    return 0;
}

