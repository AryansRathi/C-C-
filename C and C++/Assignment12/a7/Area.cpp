/*
CH-230-A
a12 p7.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Area.h"
#include <cstring>
#include <iostream>
using namespace std;

Area::Area(const char *n)
{
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

Area::~Area()
{
}

void Area::getColor() const
{
	cout << "\n"
		 << color << ": ";
}
