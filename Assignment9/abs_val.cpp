/*
CH-230-A
a9 p3.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <iostream>
using namespace std;
float absolute(float x)
{
    if (x < 0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}
int main()
{
    float x;
    cout << "Enter the float" << endl;
    cin>>x;
    cout << "Absolute value is: "<<absolute(x)<< endl;
    return 0;
}
