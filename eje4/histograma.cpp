#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
/** Esta función calcula la frecuencia de los datos contenidos en el vector x 
  * dividida en un número de categorías de igual rango determinada por 
  * el parámetro cant.
*/
void histo( const double x[], const int &cant, const int &num_cat){
  int *categorias = new int[num_cat];  // Vector para contar elementos dentro de cada
				       // Categoria
  double vec_min, vec_max;

  vec_min = ;  // Encuentra el mínimo dentro del vector x
  vec_max = ;  // Encuentra el máximo dentro del vector x

  double delta = (vec_max - vec_min) / num_cat;
  for(int i =0; i < cant; i++){
    if(
  }

}

int main(){
  srand(time(0));
  double v1[100], v2[100], vres[100];

  for(int i=0; i<100;i++){
    v1[i] = 3.;
    v2[i] = 50 + rand() % 100;
  }

  cout << "La suma total con punto1 es: " <<  punto1(v1, v2, vres, 100) << endl;
  cout << "La suma total con punto2 es: " <<  punto2(v1, v2, vres, 100) << endl;

  for(int i=0; i<100;i++)
    cout << "vres[" << i << "] = " << vres[i] << endl;

  return 0;
}
