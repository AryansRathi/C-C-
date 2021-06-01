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
    void setX(int i) { x = i; }
    void print() { cout << x; }
};

class B : public A
{
public:
    B() { setX(10); }
};

class C : public A
{
public:
    C() { setX(20); }
};

class D : public B, public C
{
};

int main()
{
    D d;
    d.B::print();
    cout << "" << endl;
    d.C::print();
    return 0;
}
/*
The compiler says that the print is ambiguous.
This is because both B and c are inherited from A
and they both have print function. So when the program
is compiled the compiler get confused because of the 
two print functions.So to avoid this we can call d.B::print()
and d.C::print(). Which would print 10 and 20 respectively.
*/