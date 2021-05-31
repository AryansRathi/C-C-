/*
CH-230-A
a2 p3.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int weeks = 0, days = 0, hours = 0, totalhours;
    printf("Enter weeks\n");
    scanf("%d", &weeks);
    printf("Enter days\n");
    scanf("%d", &days);
    printf("Enter hours\n");
    scanf("%d", &hours);
    totalhours = ((weeks * 7) + days) * 24 + hours; // Used for converting to hours//
    printf("The  total number of hours=%d\n", totalhours);
    return 0;
}