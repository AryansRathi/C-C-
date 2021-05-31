/*
CH-230-A
a10 p3.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "City.h"
#include <iostream>
#include <string>
using namespace std;
void city::setname(string newname)
{
    name = newname;
}
void city::setinhabitants(int newinhabitants)
{
    inhabitants = newinhabitants;
}
void city::setmayor(string newmayor)
{
    mayor = newmayor;
}
void city::setarea(double newarea)
{
    area = newarea;
}
string city::getname()
{
    cout << "Name of the city " << name << endl;
    return name;
}
int city::getinhabitants()
{
    cout << "Number of inhabitants " << inhabitants << endl;
    return inhabitants;
}
string city::getmayor()
{

    cout << "Name of the Mayor " << mayor << endl;
    return mayor;
}
double city::getarea()
{
    cout << "Area of city " << area << " Km" << endl;
    return area;
}
