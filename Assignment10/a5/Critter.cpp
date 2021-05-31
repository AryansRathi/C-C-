/*
CH-230-A
a10 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
 
#include "Critter.h"
#include <iostream>
#include <string>
using namespace std;
Critter::Critter()
{
    cout << "Empty Constructor Called" << endl;
    name = "default critter";
    height = 5;
    boredom = 0;
    hunger = 0;
}
 
Critter::Critter(string n)
{
    cout << "Constructor with one parameter being called" << endl;
    name = n;
    height = 5;
    boredom = 0;
    hunger = 0;
}
Critter::Critter(string ne, int nhu, int nb, float nh)
{
    cout << "Constructor with four parameter being called" << endl;
    name = ne;
    height = nh;
    hunger = nhu;
    boredom = nb;
}
 
void Critter::setname(string newname)
{
    name = newname;
}
void Critter::sethunger(int newhunger)
{
    hunger = Hunger(newhunger);
}
void Critter::setboredom(int newboredom)
{
      boredom = newboredom;
}
void Critter::setheight(float newheight)
{
    height=newheight;
}
string Critter::getname()
{
    cout << "The name is " << name << endl;
    return name;
}
 
int Critter::gethunger()
{
    cout << "Hunger is " << hunger << endl;
    return Hunger();
}
 
float Critter::getheight()
{
    cout << "The height is " << height << endl;
    return height;
}
 
int Critter::getboredom()
{
    cout << "Boredom is " << boredom << endl;
    return boredom;
}
//converting the int to double
double Critter::Hunger(int hunger){
    return(double)hunger/10.00;
}

//converting the double to int
int Critter::Hunger(){
    return (int)(hunger*10.00);
}