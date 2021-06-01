/*
CH-230-A
a13 p8.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include <iostream>
using namespace std;

class Motor
{
public:
    Motor()
    {
        throw "This motor has problems";
    }
};

class Car
{
private:
    Motor *b;

public:
    Car()
    {
        b = new Motor();
    }
};

class Garage
{
private:
    Car *c;

public:
    Garage()
    {
        char const *a = "The car in this garage has problems with the motor";
        try
        {
            c = new Car();
        }
        catch (const char *c)
        {
            throw a;
        }
    }
};

int main()
{
    try
    {
        Garage any;
    }
    catch (const char *c)
    {
        cout << c << endl;
    }
    return 0;
}