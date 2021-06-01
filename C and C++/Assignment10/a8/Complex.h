/*
CH-230-A
a10 p8.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
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
    Complex(Complex &a);
    ~Complex();

    void setreal(float newreal);
    void setimg(float newimg);

    float getreal();
    float getimg();

    Complex add(Complex &a);
    Complex sub(Complex &a);
    Complex mul(Complex &a);
    Complex con();

    void print();
};
