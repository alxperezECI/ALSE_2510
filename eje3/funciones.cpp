//By: Juan Cortés y Dickson Trujillo
#include <stdio.h>
#include <math.h>

double funeval3( const double &x ){
  // El puntero que permite llegar a esta función tiene la forma
  // de double (*p)(const double&)
   return cos(x*M_PI/25);
}

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
  printf("Cruces por cero de y = sin(M_PI*x/20):\n");
  cruces_cero(funeval, 0, 100); // En este caso se llama la función Sin(M_PI*x/20)
  printf("Cruces por cero de y = sin(x/10)+cos(3*x/100):\n");
  cruces_cero(funeval2, 0, 100); // En este otro a sin(x/10)+cos(3*x/100)
  printf("Cruces por cero de y = cos(M_PI*x/25):\n");
  cruces_cero(funeval3, 0, 100); // En este tercer caso a cos(M_PI*x/25)
  return 0;
}