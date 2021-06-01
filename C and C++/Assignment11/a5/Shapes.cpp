// please refer to shapes.h for methods documentation

/*
CH-230-A
a11 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Shapes.h"
#include <cmath>
#include <iostream>

using namespace std;

Shape::Shape()
{
    name = ("Default shape");
}
Shape::Shape(const string &n) : name(n)
{
}

void Shape::printName() const
{
    cout << name << endl;
}

void Shape::setname(std::string newname)
{
    name = newname;
}
string Shape::getname()
{
    return name;
}
CenteredShape::CenteredShape() : Shape("Default centered Shape")
{
    x = 0;
    y = 0;
}
CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n)
{
    x = nx;
    y = ny;
}
void CenteredShape::setx(double newx)
{
    x = newx;
}
void CenteredShape::sety(double newy)
{
    y = newy;
}
double CenteredShape::getx()
{
    return x;
}
double CenteredShape::gety()
{
    return y;
}
RegularPolygon::RegularPolygon() : CenteredShape("Default Regular Polygon", 0, 0)
{
    EdgesNumber = 0;
}
RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl) : CenteredShape(n, nx, ny)
{
    EdgesNumber = nl;
}
void RegularPolygon::seted(int newed)
{
    EdgesNumber = newed;
}
int RegularPolygon::getEdgesNumber()
{
    return EdgesNumber;
}
Circle::Circle() : CenteredShape("Default Circle", 0, 0)
{
    Radius = 0;
}
Circle::Circle(const string &n, double nx, double ny, double r) : CenteredShape(n, nx, ny)
{
    Radius = r;
}
void Circle::setradius(double newradius)
{
    Radius = newradius;
}
double Circle::getRadius()
{
    return Radius;
}
double Circle::area()
{
return M_PI * Radius * Radius;
}
double Circle::perimeter()
{
    return 2 * Radius * Radius;
}
Rectangle::Rectangle() : RegularPolygon("Default Rectangle", 0, 0, 0)
{
    nwidth = 0;
    nheight = 0;
}
Rectangle::Rectangle(const string &ne, double x, double y, double width, double height) : RegularPolygon(ne, x, y, 0)
{
    nwidth = width;
    nheight = height;
}
void Rectangle::setnheight(double newheight)
{
    nheight = newheight;
}
void Rectangle::setnwidth(double newwidth)
{
    nwidth = newwidth;
}
double Rectangle::getnheight()
{
    return nheight;
}
double Rectangle::getnwidth()
{
    return nwidth;
}
double Rectangle::area()
{
    return nwidth * nheight;
}
double Rectangle::perimeter()
{
    return 2 * (nwidth + nheight);
}
Square::Square() : Rectangle("Default Square", 0, 0, 0, 0)
{
    nside = 0;
}
Square::Square(const string &ne, double x, double y, double side) : Rectangle(ne, x, y, side,side)
{
    nside = side;
}
void Square::setnside(double newside)
{
    nside = newside;
}
double Square::getnside()
{
    return nside;
}
double Square::area()
{
    return nside * nside;
}
double Square::perimeter()
{
    return (4 * nside);
}