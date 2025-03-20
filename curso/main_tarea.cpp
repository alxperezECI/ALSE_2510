#include "estudiante_tarea.h"
#include <iostream>

using namespace std;

int main()
{
    vector<Estudiante> curso;
    float max_nota = 0;

    Estudiante e1 = Estudiante("Juan", "Perez", 123, 1);

    e1.agregar_nota(4.5);
    e1.agregar_nota(3.5);
    e1.agregar_nota(2.5);

    curso.push_back(e1);

    Estudiante e2 = Estudiante("Maria", "Gomez", 456, 2);
    e2.agregar_nota(1.5);
    e2.agregar_nota(2.5);
    e2.agregar_nota(5);

    curso.push_back(e2);

    for (int i = 0; i < curso.size(); i++)
    {
        cout << "El Promedio del estidiante " << i + 1 << " es: " << curso[i].promedio() << endl;
    }

    for (int i = 0; i < curso.size(); i++)
    {
        max_nota = (max_nota < curso[i].mayor_nota()) ? curso[i].mayor_nota() : max_nota;
    }

    cout << "La mayor nota del curso es: " << max_nota << endl;

    cout << "Presentación de los estudiantes: " << endl;

    for (int i = 0; i < curso.size(); i++)
    {
        cout << curso[i] << endl;
    }

    return 0;
}