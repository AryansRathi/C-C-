/*
CH-230-A
a4 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <math.h>
#include <stdio.h>
int main()
{
    float a, b, c, i;
    //Enter the radius
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    for (i = a; i <= b; i += c)
    {
        printf("%f %f %f\n", i, i * i * M_PI, 2 * M_PI * i); //Printing the radius,area and perimeter
    }
    return 0;
}