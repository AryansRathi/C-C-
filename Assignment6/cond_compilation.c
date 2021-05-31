/*
CH-230-A
a6 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#define INTERMEDIATE
int main()
{
    int arr[100], arr2[100], i, n, pro = 0;
    printf("Enter the deminsion\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
#ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i] * arr2[i]);
    }
#endif
    for (i = 0; i < n; i++)
    {
        pro = pro + arr[i] * arr2[i];
    }
    printf("The scalar product is: %d\n", pro);
    return 0;
}