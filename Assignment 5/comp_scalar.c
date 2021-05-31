/*
CH-230-A
a5 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
double product(double v[], double w[], int n);
void vector_1(double v[], int n);
void vector_2(double w[], int n);
int main()
{
    double arry1[100], arry2[100], pro;
    int n, i;
    //Enter the integer
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &arry1[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &arry2[i]);
    }
    pro = product(arry1, arry2, n);
    printf("Scalar product=%lf\n", pro);
    vector_1(arry1, n);
    vector_2(arry2, n);
    return 0;
}
double product(double v[], double w[], int n)
{
    double pro = 0;
    for (int i = 0; i < n; i++)
    {
        pro = pro + v[i] * w[i];
    }
    return pro;
}
void vector_1(double v[], int n)
{
    double small, large;
    int pos = 0;
    int posl = 0;
    small = v[0];
    large = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] < small)
        {
            small = v[i];
            pos = i;
        }

        if (v[i] > large)
        {
            large = v[i];
            posl = i;
        }
    }

    printf("The smallest = %lf\n", small);
    printf("Position of smallest = %d\n", pos);
    printf("The largest = %lf\n", large);
    printf("Position of largest = %d\n", posl);
}
void vector_2(double w[], int n)
{
    double small, large;
    int pos = 0;
    int posl = 0;
    small = w[0];
    large = w[0];
    for (int i = 0; i < n; i++)
    {
        if (w[i] < small)
        {
            small = w[i];
            pos = i;
        }

        if (w[i] > large)
        {
            large = w[i];
            posl = i;
        }
    }
    printf("The smallest = %lf\n", small);
    printf("Position of smallest = %d\n", pos);
    printf("The largest = %lf\n", large);
    printf("Position of largest = %d\n", posl);
}