/**
 * Project Untitled
 */


#ifndef _FILTRO_H
#include <list>

class Filtro {
public:  
    Filtro(int tamano, float coef[] );
    void aplicar_filtro( float x_n );
    int  getTamano(){ return _tamano;}
private: 
    int _tamano;
    std::list<float> _datos;
    std::vector<float> _coeficientes;

};

#endif //_FILTRO_H
