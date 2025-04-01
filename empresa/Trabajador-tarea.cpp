#include "persona-tarea2.h"
#include "Trabajador-tarea.h"
using namespace std;

Trabajador::Trabajador(const string &name, const string &ape, const int &docid, const double &salario_mes)
        :Persona(name, ape, docid), _salario_mes(salario_mes){}


void Trabajador::agregarhoras(const char &dia, const float &horas){
    h_extra c;
    c.dia = dia;
    c.horas = horas;
    _horas_extra.push_back(c);
}


double Trabajador::obtener_horasdia(const char &dia){

    if( _horas_extra.size() == 0)   
        return 0.0;
    
    for(int j = 0; j < _horas_extra.size(); j++)
    {
        if(_horas_extra[j].dia == dia)
            return _horas_extra[j].horas;
    }
    return 0.0;
}


double Trabajador::pago_mensual(){

    double sum;

    for(int i = 0; i < _horas_extra.size(); i++)
    {
        sum += _horas_extra[i].horas;
    }    
    return (_salario_mes + (sum*(_salario_mes/240)));
   
}

void Trabajador::determinar_salario(const double &salario){
    _salario_mes = salario;
}


double Trabajador::salario(){
    return _salario_mes;
}

ostream& operator<<(ostream &os, Trabajador &t){
    os << t.DocID() << " " << t.Nombre() << " " << t.Apellido() << " Pago: " << t.pago_mensual() << endl;
    return os;
}

