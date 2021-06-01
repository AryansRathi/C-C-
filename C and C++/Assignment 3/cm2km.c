/*
CH-230-A
a3 p3.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
float convert(int cm);
int main()
{
    int cm;
    float con;
    //Enter the value
    scanf("%d", &cm);
    con = convert(cm);
    printf("Result of conversion: %f\n", con);
    return 0;
}
float convert(int cm)
{
    float conversion;
    conversion = cm / 100000.00;
    return conversion;
}