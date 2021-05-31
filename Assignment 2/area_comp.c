/*
CH-230-A
a2 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    float a, b, h, sqarea, recarea, triarea, trarea;
    scanf("%f %f %f", &a, &b, &h);
    sqarea = a * a;
    recarea = a * b;
    triarea = 0.5 * a * h;
    trarea = 0.5 * (a + b) * h;
    printf("square area=%f\n", sqarea);
    printf("rectangle area=%f\n", recarea);
    printf("triangle area=%f\n", triarea);
    printf("trapezoid area=%f\n", trarea);
    return 0;
}