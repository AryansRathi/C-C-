/*
CH-230-A
a3 p8.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int af = 0; //Taken a global variable
float sum(float arry[]);
float avg(float sum, int n);
int main()
{
    float arr[10], add, avgerage;
    int i;
    printf("Enter the numbers\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &arr[i]);
    }
    add = sum(arr);
    avgerage = avg(add, af);
    printf("add is %f\n", add);
    printf("avg is %f\n", avgerage);
    return 0;
}
float sum(float arry[10]) //function for sum
{
    int f;
    float sum = 0;
    for (f = 0; f < 10; f++)
    {
        if (arry[f] == -99.0)
        {
            break;
        }
        else
        {
            af++;
        }
        sum = sum + arry[f];
    }
    printf("%f\n", sum);
    return sum;
}
float avg(float sum, int n) //function for avgrage
{
    float av;
    av = sum / n;
    printf("%f\n", av);
    return av;
}