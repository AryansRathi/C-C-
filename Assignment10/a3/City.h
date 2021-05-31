/*
CH-230-A
a10 p3.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;
class city
{
private:
    string name;
    int inhabitants;
    string mayor;
    double area;

public:
    void setname(string newname);
    void setinhabitants(int newinhabitants);
    void setmayor(string newmayor);
    void setarea(double newarea);
    string getname();
    int getinhabitants();
    string getmayor();
    double getarea();
};