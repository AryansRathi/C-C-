/*
CH-230-A
a12 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "Ring.h"
#include <cmath>
#include <iostream>

Ring::Ring(const char *n, double outer, double inner)
	: Circle(n, outer)
{
	innerradius = inner;
}

Ring::~Ring()
{
}

double Ring::calcArea() const
{
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea() -
			(innerradius * innerradius * M_PI));
}
double Ring::calcPerimeter() const
{
	std::cout << "calcPerimeter of Circle...";
	return (Circle::calcPerimeter() +
			(2 * innerradius * M_PI));
}