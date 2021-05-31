/*
CH-230-A
a9 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <cstring>
#include <iostream>
using namespace std;
int mycount(int n, int a);
int mycount(string s, char a);
int main()
{
    int n, m;
    cout << "Enter the integers" << endl;
    cin >> n >> m;
    cout << "The difference is " << mycount(n, m) << endl;
    string str;
    cout << "Enter the string" << endl;
    getchar();
    getline(cin, str);
    char c;
    cout << "Enter the character" << endl;
    cin >> c;
    cout << "occurance of a character " << mycount(str, c) << endl;
    return 0;
}
int mycount(int n, int a)
{
    return a - n;
}
int mycount(string s, char a)
{
    int count = 0, i;
    int y = s.length();

    for (i = 0; i < y; i++)
    {
        if (s[i] == a)
            count++;
    }

    return count;
}