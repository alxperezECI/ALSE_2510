#include <iostream>

using namespace std;

int squares (int);
int squareref (int&);
int squareconstref (const int&);
int multi (int a, int b = 4){
  return a*b;
}

int main(){
  int number = 8;
  cout << "In main (): " <<< &number << endl;
  cout << number << endl;
  cout << square(number) << endl;
  cout << squareref(number) << endl;
  cout << squareconstref(number) << endl;
  cout << number << endl;
  cout << multi(number, number) << endl;
  cout << multi(number) << endl;
  cout << "Ingrese un número real: " << endl;
  cin >> number;
  cout << "El número ingresado es: " << number << endl;

  double vec[20] = {0.0};

  cout << "dirección del vector: " << &vec << endl;
  cout << "dirección del primer elemento del vector: " << &vec[0] << endl;
  cout << "dirección del segundo elemento del vector: " << &vec[1] << endl;
}

int square (int n){
  cout << "In square(): " << &n << endl;
  n*=n;
  return n;
}

int squareref(int &n) {
  cout << "In square(): " << &n << endl;
  n*=n;
  return n;
}

int squareconstref(const int &n){
  cout << "In square(): " << &n << endl;
  return n*n;
}
