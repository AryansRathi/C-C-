/*
CH-230-A
a13 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
int main()
{
    vector<int> vectora;
    for (int i = 1; i <= 21; i++)
    {
        vectora.push_back(i + 8);
    }
    for (int i = 1; i <= 20; i++)
    {
        cout << vectora[i] << endl;
    }
    try
    {
        vectora.at(21) = 200;
    }
    catch (const out_of_range &e)
    {
        cerr << "Out of range exception caught" << e.what() << '\n';
    }

    return 0;
}