/*
CH-230-A
a10 p3.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "City.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    city Bremen;
    city Paris;
    city London;
    string name;
    int inhabitants;
    string mayor;
    double area;
    cout << "Enetr city name" << endl;
    getline(cin, name);
    Bremen.setname(name);
    cout << "Enter number of inhabitants" << endl;
    cin >> inhabitants;
    Bremen.setinhabitants(inhabitants);
    cout << "Enter the mayor's name" << endl;
    cin.ignore();
    getline(cin, mayor);
    Bremen.setmayor(mayor);
    cout << "Enter the area" << endl;
    cin >> area;
    Bremen.setarea(area);
    cin.ignore();
    
    cout << "Enetr city name" << endl;
    getline(cin, name);
    London.setname(name);
    cout << "Enter number of inhabitants" << endl;
    cin >> inhabitants;
    London.setinhabitants(inhabitants);
    cout << "Enter the mayor's name" << endl;
    cin.ignore();
    getline(cin, mayor);
    London.setmayor(mayor);
    cout << "Enter the area" << endl;
    cin >> area;
    London.setarea(area);
    cin.ignore();
    
    cout << "Enetr city name" << endl;
    getline(cin, name);
    Paris.setname(name);
    cout << "Enter number of inhabitants" << endl;
    cin >> inhabitants;
    Paris.setinhabitants(inhabitants);
    cout << "Enter the mayor's name" << endl;
    cin.ignore();
    getline(cin, mayor);
    Paris.setmayor(mayor);
    cout << "Enter the area" << endl;
    cin >> area;
    Paris.setarea(area);
    //using getters
    Bremen.getname();
    Bremen.getinhabitants();
    Bremen.getmayor();
    Bremen.getarea();
    
    London.getname();
    London.getinhabitants();
    London.getmayor();
    London.getarea();

    Paris.getname();
    Paris.getinhabitants();
    Paris.getmayor();
    Paris.getarea();
}
