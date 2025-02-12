/* Pass-by-value into function (TestPassByValue.cpp) */
#include <iostream>
using namespace std;
 
int square(int);
int squareref(int&);
int squareconstref(const int&);
int multi(int a, int b=4){
  return a*b;
}
 
int main() {
   int number = 8;
   cout <<  "In main(): " << &number << endl;  // 0x22ff1c
   cout << number << endl;         // 8
   cout << square(number) << endl; // 64
   cout << squareref(number) << endl; // 64
   cout << squareconstref(number) << endl; // 64
   cout << number << endl;         // 8 - no change
   cout << multi(number, number) << endl;
   cout << multi(number) << endl;
   cout << "Ingrese un número real: " << endl;
   cin >> number;
   cout << "El número ingresado es: " << number << endl;

   double vec[20] = {0.0};


   cout << "dirección del vector: " << vec << endl;
   cout << "dirección del primer elemento del vector: " << &vec[0] << endl;
   cout << "dirección del segundo elemento del vector: " << &vec[1] << endl;
}
 
int square(int n) {  // non-const
   cout <<  "In square(): " << &n << endl;  // 0x22ff00
   n *= n;           // clone modified inside the function
   return n;
}
int squareref(int &n) {  // non-const
   cout <<  "In square(): " << &n << endl;  // 0x22ff00
   n *= n;           // clone modified inside the function
   return n;
}
int squareconstref(const int &n) {  // non-const
   cout <<  "In square(): " << &n << endl;  // 0x22ff00
   return n * n;
}
