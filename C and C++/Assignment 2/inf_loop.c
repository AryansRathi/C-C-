/*
CH-230-A
a2 p7.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int i = 8;
    while (i >= 4)
    {
        printf("i is %d\n", i);
        i--;
    }
    printf("That’s it.\n");
    return 0;
}
/*The while loop was missing brackets
so that's why it was printing 8 every time.*/