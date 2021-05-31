/*
CH-230-A
a2 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    double x, y, *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;   //asigning pointer to the address of x//
    ptr_two = &x;   //asigning pointer to the address of x//
    ptr_three = &y; //asigning pointer to the address of y//
    printf("Adress %p %p\n", &ptr_one, &ptr_two);
    printf("Adress %p\n", &ptr_three);
    return 0;
}