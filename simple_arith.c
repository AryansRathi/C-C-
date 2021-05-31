/*
CH-230-A
a1 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int x = 17;
    int y = 4;
    int sum, product, difference, remainder;
    float division;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    sum = x + y;
    printf("sum=%d\n", sum);
    product = x * y;
    printf("product=%d\n", product);
    difference = x - y;
    printf("difference=%d\n", difference);
    division = 17.0 / 4.0;
    printf("division=%f\n", division);
    remainder = x % y;
    printf("remainder of division=%d\n", remainder);
    return 0;
}