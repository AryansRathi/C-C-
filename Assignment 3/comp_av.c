/*
CH-230-A
a3 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    char c;
    printf("Enter the character\n");
    scanf("%c", &c);
    double tem[100], sum = 0;
    int n, i;
    printf("Enter the number of temperatures\n");
    scanf("%d", &n);
    printf("Enter the temp\n");
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &tem[i]);
        sum = sum + tem[i];
    }
    switch (c)
    {
    case 's':
        printf("The sum is %lf\n", sum);
        break;
    case 'p':
        printf("Entered elements were\n");
        for (i = 0; i < n; i++)
        {
            printf("%lf\n", tem[i]);
        }
        break;
    case 't':
        for (i = 0; i < n; i++)
        {
            printf("%lf\n", (tem[i] * 1.8) + 32);
        }
        break;
    default:
        printf("The arithmetic mean is %lf\n", sum / n);
        break;
    }
    return 0;
}