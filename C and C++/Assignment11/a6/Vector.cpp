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

Vector::Vector()
{
    size = 0;
    pointer = new double[0];
}
Vector::Vector(int nsize, double *&npointer)
{
    size = nsize;
    pointer = npointer;
}
Vector::Vector(const Vector &a)
{
    size = a.size;
    pointer = a.pointer;
}
Vector::~Vector()
{
    delete[] pointer;
}
void Vector::setsize(int newsize)
{
    size = newsize;
}
void Vector::setpointer(double *&newpointer)
{
    pointer = newpointer;
}
int Vector::getsize()
{
    return size;
}
double *Vector::getpointer()
{
    return pointer;
}
double Vector::norm() const
{
    double sum;
    for (int i = 0; i < size; i++)
    {
        sum = sum + pointer[i] * pointer[i];
    }
    return sqrt(sum);
}
Vector Vector::add(const Vector &a) const
{
    double *npointer = new double[size];
    for (int i = 0; i < size; i++)
    {
        npointer[i] = pointer[i] + a.pointer[i];
    }
    Vector sum(size, npointer);
    return sum;
}

Vector Vector::product(const Vector &p) const
{
    double *npointer=new double[size];
    for (int i = 0; i < size; i++)
    {
        npointer[i] = pointer[i] * p.pointer[i];
    }
    Vector product(size,npointer);
    return product;
}

Vector Vector::sub(const Vector &b) const
{

    double *npointer = new double[size];
    for (int i = 0; i < size; i++)
    {
        npointer[i] = pointer[i] - b.pointer[i];
    }
    Vector sub(size, npointer);
    return sub;
}

void Vector::print()
{
    cout << "The vector is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << pointer[i] << endl;
    }
}