/*
CH-230-A
a3 p9.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
double sum25(double v[], int n);
int main()
{
    int n, i;
    double ele[20];
    scanf("%d", &n);
    if (n > 5)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%lf", &ele[i]);
        }
        printf("sum=%lf\n", sum25(ele, n));
    }
    else
    {
        printf("One or both positions are invalid\n");
        return -111;
    }
    return 0;
}
double sum25(double v[], int n)
{
    double res;
    res = v[2] + v[5];
    return res;
}
