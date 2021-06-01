/*
CH-230-A
a10 p8.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
    Complex c1(1, -9);
    cout << "The first complex number ";
    c1.print();
    Complex c2(-7, 8);
    cout << "The second complex number ";
    c2.print();
    cout << "conjugate of the first number" << endl;
    c1.con().print();
    cout << "sum is" << endl;
    c1.add(c2).print();
    cout << "Difference is" << endl;
    c1.sub(c2).print();
    cout << "Multiplication is" << endl;
    c1.mul(c2).print();
    return 0;
}