/*
CH-230-A
a6 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    unsigned char n, c;
    int count;
    //Enter the character
    scanf("%c", &n);
    c = n;
    printf("The decimal representation is: %d\n", n);
    printf("The backwards binary representation is: ");
    for (int i = 0; i < 8; i++)
    {
        if (c & 1)
        {
            count = i;
        }
        c = c >> 1;
    }
    for (int i = 0; i <= count; i++)
    {
    (n & 1) ? printf("1") : printf("0");
    n = n >> 1;
}
printf("\n");
    return 0;
}