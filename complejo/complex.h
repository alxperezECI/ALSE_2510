#include <iostream>

using namespace std;

class Complex{
  double re;
  double im;

public:
  Complex( ); // Constructor por defecto
  Complex(const double &r , const double &i ); // Constructor con parámetros
  ~Complex(); // Destructor

  double angle() const;
  double magnitude() const;
  Complex conjugate() const;

  Complex operator+( const Complex &a );
  Complex operator-( const Complex &a );
  Complex operator*( const Complex &a );
  bool operator==( const Complex &a ); 
  bool operator<( const Complex &a ); 
  bool operator>( const Complex &a ); 

  friend ostream& operator<<(std::ostream& out, Complex a);

  // Adicionaré las funciones get/set
  void Re(const double &r);
  void Im(const double &im);
  double Re();
  double Im();
};
