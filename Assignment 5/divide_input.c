/*
CH-230-A
a5 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void divby5(float arr[], int size);
int main()
{
    float *arr;
    int i, n;
    //Enter the size of the array
    scanf("%d", &n);
    arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    printf("Before:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    printf("After:\n");
    divby5(arr, n);
    return 0;
}
void divby5(float arr[], int size)
{
    float div;
    for (int i = 0; i < size; i++)
    {
        div = arr[i] / 5.0;
        printf("%.3f ", div);
    }
    printf("\n");
}