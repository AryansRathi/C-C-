/*
CH-230-A
a12 p7.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "Square.h"
#include <iostream>
using namespace std;
Square::Square(const char *n, double a, double b, double s) : Rectangle(n, a, b)
{
    side = s;
}
Square::~Square()
{
}
double Square::calcArea() const
{
    cout << "Area of square" << endl;
    return side * side;
}
double Square::calcPerimeter() const
{
    cout << "Perimeter of Square" << endl;
    return 4 * side;
}
