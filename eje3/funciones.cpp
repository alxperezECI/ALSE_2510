#include <stdio.h>
#include <math.h>


double funeval2( const double &x ){
   return sin(10*x) + cos(3*x);
}

double funeval( const double &x ){
  return sin(M_PI*5*x/100);
}

void cruces_cero(const double &xl, const double &xu ){
  double anterior = 0., actual;  
  for(int i = xl; i<xu; i++){
    actual = funeval( (double)i );
    if((anterior >= 0 && actual < 0 ) || (anterior < 0 && actual >= 0))
      printf("Hay un cruce por cero en: %d\n",i);
    anterior = actual;
  }
}

int main(){
  cruces_cero(0, 100);
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
