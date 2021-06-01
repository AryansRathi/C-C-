/*
CH-230-A
a11 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <iostream>
using namespace std;
class Box
{
private:
    float height;
    float depth;
    float width;

public:
    Box();
    Box(float height, float depth, float width);
    ~Box();
    void setheight(float newheight);
    void setdepth(float newdepth);
    void setwidth(float newwidth);

    float getheight();
    float getdepth();
    float getwidth();

    Box(const Box &a);

    float vol();

    void print();
};