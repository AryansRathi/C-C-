/*
CH-230-A
a10 p8.[c or cpp or h]
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
Complex Complex::add(Complex &a)
{
    Complex res(real + a.getreal(), img + a.getimg());
    return res;
}

Complex Complex::sub(Complex &a)
{
    Complex res(real - a.getreal(), img - a.getimg());
    return res;
}
Complex Complex::mul(Complex &a)
{
    Complex res(real * a.getreal(), img * a.getimg());
    return res;
}

Complex Complex::con()
{
    Complex res(real, -img);
    return res;
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
