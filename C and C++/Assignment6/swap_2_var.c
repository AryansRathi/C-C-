/*
CH-230-A
a6 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#define swap(a, b, t){t temp = a; a = b;b = temp;}
int main()
{
    int n, m;
    double a, b;
    //Enter the values
    scanf("%d %d", &n, &m);
    scanf("%lf %lf", &a, &b);
    printf("After swapping:\n");
    swap(n, m, int);
    printf("%d\n", n);
    printf("%d\n", m);
    swap(a, b, double);
    printf("%.6lf\n", a);
    printf("%.6lf\n", b);
    return 0;
}