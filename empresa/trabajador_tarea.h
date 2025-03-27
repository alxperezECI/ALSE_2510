#ifndef ESTUDIANTE_TAREA_H
#define ESTUDIANTE_TAREA_H

#include "persona_tarea.h"
#include <vector>

using namespace std;

struct h_extra
{
    char dia;
    float canthoras;
}

class Trabajador : public Persona
{
    float _salario;
    float _totalex;
    float _pmensual;
    vector<h_extra> _horextra;
    Trabajador();
    ~Trabajador();

    public:

    Trabajador(const string &name, const string &ape, const int &docid, const float &salario);

    void horasextra(const char &dia, const float &horas);

    float gethorasex(const char &dia);

    float pagoHextra();

    float pago_mensual();

}

#endif // ESTUDIANTE_TAREA_H