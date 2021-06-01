/*
CH-230-A
a11 p3.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>

int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a snake.\n";
    snake s;
    s.run();
    s.kill();

    cout << "\nCreating a Dog.\n";
    dog d;
    d.run();
    d.cute();
    return 0;
}