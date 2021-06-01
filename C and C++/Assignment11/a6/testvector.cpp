/*
CH-230-A
a11 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Vector.h"
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double *pointer1 = new double[2]{1, 2};

    Vector v1;
    cout << "Vector V1 by default constructor" << endl;
    v1.print();
    v1.setpointer(pointer1);
    cout << "Vector V1 after setting the pointer" << endl;
    v1.print();

    cout << "Vector v1" << endl;
    v1.print();

    cout << "Vector v2" << endl;
    Vector v2(v1);
    v2.print();

    cout << "Norm of vector v2" << endl;
    cout << v2.norm() << endl;

    cout << "Sum of vector v1 and v2" << endl;
    v1.add(v2).print();

    cout << "Product of vector v1 and v2" << endl;
    v1.product(v2).print();

    cout << "Difference of vector v1 and v2" << endl;
    v1.sub(v2).print();

    return 0;
}