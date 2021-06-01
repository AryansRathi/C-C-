/*
CH-230-A
a11 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

    Circle c("first circle", 3, 4, 7);
    RegularPolygon r("TRIANGLE", 1, 1, 3);
    Rectangle R("Rectangle", 3, 4, 5, 6);
    Square s("Square", 6, 7, 8);
    cout << "Name of the shape is " << endl;

    R.printName();
    cout << "The Perimeter is " << R.perimeter() << endl;
    cout << "The area is " << R.area() << endl;
    cout << "Name of the shape is " << endl;

    c.printName();
    cout << "The Perimeter is " << c.perimeter() << endl;
    cout << "The area is " << c.area() << endl;

    cout << "Name of the shape is " << endl;
    s.printName();
    cout << "The Perimeter is " << s.perimeter() << endl;
    cout << "The area is " << s.area() << endl;

    cout << "Name of the shape is " << endl;
    r.printName();

    return 0;
}