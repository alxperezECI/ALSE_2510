#include <iostream>
#include<math.h>

using namespace std;

double fx (const double &x){
  return (sin(10*x) + cos(3*x));

}

double fx2 (const double  &x){
  return (cos(M_PI*x/25));
}

void cruces_cero (double (*f)(const double &), const double &Li, const double &Ls){
  double anterior = 0;
  double actual = 0;
  for (int i = Li ; i<Ls ; i++){
    if (i > 0){
	actual = f((double) i);
	if ((anterior >= 0 && actual< 0) || (anterior < 0 && actual >= 0)){
	  cout << "Hay un cruce por cero en: " << i << endl;
	}
	anterior = actual;
    }
  }
}

int main () {
  cruces_cero(fx, 0, 100);
  //Aqui queda agregado la busqueda de ceros para coseno(pi*x/25)
  cout << "------------SEGUNDA FUNCION-------------- " <<  endl;
  cruces_cero(fx2, 0, 20);
  return 0;
}


