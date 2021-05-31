/*
CH-230-A
a5 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int n, i;
    float arr[100];
    float *ptr;
    float count;
    //Enter the size of the array
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    ptr = &arr[0];//stroing the pointer
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            break;
        }
    }
    count = &arr[i] - ptr;
    printf("the count is %f\n", count);

    return 0;
}