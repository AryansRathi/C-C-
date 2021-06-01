/*
CH-230-A
a9 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <iostream>
using namespace std;
int myfirst(int *arry, int n);
double myfirst(double *arry, int n);
char myfirst(char *arry, int n);
int main()
{
    int arra[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    double arr[6] = {-1.1, -2, 3.456, 4.567, 7.23, 6};
    char str[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    myfirst(arra, 9);
    myfirst(arr, 6);
    myfirst(str, 8);
    return 0;
}
int myfirst(int *arry, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((arry[i] > 0) && (arry[i] % 2 == 1))
        {
            return arry[i];
        }
    }
    return -1;
}
double myfirst(double *arry, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((arry[i] < 0) && (arry[i] / (int)arry[i] == 1))
        {
            return arry[i];
        }
    }
    return -1.1;
}
char myfirst(char *arry, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arry[i] == 'a' || arry[i] == 'e' || arry[i] == 'i' || arry[i] == 'o' || arry[i] == 'u')
        {
            
        }
       else
       {
        return arry[i];
       }
       
    }
    return '0';
}