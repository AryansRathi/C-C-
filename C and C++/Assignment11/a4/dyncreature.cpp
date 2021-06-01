/*
CH-230-A
a11 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "Creature.h"
#include <iostream>
using namespace std;

int main()
{

    do
    {
        string input;
        getline(cin, input);

        if (input == "Wizard")
        {
            cout << "Creating a Wizard.\n";
            Wizard *w = new Wizard;
            w->run();
            w->hover();
            delete w;
        }
        else if (input == "object1") //as per question requirements
        {
            cout << "creating a snake" << endl;
            snake *s = new snake;
            s->kill();
            s->run();
            delete s;
        }
        else if (input == "object2") //as per question requirements
        {

            cout << "Creating a dog" << endl;
            dog *d = new dog;
            d->cute();
            d->run();
            delete d;
        }

        else if (input == "quit")
        {

            cout << "Program stoped" << endl;
            break;
        }
        else
        {
            cout << "Wrong input enter again" << endl;
            break;
        }

    } while (1);
    return 0;
}