/*
CH-230-A
a10 p4.[c or cpp or h]
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
    c.sethunger(2);
    Critter d("Aryans", 4, 324567);
    d.sethunger(2);
   a.print();
   b.print();
   c.print();
   d.print();

    return 0;
}