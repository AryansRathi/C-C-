/*
CH-230-A
a2 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    double d1, d2, sum, difference, square;
    int a, b;
    int add, product, addition, multi;
    char c1, c2;
    scanf("%lf %lf", &d1, &d2);
    scanf("%d %d", &a, &b);
    getchar();
    scanf("%c", &c1);
    getchar();
    scanf("%c", &c2);
    sum = d1 + d2;
    printf("sum of doubles=%lf\n", sum);
    difference = d1 - d2;
    printf("difference of doubles=%lf\n", difference);
    square = d1 * d1;
    printf("square=%lf\n", square);
    add = a + b;
    printf("sum of integers=%d\n", add);
    product = a * b;
    printf("product of integers=%d\n", product);
    addition = c1 + c2;
    printf("sum of chars=%d\n", addition);
    multi = c1 * c2;
    printf("product of chars=%d\n", multi);
    printf("sum of chars=%c\n", addition);
    printf("product of chars=%c\n", multi);
    return 0;
}