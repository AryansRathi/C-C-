/*
CH-230-A
a9 p2.[c or cpp or h]
Aryans rathi
arathi@jacobs-university.de
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the integer" << endl;
    cin >> n;// scannig the integer
    double x;
    cout << "Enter the double" << endl;
    cin >> x;// scannig the double
    string s;
    cout << "Enter the string" << endl;
    cin >> s;// scannig the string
    for (i = 1; i <= n; i++)
    {
        cout << "doubel x:" << x << endl;
        cout << "string s:" << s << endl;
    }

    return 0;
}