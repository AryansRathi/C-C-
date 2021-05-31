/*
CH-230-A
a13 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "Complex.h"
#include <cmath>
#include <iostream>
using namespace std;
Complex::Complex()
{
    real = 0;
    img = 0;
}
Complex::Complex(float r, float i)
{
    real = r;
    img = i;
}
Complex::~Complex()
{
}

void Complex::setreal(float newreal)
{
    real = newreal;
}
void Complex::setimg(float newimg)
{
    img = newimg;
}
float Complex::getreal()
{
    return real;
}
float Complex::getimg()
{
    return img;
}
void Complex::print()
{
    if (img)
    {
        cout << noshowpos << real << showpos << img << "i" << endl;
    }
    else
    {
        cout << noshowpos << real << showpos << endl;
    }
}
istream &operator>>(istream &in, Complex &a)
{
    in >> a.real;
    in >> a.img;
    return in;
}
ostream &operator<<(ostream &out, const Complex &a)
{
    if (a.img)
        out << noshowpos << a.real << showpos << a.img << "i" << endl;
    else
        out << noshowpos << a.real << endl;
    return out;
}
Complex Complex::operator+(Complex a)
{
    Complex Res;
    Res.real = real + a.real;
    Res.img = img + a.img;
    return Res;
}
Complex Complex::operator-(Complex a)
{
    Complex Res;
    Res.real = real - a.real;
    Res.img = img - a.img;
    return Res;
}
Complex Complex::operator*(Complex a)
{
    Complex Res;
    Res.real = real * a.real;
    Res.img = img * a.img;
    return Res;
}
Complex& Complex::operator=(Complex &a)
{
    this->real = a.real;
    this->img = a.img;
    return *this;
}
