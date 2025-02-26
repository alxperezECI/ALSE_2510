#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

void max_min(const double x[], const int &cant, double &min, double &max){
  //Esta función encuentra los valores mínimos y máximos de un vector.
    min = x[0];
    max = x[0];
  
    for(int i = 1; i < cant; i++){
      if(x[i] < min){
        min = x[i];
      }
  
      if(x[i] > max){
        max = x[i];
      }
    }
  }
  
void histo( const double x[], const int &cant, const int &num_cat ){
  int *categorias = new int[num_cat];

  for(int i=0; i < num_cat; i++)
    categorias[i] = 0;

  double vec_min, vec_max;

  max_min(x, cant, vec_min, vec_max);

  double delta = (vec_max - vec_min) / num_cat;

  for(int i = 0; i < cant; i++){
    for(int j = 0; j < num_cat; j++){
      if( x[i] <= vec_min + delta*(j+1) ){
        categorias[j]++;
        break;
      }
    }
  }
  cout << "La distribución de los valores en las " << num_cat << " categorías es:" << endl;
  for(int i = 0; i < num_cat; i++)
     cout << "Entre " << vec_min + delta*i << " y " << vec_min + delta*(i+1) << " hay " << categorias[i] << " números." << endl;

  delete[] categorias;
}
  
double punto1( double *x, double *y, double *r, const int &cant ){
  // En esta función se hace el producto elemento a elemento de los dos vectores y se devuelve
  // la suma de todos los valores del vector de resultados.
  double aux = 0.;

  for(int i = 0; i < cant; i++){
    *r = *x * *y;
    aux += *r;
    r++; x++; y++;
  }
    return aux;
}

int main(){
  srand(time(0));
  double v1[100], v2[100], vres[100];

//Este ciclo se usa para inicializar todos los valores del v1 con el valor de 3.0
  for(int i=0; i<100;i++){
    v1[i] = 3.0;
    v2[i] = 50 + rand() % 100;
  }

  cout << "La suma total con punto1 es: " <<  punto1(v1, v2, vres, 100) << endl;

  for(int i=0; i<100;i++)
    cout << "vres[" << i << "] = " << vres[i] << endl;
  
  histo(vres, 100, 3);

  return 0;
}