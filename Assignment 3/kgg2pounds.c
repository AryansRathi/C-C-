/*
CH-230-A
a3 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
float to_pounds(int kg, int g);
int main()
{
    int kg, g;
    float con;
    //Enter the values
    scanf("%d %d", &kg, &g);
    con = to_pounds(kg, g);
    printf("Result of conversion: %f\n", con);
    return 0;
}
float to_pounds(int kg, int g)
{
    float convert;
    convert = ((kg + (g / 1000.000)) * 2.2);
    return convert;
}
