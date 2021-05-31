/*
CH-230-A
a13 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "Complex.h"
#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    ifstream in1, in2;
    ofstream out("output.txt", ios::out);
    Complex c1, c2;
    in1.open("in1.txt", ios::in);
    if (in1.fail())
    {
        exit(0);
    }
    in2.open("in2.txt", ios::in);
    if (in2.fail())
    {
        exit(1);
    }
    in1 >> c1;
    in2 >> c2;

    out << "The sum is " << c1+c2 << endl;
    out << "The difference is " << c1-c2<< endl;
    out << "The product is " << c1*c2 << endl;

    cout << "The sum is " << c1+c2 << endl;
    cout << "The difference is " << c1-c2 << endl;
    cout << "The product is " << c1*c2 << endl;

    in1.close();
    in2.close();
    out.close();
    return 0;
}