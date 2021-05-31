/*
CH-230-A
a13 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float img;

public:
    Complex();
    Complex(float real, float img);
    //Complex(Complex &a);
    ~Complex();

    void setreal(float newreal);
    void setimg(float newimg);

    float getreal();
    float getimg();
    friend istream &operator>>(istream&in,Complex &);
    friend ostream &operator<<(ostream&out,const Complex&);

    Complex operator+(Complex );
    Complex operator-(Complex );
    Complex operator*(Complex );
    Complex &operator=(Complex &);
    Complex con();

    void print();
};
#endif // COMPLEX_H