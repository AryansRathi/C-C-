/*
CH-230-A
a4 p9.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n);
int main()
{
    int i, n, product;
    int *arr;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory Allocation failed\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    product = prodminmax(arr, n);
    printf("The product is %d\n", product);
    free(arr);
    return 0;
}
int prodminmax(int arr[], int n)
{
    int large, small, i;
    int pro;
    large = arr[0];
    small = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    pro = large * small;
    return pro;
}