/*
CH-230-A
a10 p6.[c or cpp or h]
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
    Critter e("Aryans",29,56,234.567,175.7);
    
    a.getname();
    a.getheight();
    a.getboredom();
    a.gethunger();
    a.getthirst();
    
    b.getname();
    b.getheight();
    b.getboredom();
    b.gethunger();
    b.getthirst();

    c.getname();
    c.getheight();
    c.getboredom();
    c.gethunger();
    c.getthirst();

    d.getname();
    d.getheight();
    d.getboredom();
    d.gethunger();
    d.getthirst();
    
    e.getname();
    e.getheight();
    e.getboredom();
    e.gethunger();
    e.getthirst();    
     return 0;
}