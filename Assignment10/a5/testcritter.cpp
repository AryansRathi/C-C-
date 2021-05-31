/*
CH-230-A
a10 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "Critter.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{

    Critter a;
    Critter b("Aryans");
    Critter c("Aryans", 5, 10, 175.6);
    c.sethunger(10);
    Critter d("Aryans", 4, 324567);
    d.sethunger(20);
    a.getname();
    a.getheight();
    a.getboredom();
    a.gethunger();

    b.getname();
    b.getheight();
    b.getboredom();
    b.gethunger();

    c.getname();
    c.getheight();
    c.getboredom();
    c.gethunger();

    d.getname();
    d.getheight();
    d.getboredom();
    d.gethunger();

    return 0;
}