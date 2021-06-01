/*
CH-230-A
a4 p8.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int mat(int arr[30][30], int r);
int dia(int arr[30][30], int t);
int main()
{
    int n, k, l;
    int array[30][30];
    //Enter the deminsion
    scanf("%d", &n);
    //Enter the matrix\n"
    for (k = 0; k < n; k++)
    {
        for (l = 0; l < n; l++)
            scanf("%d", &array[k][l]);
    }
    printf("The entered matrix is:");
    mat(array, n);
    printf("Under the secondary diagonal:\n");
    dia(array, n);
    printf("\n");
    return 0;
}
int mat(int arr[30][30], int r)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < r; j++)
            printf("%d ", arr[i][j]);
    }
    printf("\n");
    return 0;
}
int dia(int arr[30][30], int t)
{
    int i, j;
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
            if ((i + j) >= t)
            {
                printf("%d ", arr[i][j]);
            }
    }
    return 0;
}