/*
CH-230-A
a3 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    float x;
    //Enter any float value
    scanf("%f", &x);
    int n;
    do
    {
        //Enter any integer value
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Input is invalid, reenter value\n");
        }
    } while (n <= 0);
    for (int i = 1; i <= n; i++)
    {
        printf("%f\n", x);
    }
    return 0;
}