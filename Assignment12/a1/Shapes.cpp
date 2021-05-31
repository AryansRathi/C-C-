/*
CH-230-A
a12 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;

Shape::Shape(const string &n) : name(n)
{
}

void Shape::printName() const
{
	cout << name << endl;
}
Shape::Shape(const Shape &a)
{
	name = a.name;
}
CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n)
{
	x = nx;
	y = ny;
}
CenteredShape::CenteredShape(const CenteredShape &a) : Shape(a)
{
	x = a.x;
	y = a.y;
}

RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl) : CenteredShape(n, nx, ny)
{
	EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(const RegularPolygon &a) : CenteredShape(a)
{
	EdgesNumber = a.EdgesNumber;
}

Circle::Circle(const string &n, double nx, double ny, double r) : CenteredShape(n, nx, ny)
{
	Radius = r;
}
Hexagon::Hexagon(const string &n, double nx, double ny, int ni, const string &r, float nf) : RegularPolygon(n, nx, ny, ni)
{
	side = nf;
	color = r;
}
Hexagon::Hexagon(const Hexagon &a) : RegularPolygon(a)
{
	side = a.side;
	color = a.color;
}
Hexagon::~Hexagon()
{
}
void Hexagon::setside(float newside)
{
	side = newside;
}
void Hexagon::setcolor(const string &newcolor)
{
	color = newcolor;
}
string Hexagon::getcolor()
{
	return color;
}
float Hexagon::getside()
{
	return side;
}
double Hexagon::area()
{
	return ((5.196152423 / 2) * side * side);
}
double Hexagon::perimeter()
{
	return 6 * side;
}