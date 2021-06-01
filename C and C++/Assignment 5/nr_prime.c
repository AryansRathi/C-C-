/*
CH-230-A
a5 p10.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int prim(int n, int i);

int main()
{
    int n, isprime;
    //"Enter a number//
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%d is not prime\n", n);
        exit(0);
    }
    isprime = prim(n, n / 2);
    if (isprime == 1)
    {
        printf("%d is prime\n", n);
    }
    else
    {

        printf("%d is not prime\n", n);
    }
    return 0;
}

int prim(int n, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return prim(n, i - 1);
        }
    }
}