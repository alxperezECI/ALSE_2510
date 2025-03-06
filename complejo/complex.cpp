#include <iostream>
#include "complex.h"
#include <cmath>

using namespace std;

void Complex::Re(const double &r)
{
  re = r;
}

void Complex::Im(const double &i)
{
  im = i;
}

double Complex::Re()
{
  return re;
}

double Complex::Im()
{
  return im;
}

Complex::Complex()
{
  re = im = 0.;
}

Complex::Complex(const double &r, const double &i)
{
  re = r;
  im = i;
}

Complex::~Complex(){
  //cout << "Se ha llamado el destructor.\n";
}

double Complex::angle() const
{
  return atan2(im, re);
}

double Complex::magnitude() const
{
  return sqrt(re*re + im*im);
}

Complex Complex::conjugate() const
{
  Complex r;
  r.re = re;
  r.im = -im;
  return r; // Complex(re, -im);
}

Complex Complex::operator+( const Complex &a )
{
  Complex res;
  res.re = re + a.re;
  res.im = im + a.im;
  return res;
}

Complex Complex::operator-( const Complex &a )
{
  Complex res;
  res.re = re - a.re;
  res.im = im - a.im;
  return res;
}

Complex Complex::operator*( const Complex &a )
{
  Complex res;
  res.re = re * a.re - im * a.im;
  res.im = re * a.im + im * a.re;
  return res;
}

bool Complex::operator==( const Complex &a )
{
  if( re == a.re && im == a.im )
  {
    return true;
  }
  return false;
}

bool Complex::operator<( const Complex &a )
{
  if( magnitude() < a.magnitude() )
    return true;

  return false;
}

bool Complex::operator>( const Complex &a )
{
  if( magnitude() > a.magnitude() )
    return true;

  return false;
}


ostream& operator<<(ostream& out, Complex a)
{
  out << a.re << (a.im > 0 ? " + " : " - ") << abs(a.im) << "j";
  return out;
}
