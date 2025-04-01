#include "persona.h"
#include <vector>
using namespace std;

//A diferencia del class el struct es por defecto public
struct h_extra
{
    char dia;
    float horas_extra;
};

class Trabajador:public Persona
{
    vector<h_extra> vec_horas_extras;
    double _salario;
    Trabajador();

public:
    Trabajador(const string &nombre, const string &apellido,
               const int &docid, const double &sal);
    void Horas_extra(const char &d, const float &cant);
    double Horas_extra(const int &i);
    void Salario(const double &s);
    double Salario() const;
    double Pago_mensual() const;
    friend ostream &operator<<(ostream &os, Trabajador &t);
};