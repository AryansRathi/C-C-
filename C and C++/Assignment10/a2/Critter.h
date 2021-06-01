/*
CH-230-A
a10 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <string> // defines standard C++ string class
using namespace std;
/* First C++ class */
class Critter
{
private: // data members are private
	string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(string newname);
	
	void setHunger(int newhunger);
	
	void setBoredom(int newboredom);
	
	void setHeight(double height);
	// getter method
	int getHunger();
	// service method
	int getBoredom(); //property first

	double getHeight(); // property second

	void print();
};