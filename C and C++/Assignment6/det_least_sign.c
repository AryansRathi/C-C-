/*
CH-230-A
a6 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#define LSB(a)                                         \
    {                                                  \
        if (a & 1)                                     \
            printf("The least significant bit is: 1"); \
        else                                           \
            printf("The least significant bit is: 0"); \
    }
int main()
{
    unsigned char n;
    printf("Enter the character\n");
    scanf("%c", &n);
    printf("The decimal representation is: %d\n", n);
    LSB(n);
    return 0;
}