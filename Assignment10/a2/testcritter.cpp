/*
CH-230-A
a10 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Critter.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	Critter c;

	string name;

	int hunger;

	double height;

	int boredom;

	cout << endl
		 << "Please enter data: " << endl;

	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	c.setName(name);

	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "Height in cm: ";
	cin >> height;
	c.setHeight(height);

	cout << "Boredom: ";
	cin >> boredom;
	c.setBoredom(boredom);
	cout << "You have created:" << endl;

	c.print();
	return 0;
}