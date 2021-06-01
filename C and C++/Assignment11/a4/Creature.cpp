/*
CH-230-A
a11 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>

Creature::Creature() : distance(10)
{

}
void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}
Wizard::Wizard() : distFactor(3)
{

}
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
snake::snake() : bite(2)
{

}
void snake::kill() const
{
    cout << "kill in " << (bite * distance) << "seconds!\n";
}
snake::~snake()
{
    cout << "Destructor being called" << endl;
}
dog::dog() : good(10)
{

}
void dog::cute() const
{
    cout << "loving " << (good * distance) << " dog!\n";
}
dog::~dog()
{
    cout << "Destructor being called" << endl;
}