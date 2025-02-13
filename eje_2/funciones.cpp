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

   double *p = &vec[0];
   for(int i = 0; i < 13;i++)
       p++;
   
   *p = 89.78654;

   cout << "El valor de vec[13] es: " << vec[13] << endl;
   cout << "El valor de vec[12] es: " << vec[12] << endl;
   cout << "El valor de vec[14] es: " << vec[14] << endl;

   float *pf = (float*) &vec[0];
   for(int i = 0; i < 13;i++)
       pf++;
   
   *pf = 89.78654;

   for(int i = 0; i<20; i++)
      cout << "El valor de vec[" << i << "] es: " << vec[i] << endl;


   return 0;
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
