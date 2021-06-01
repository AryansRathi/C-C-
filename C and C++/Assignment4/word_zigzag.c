/*
CH-230-A
a4 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    //Enter the string
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str) - 1; i++)
    {

        if (i % 2 == 0)
        {
            printf("%c\n", str[i]);
        }
        else
        {
            printf(" %c\n", str[i]);
        }
    }
    return 0;
}