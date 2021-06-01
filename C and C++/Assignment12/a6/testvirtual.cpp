/*
CH-230-A
a12 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Ring.h"
#include "Square.h"
const int num_obj = 6;
int main()
{
	Area *list[num_obj];   // (1)
	int index = 0;		   // (2)
	double sum_area = 0.0; // (3)
	double sum_per = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2); // (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN", 5, 6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	list[0] = &blue_ring; // (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	while (index < num_obj)
	{ // (7)
		(list[index])->getColor();
		double area = list[index++]->calcArea(); // (8)
		double perimeter = list[index++]->calcPerimeter();
		sum_area += area;
		sum_per += perimeter;
	}
	cout << "\nThe total area is " << sum_area << " units " << endl; // (9)

	cout << "\nThe total perimeter is " << sum_per << " units " << endl;
	return 0;
}
/*              
 
                 __________________ 
                |     AREA         |
		        |__________________|
				         |
						 |
		_________________|______________________	
________|__________                      _______|__________
|     CIRCLE      |                      |  RECTANGLE      |
|_________________|                      |_________________|                 
        |                                       |                                       
 _______|__________                    _________|_________       
|     RING         |                   |      SQUARE      |
|__________________|                   |__________________|
*/
