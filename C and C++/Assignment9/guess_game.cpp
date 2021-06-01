/*
CH-230-A
a9 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter your name" << endl;
    getline(cin, s);
    int num, guess,tries=0;
    srand(time(0));
    num = rand() % 100+1;
    cout << "Pick random number between 1 and 100" << endl;
    do
    {
        cin >> guess;
        tries++;
        if (guess > num)
            cout << "Too high!" << endl;
        else if (guess < num)
            cout << "Too low" << endl;
         if (guess == num)
            cout << "correct!"<<s<<" you win" <<endl;

    } while (guess != num);

    return 0;
}