/*
CH-230-A
a1 p3.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    float result;
    float a = 5.0; // The result of the division //
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
    return 0;
}
//The error was that the values were initialized to int rather then float and in the printf funtion a single decimal format specifier was used rather then floating point specifier//