/*
CH-230-A
a13 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include <exception>
#include <iostream>
#include <string>

using namespace std;

class Ownexception : public exception
{
private:
    string s;

public:
    Ownexception(string a)
    {
        s = a;
    }
    string what()
    {
        return s;
    }
};
void function(int x)
{
    string a = "Default case exception";
    switch (x)
    {
    case 1:
        throw 'a';
        break;
    case 2:
        throw 12;
        break;

    case 3:
        throw true;
        break;
    default:
        throw Ownexception(a);
        break;
    }
}
int main()
{

    try
    {
        function(1);
    }
    catch (char c)
    {
        cerr << "Caught in main " << c << '\n';
    }
    try
    {
        function(2);
    }
    catch (int a)
    {
        cerr << "Caught in main " << a << '\n';
    }
    try
    {
        function(3);
    }
    catch (bool a)
    {
        cerr << "Caught in main " << a << '\n';
    }

    try
    {
        function(4);
    }
    catch (Ownexception &a)
    {
        cerr << "Caught in main " << a.what() << endl;
    }
    return 0;
}