/*
CH-230-A
a12 p7.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <cstring>
#include <ctime>
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Ring.h"
#include "Square.h"
int main()
{
	int rand;
	int obj;
	int count;
	string color[4]{"RED", "BLACK", "BLUE", "VIOLET"};
	srand(static_cast<unsigned int>(time(0)));
	for (count = 0; count < 25; count++)
	{
		rand = (rand() % 4);
		obj = (rand() % 4);

		if (obj == 0) // Rectangle
		{
			//Get 2 random nrs
			int obj1 = (rand() % 95) + 5;
			int obj2 = (rand() % 95) + 5;
			//Create rect and print perim and area
			Rectangle a(colors[rand], (double)obj1, (double)obj2);
			cout << "Rectangle " << colors[rand] << " Perimeter: "
				 << a.perimeter() << " Area: " << a.area() << endl;
		}
		else if (obj == 1) // Square
		{
			int obj1 = (rand() % 95) + 5;
			Square a(colors[rand], (double)obj1);
			cout << "Square " << colors[rand] << " Perimeter: "
				 << a.perimeter() << " Area: " << a.area() << endl;
		}
		else if (obj == 2) //Circle
		{
			int obj1 = (rand() % 95) + 5;
			Circle a(colors[rand], (double)obj1);
			cout << "Circle " << colors[rand] << " Perimeter: "
				 << a.perimeter() << " Area: " << a.area() << endl;
		}
		else if (obj == 3) //Ring
		{
			int obj1 = (rand() % 95) + 5;
			int obj2 = (rand() % 95) + 5;
			if (obj1 < obj2)
				swap(obj1, obj2);
			// Create ring and print perim and area
			Ring a(colors[rand], (double)obj1, (double)obj2);
			cout << "Ring " << colors[rand] << " Perimeter: "
				 << a.perimeter() << " Area: " << a.area() << endl;
		}
	}
	return 0;
}