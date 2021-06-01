/*
CH-230-A
a10 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>

using namespace std;

void Critter::setName(string newname)
{
	name = newname;
}

void Critter::setHunger(int newhunger)
{
	hunger = newhunger;
}

void Critter::setHeight(double newheight)
{
	height = newheight;
}

void Critter::setBoredom(int newboredom)
{
	boredom = newboredom;
}

void Critter::print()
{
	cout << "I am " << name << ". My hunger level is " << hunger << ". My height in cm is " << height << ". My boredom level is " << boredom << "." << endl;
}

int Critter::getHunger()
{
	return hunger;
}

double Critter::getHeight()
{
	return height;
}

int Critter::getBoredom()
{
	return boredom;
}