#ifndef TRABAJADOR_TAREA_H
#define TRABAJADOR_TAREA_H

#include "persona-tarea2.h"
#include <vector>

struct h_extra
{
    char dia;
    float horas;
};



class Trabajador : public Persona{
    double _salario_mes;
    vector<h_extra> _horas_extra;
public:
    Trabajador(const string &name, const string &ape, const int &docid, const double &salario_mes);
    void agregarhoras(const char &dia, const float &horas);
    double obtener_horasdia(const char &dia);
    double pago_mensual();
    void determinar_salario(const double &salario);
    double salario();
    friend ostream &operator<<(ostream &os, Trabajador &t);

};



#endif