/*
CH-230-A
a4 p3.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <math.h>
#include <stdio.h>
float sum(float arr[]);
float geometric_mean(float arr[], int num);
float large(float arr[]);
float small(float arr[]);
int main()
{
    float arry[15], all, geo, lar, sml;
    int n;
    char c;
    printf("Enter the character\n");
    scanf("%c", &c);
    printf("Enter the floats\n");
    for (n = 0; n < 15; n++)
    {
        scanf("%f", &arry[n]);
        if (arry[n] < 0)
        {
            n -= 1;
            printf("Invalid value\n");
            break;
        }
    }
    switch (c)
    {
    case 's':
        all = sum(arry);
        printf("The sum is %f\n", all);
        break;
    case 'm':
        geo = geometric_mean(arry, n);
        printf("The geometric mean is %f\n", geo);
        break;
    case 'h':
        lar = large(arry);
        printf("The largest number is %f\n", lar);
        break;
    case 'l':
        sml = small(arry);
        printf("The smallest number is %f\n", sml);
        break;
    default:
        printf("Entered wrong character\n");
        break;
    }
    return 0;
}
float sum(float arr[])
{
    float add = 0;
    for (int i = 0; i < 15; i++)
    {
        add = add + arr[i];
    }
    return add;
}
float geometric_mean(float arr[], int num)
{
    float div, pro = 1;
    for (num = 0; num < 15; num++)
    {
        pro = pro * arr[num];
        div = pow(pro, (float)1 / (num + 1));
    }
    return div;
}
float large(float arr[])
{
    float big;
    int i;
    for (i = 0; i < 15; i++)
    {
        big = arr[0];
        if (arr[i] > big)
        {
            big = arr[i];
        }
    }
    return big;
}
float small(float arr[])
{
    float s;
    int i;
    for (i = 0; i < 15; i++)
    {
        s = arr[0];
        if (arr[i] < s)
        {
            s = arr[i];
        }
    }
    return s;
}