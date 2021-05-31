/*
CH-230-A
a5 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int n, i, j;
    //"Entering the number"
    scanf("%d", &n);
    char c;
    //"Entering the character\n"
    getchar();
    scanf("%c", &c);
    for (i = n; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}