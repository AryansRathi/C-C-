/*
CH-230-A
a4 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int twog(int arr[], int r);
int main()
{
    int n, i;
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
    twog(arr, n);
    free(arr);
    return 0;
}
int twog(int arr[], int r)
{
    int i, large = 0, second_large = 0, temp = 0;
    large = arr[0];
    second_large = arr[1];
    if (large < second_large)
    {
        temp = large;
        large = second_large;
        second_large = temp;
    }
    for (i = 2; i < r; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }
    printf("The FIRST LARGEST = %d\n", large);
    printf("THE SECOND LARGEST = %d\n", second_large);
    return 0;
}