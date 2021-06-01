/*
CH-230-A
a3 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    char c;
    printf("Enter the character\n");
    scanf("%c", &c);
    int n;
    printf("Enter the integer\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%c\n", c - i);
    }
    return 0;
}