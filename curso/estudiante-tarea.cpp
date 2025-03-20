#include "estudiante-tarea.h"
#include "persona-tarea.h"


Estudiante::Estudiante(const string &nombre, const string &apellido, const int &cedula, const int &ID)
    : Persona(nombre, apellido, cedula), ID(ID) {
        _promedio = 0.0;
    }


double Estudiante::promedio() {
    if (_promedio == 0.0){
        for(int i =0; i < notas.size(); i++)
            _promedio += notas[i];
        }
    return (_promedio /= notas.size());
}

void Estudiante::agregarnota(const double &nota){
    notas.push_back(nota);
}

int Estudiante::getID() const{
    return ID;
}

float Estudiante::getNota(int i) const{
        return notas[i - 1];
    
}

int Estudiante::cantnotas() const{
    return notas.size();

}


ostream& operator<<(ostream &out, const Estudiante &es){
    out << "Nombre: " << es.Nombre() << " Apellido: " << es.Apellido() << " Documento: " << es.DocID() << " ID: " << es.getID() << " Promedio: " << es._promedio;
    return out;
}