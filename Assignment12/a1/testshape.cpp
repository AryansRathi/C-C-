/*
CH-230-A
a12 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;
int main()
{
    Hexagon B("Hexagon 1", 1, 2, 3, "Blue", 9);
    Hexagon G("Hexagon 2", 1, 2, 3, "Green", 15);
    Hexagon A(G);
    A.setcolor("Yellow");
    // First Hexagon
    B.printName();
    cout << "The area is : " << B.area() << endl;
    cout << "The perimeter is : " << B.perimeter() << endl;

    //Second Hexagon
    G.printName();
    cout << "The area is : " << G.area() << endl;
    cout << "The perimeter is : " << G.perimeter() << endl;

    //Third Hexagon
    //This one is copied
    A.printName();
    cout << "The area is : " << A.area() << endl;
    cout << "The perimeter is : " << A.perimeter() << endl;

    return 0;
}