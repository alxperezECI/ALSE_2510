#include <iostream>
#include "estudiante.h"
#include "persona.h"
using namespace std;

int main()
{
    vector<Estudiante> estudiantes;
    double promedio_curso = 0.0;

    Estudiante e1("Juan", "Perez", 123456, 1);
    e1.agregarNota(3.5);
    e1.agregarNota(4.5);
    e1.agregarNota(5.0);
    cout << e1 << endl;

    estudiantes.push_back(e1);
    
    vector<Estudiante>::iterator it;
    for(it = estudiantes.begin(); it != estudiantes.end(); it++)
    {
        promedio_curso += it->Promedio();
    }
    cout << "Promedio del curso: " << promedio_curso / estudiantes.size() << endl;  

    
    return 0;
}