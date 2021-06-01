/*
CH-230-A
a12 p3.[c or cpp or h]
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
    
    Player one(name, last, birth, "RCB", 32, 18, "First down", 45, "Right-Handed");
    one.print1();
    
    char name1[36] = "MS";

    char last1[36] = "DHONI";

    char birth1[11] = "1980-11-05";

    Player two(name1,last1,birth1,"CSK",39,7,"MIDDLE ORDER",23,"Right-Handed");
    two.print1();

    char name2[36] = "SURESH";

    char last2[36] = "RAINA";

    char birth2[11] = "1984-11-05";

    Player three(name2,last2,birth2,"CSK",39,7,"MIDDLE ORDER",34,"LEFT-Handed");
    three.print1();
  
    
    return 0;
}