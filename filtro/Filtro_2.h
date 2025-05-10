/**
 * Project Untitled
 */



#include <list>
#include <vector>
using namespace std;

class Filtro_2 {
public:  
    Filtro_2(int tamano, float coef[] );
    float aplicar_filtro( float x_n );
    int  getTamano(){ return _tamano;}
private:
    int _tamano; 
    std::list<float> _datos;
    vector<float> _coeficientes;

};

