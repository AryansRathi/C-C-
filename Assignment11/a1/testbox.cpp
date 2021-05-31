/*
CH-230-A
a11 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "Box.h"
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int n;
    int x;
    float height;
    float depth;
    float width;
    cout << "Enter the number of Boxes" << endl;
    cin >> n;
    Box *box = new Box[2 * n];
    if (box == NULL)
    {
        cout << "Memory Allocation failed" << endl;
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the dimensions" << endl;
        cout << "Height" << endl;
        cin >> height;
        box[i].setheight(height);
        cout << "Depth" << endl;
        cin >> depth;
        box[i].setdepth(depth);
        cout << "width" << endl;
        cin >> width;
        box[i].setwidth(width);
    }
    int i = n;
    while (i != 2 * n)
    {
        x = i - n;
        box[i] = (Box(box[x]));
        i++;
        (Box(box[x]));
    }
    for (int i = 0; i < 2 * n; i++)
    {
        box[i].print();
    }
    delete[] box;
    return 0;
}
