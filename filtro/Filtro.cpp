#include "Filtro.h"

using namespace std;

Filtro::Filtro(){
}

Filtro::Filtro(const int &n): _tamaño(n) {}

void Filtro::agregar_muestra (const float &m){
    if (_memoria.size() == _tamaño){
            _memoria.pop_back();
            _memoria.push_front(m);

    }
    else
        _memoria.push_front(m);
}
float Filtro::salida(){
    float acum = 0;
    if (_memoria.empty())
        return 0.0;
    for (const float &m : _memoria)
        acum += m;
    return acum/ _memoria.size();
}


