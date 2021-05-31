/*
CH-230-A
a2 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int a, *ptr_a;
    scanf("%d", &a);
    printf("The entered value is=%d\n", a);
    ptr_a = &a; //asigning pointer to the address of a//
    *ptr_a = *ptr_a + 5;
    printf("The incremented value is %d\n", *ptr_a);
    printf("The adress of the pointer is %p\n", &ptr_a);
    return 0;
}