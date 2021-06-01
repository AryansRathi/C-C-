/*
CH-230-A
a6 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    unsigned char c;
    //Enter the character
    scanf("%c", &c);
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");
    for (int i = 0; i < 8; i++)
    {
        int val = 1;
        for (int j = 7; j > i; j--)
        {
            val *= 2;
        }

        if (c & val)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
return 0;
}