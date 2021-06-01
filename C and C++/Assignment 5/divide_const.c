/*
CH-230-A
a5 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
void divby5(float arr[], int size);
int main()
{
    float arr[6] = {5.500, 6.500, 7.750, 8.000, 9.600, 10.360};
    int i;
    //int size = 6;
    printf("Before:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    printf("After:\n");
    divby5(arr,i);
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