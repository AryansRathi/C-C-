/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
/*
CH-230-A
a11 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape
{                     // base class
private:              // private access modifier: could also be protected
    std::string name; // every shape will have a name
public:
    Shape(const std::string &); // builds a shape with a name
    Shape();                    // empty shape
    Shape(const Shape &);       // copy constructor

    void printName() const; // prints the name
    void setname(std::string newname);
    std::string getname();
};

class CenteredShape : public Shape
{ // inherits from Shape
private:
    double x, y; // the center of the shape
public:
    CenteredShape(const std::string &, double, double); // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape &);
    void move(double, double); // moves the shape, i.e. it modifies it center

    void setx(double newx);//using setter
    void sety(double newy);//using setter

    double getx();//using getter
    double gety();//using getter
};

class RegularPolygon : public CenteredShape
{ // a regular polygon is a centered_shape with a number of edges
private:
    int EdgesNumber;

public:
    RegularPolygon(const std::string &, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon &);
    void seted(int newed);
    int getEdgesNumber();
};

class Circle : public CenteredShape
{ // a Circle is a shape with a center and a radius
private:
    double Radius;

public:
    Circle(const std::string &, double, double, double);
    Circle();
    Circle(const Circle &);

    void setradius(double newradius);
    double getRadius();

    double perimeter();
    double area();
};
class Rectangle : public RegularPolygon
// a Rectangle is a shape with RegularPolygon 
{
private:
    double nwidth;
    double nheight;

public:
    Rectangle();
    Rectangle(const std::string &n, double nx, double ny, double nwidth, double nheight);
    Rectangle(const Rectangle &);

    void setnwidth(double newwidth);
    void setnheight(double newheight);

    double getnwidth();
    double getnheight();

    double perimeter();
    double area();
};
class Square : public Rectangle
//a sqaure is a Shape with Rectangle
{
private:
    double nside;

public:
    Square();
    Square(const std::string &n, double nx, double ny, double nside);
    Square(const Square &);

    void setnside(double newside);
    double getnside();

    double perimeter();
    double area();
};
#endif