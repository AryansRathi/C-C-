/*
CH-230-A
a12 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "fraction.h"
#include <iostream>

using namespace std;

int main(void)
{
	Fraction a;
	Fraction b;
	cout << "Enter Fraction" << endl;
	cin >> a;
	cout << "Enter Fraction" << endl;
	cin >> b;
	cout << "" << a << endl;
	cout << "" << b << endl;
	cout << "The product is " << a * b << endl;
	cout << "The quotient is " << a / b << endl;
	cout << "The sum is " << a + b << endl;
	cout << "The difference is " << a - b << endl;
	if (a > b)
	{
		cout << "Fraction A is greater than B " << endl;
		cout << a << endl;
	}
	else
	{
		cout << "Fraction B is greater than A " << endl;
		;
		cout << b << endl;
	}
	return 0;
}