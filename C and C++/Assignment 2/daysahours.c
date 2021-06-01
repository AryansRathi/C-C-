/*
CH-230-A
a2 p10.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter the integer\n");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Invalid value\n");
        }
    } while (n <= 0); //using the while loop//

    for (int i = 1; i <= n; i++)
    {
        printf("%d days=%d hours\n", i, 24 * i); //calculating number of hours//
    }

    return 0;
}