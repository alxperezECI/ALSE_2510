#include <iostream>

using namespace std;

double *limites(const double vec[], const double &cant){
double *lim = new double[2];
lim[0] = vec[0];    //Valor mínimo
lim[1] = vec[0];    //Valor máximo

for (int i = 0; i < cant; i++){
 if (vec[i] < lim[0])
  lim[0] = vec[i];
 if (vec[i] > lim[1])
  lim[1] = vec[i];
}
return lim;
}

int main(){
  double x[]={8,7,6,5,4,9,1,2,3,9.6};

  double *lim = limites(x,10);
  cout << lim <<  " contiene: " << lim[0] << endl;
  cout << lim <<  " contiene: " << lim[1] << endl;

  delete lim;
  return 0;
}
