/*
CH-230-A
a1 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int result; // The result of our calculation //
    result = (2 + 7) * (9 / 3);
    printf("The result is %d\n", result);
    return 0;
}
//The program was printing -1073745604 because "result" was missing in the printf function and also missing bracket//