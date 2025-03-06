#include <complex>
#include <iostream>


using namespace std;

int main(int argc, char** argv){
  complex<double> a(3.8, 2.3), b(2.5, -3.2), c;
  complex<double> d(b);

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  
  complex<double> e = a + b;
  cout << e << endl;

 // Cambiar los valores a c a través de su métodos (funciones)
  c.real( 89.98 );
  c.imag( -77.77 );

  cout << c << endl;
  // Imprimir las magnitudes de a, b y c.
  cout << "La magnitud de " << a << " es de " << abs(a) << endl;
  cout << "La magnitud de " << b << " es de " << abs(b) << endl;
  cout << "La magnitud de " << c << " es de " << abs(c) << endl;
  cout << "El conjugado de " <<  c << " es " <<  conj(c) << endl;

  return 0;
}

