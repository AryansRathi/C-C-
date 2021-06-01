/*
CH-230-A
a11 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Box.h"
#include <iostream>
using namespace std;
Box::Box()
{
    height = 0;
    depth = 0;
    width = 0;
}
Box::Box(float h, float d, float w)
{
    height = h;
    depth = d;
    width = w;
}
Box::~Box()
{
}
void Box::setheight(float newheigth)
{
    height = newheigth;
}
void Box::setwidth(float newwidth)
{
    width = newwidth;
}
void Box::setdepth(float newdepth)
{
    depth = newdepth;
}

float Box::getdepth()
{
    return depth;
}
float Box::getheight()
{
    return height;
}
float Box::getwidth()
{
    return width;
}
Box ::Box(const Box &a)
{
    height = a.height;
    depth = a.depth;
    width = a.width;
}
float Box::vol()
{
    return height * width * depth;
}
void Box::print()
{
    cout << "The volume is " << vol() << endl;
}
