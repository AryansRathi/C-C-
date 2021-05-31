/*
CH-230-A
a2 p9.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c); //Scanning the character//
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        printf("%c is a letter\n", c);
    }
    else if (c >= 48 && c <= 57)
    {
        printf("%c is a digit\n", c);
    }
    else
    {
        printf("%c is some other symbol\n", c);
    }
    return 0;
}