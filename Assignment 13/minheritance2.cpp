/*
CH-230-A
a13 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int i) { x = i; }
    void print() { cout << x; }
};

class B : virtual public A
{
public:
    B() : A(10) {}
};

class C : virtual public A
{
public:
    C() : A(10) {}
};

class D : public B, public C
{
public:
    D() : A(10) {}
};

int main()
{
    D d;
    d.print();
    return 0;
}
/*
The erros were
use of deleted function 'D::D()'
no matching function for call to 'A::A()'
The errors occur because there is no default constructor 
defined in class A which class D call on.
To fix this create a default constructor in class D that
initiates a base class A and its paramatric constructor
*/