/*
CH-230-A
a10 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <iostream>
#include<string>
using namespace std;
class Critter
{
private:
    string name;
    int hunger;
    int boredom;
    float height;
    double Hunger(int hunger);
    int Hunger(); 
public:
    Critter();
    Critter(string name );
    Critter(string name,int hunger,int boredom,float height=10);
    
    void setname(string newname);
    void sethunger(int newhunger);
    void setboredom(int newboredom);
    void setheight(float newheight);
    
    string getname();
    int gethunger();
    int getboredom();
    float getheight();
};