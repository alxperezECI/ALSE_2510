#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <vector>
#include <string>

#include "persona-tarea.h"

using namespace std; 

class Estudiante : public Persona {
    int ID;
    vector<float> notas;
    double _promedio;
public:
    // Constructor
    Estudiante(const string &nombre, const string &apellido, const int &cedula, const int &ID);
    // Métodos de la clase Estudiante
    double promedio();
    void agregarnota(const double &nota);
    float getNota(int i) const;
    int cantnotas() const;
    int getID() const;
    friend ostream& operator<<(ostream &out, const Estudiante &es);
};

#endif // ESTUDIANTE_H