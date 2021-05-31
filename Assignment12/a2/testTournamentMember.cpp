/*
CH-230-A
a12 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
using namespace std;

int main()
{
    char name[36] = "VIRAT";

    char last[36] = "KOHLI";

    char birth[11] = "1988-11-05";

    TournamentMember one(name, last, birth, "RCB", 32);
     
    one.print();

    //setting new location
    one.setlocation("AUSTRALIA");

    one.print();
    return 0;
}