/*
CH-230-A
a7 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int asc(const void *a, const void *b);
int des(const void *a, const void *b);
int (*fun[2])(const void *, const void *);
void print(int *arr, int n);
int main()
{
    int n;
    char c;
    fun[0] = asc;
    fun[1] = des;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    getchar();

    while (c != 'e')
    {
        scanf("%c", &c);
        getchar();

        if (c == 'a')
        {
            qsort(arr, n, sizeof(arr[0]), fun[0]);
            print(arr, n);
        }
        else if (c == 'd')
        {
            qsort(arr, n, sizeof(arr[0]), fun[1]);
            print(arr, n);
        }
        else if (n == 'e')
        {
            exit(0);
        }
    }

    return 0;
}

int asc(const void *a, const void *b)
{
    const int *r = (const int *)a;
    const int *s = (const int *)b;
    if (*r < *s)
        return -1;
    else if (*r > *s)
        return 1;
    else
        return 0;
}

int des(const void *a, const void *b)
{
    const int *r = (const int *)a;
    const int *s = (const int *)b;
    if (*r < *s)
        return 1;
    else if (*r > *s)
        return -1;
    else
        return 0;
}

void print(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}