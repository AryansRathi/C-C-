/*
CH-230-A
a3 p7.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int i, n, m, j;
    char c;
    printf("Enter the integers\n");
    scanf("%d %d", &n, &m);
    getchar();
    printf("Enter the character\n");
    scanf("%c", &c);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m + i - 1; j++)
            printf("%c", c);
        printf("\n");
    }
    return 0;
}