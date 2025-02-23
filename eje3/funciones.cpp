#include <stdio.h>
#include <math.h>


double funeval2( const double &x ){
  // El puntero que permite llegar a esta función tiene la forma
  // de double (*p)(const double&)
   return sin(x/10) + cos(3*x/100);
}

double funeval( const double &x ){
  // El puntero que permite llegar a esta función tiene la forma
  // de double (*p)(const double&)
  return sin(M_PI*5*x/100);
}

 //La nueva función: cos(x * Pi / 25)
double funeva3(const double &x) {
    return cos(x * M_PI / 25);
}


void cruces_cero( double (*f)(const double &), const double &xl, const double &xu ){
  // El primer parámetro de esta función es un puntero a una función de la forma
  // double (*p)(const double&)
  double anterior = 0., actual;  
  for(int i = xl; i<xu; i++){
    actual = f( (double)i );
    if((anterior >= 0 && actual < 0 ) || (anterior < 0 && actual >= 0))
      printf("Hay un cruce por cero en: %d\n",i);
    anterior = actual;
  }
}

int main(){
  cruces_cero(funeval, 0, 100); // En este caso se llama la función Sin(M_PI*x/20)
  cruces_cero(funeval2, 0, 100);// En este otro a sin(x/10)+cos(3*x/100)
  cruces_cero(funeva3, 20, 80); // En este caso se llama la nueva función para el rango entre 20 y 80
  return 0;
}


/*
int main(){
  double anterior, actual, constante;
  anterior = actual = 0.;
  constante = 1.1 * M_PI * 5 / 100;

  for(int i=0; i<100; i++){
    actual = sin(constante * i);
    if((anterior >= 0 && actual < 0 ) || (anterior < 0 && actual >= 0))
      printf("Hay un cruce por cero en: %d\n",i);
    anterior = actual;
  }
  return 0;
}
*/
