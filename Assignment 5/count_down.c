/*
CH-230-A
a5 p10.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void num_coun(unsigned int n);
int main()
{
    unsigned int n;
    printf("Enter the integer\n");
    scanf("%d", &n);
    num_coun(n);
    return 0;
}
void num_coun(unsigned int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        num_coun(n - 1);
    }

}