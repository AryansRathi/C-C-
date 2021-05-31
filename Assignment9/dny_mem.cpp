/*
CH-230-A
a9 p8.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <cstdlib>
#include <iostream>
using namespace std;
void subtract_max(int arr[], int n);
void deallocate(int arr[]);
int main()
{ 
    int i, n;
    cin>>n;
    int *arr=new int[n];
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        cout << "Memory Allocation failed" << endl;
        exit(0);
    }
    cout << "Enter the values" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "All the elements before substracting" << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    subtract_max(arr, n);
    deallocate(arr);

    return 0;
}
void subtract_max(int arr[100], int n)
{
    int i;
    int large = arr[0];
    int sub[n];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        sub[i] = arr[i] - large;
    }
    cout << "After substraction" << endl;

    for (i = 0; i < n; i++)
    {
        cout << sub[i] << endl;
    }
}
void deallocate(int arr[])
{
    delete[] arr;
}