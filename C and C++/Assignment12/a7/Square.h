/*
CH-230-A
a12 p7.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "Rectangle.h"
#include <iostream>
using namespace std;
class Square : public Rectangle
{
private:
	double side;

public:
	Square(const char *n, double a, double b, double s);
	~Square();
	double calcArea() const;
	double calPerimeter() const;
};