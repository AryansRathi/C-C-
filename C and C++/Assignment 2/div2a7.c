/*
CH-230-A
a2 p8.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a); //Scaning the integer//
    if ((a % 2 == 0) && (a % 7 == 0))
    { //Used the boolean operator//
        printf("The number is divisible by 2 and 7\n");
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }

    return 0;
}