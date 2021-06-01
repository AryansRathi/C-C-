/*
CH-230-A
a11 p2.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <iostream>

using namespace std;

class Creature
{
public:
    Creature();
    void run() const;

protected:
    int distance;
};

Creature::Creature() : distance(10)
{
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

class Wizard : public Creature
{
public:
    Wizard();
    void hover() const;

private:
    int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

class snake : public Creature
{
private:
    int bite;

public:
    snake();

    void kill() const;
    ~snake();
};
snake::snake() : bite(2)
{
}
void snake::kill() const
{
    cout << "kill in " << (bite * distance) << "seconds!\n";
}
snake::~snake()
{
    cout << "Destructor being called" << endl;
}
class dog : public Creature
{
private:
    int good;

public:
    dog();
    void cute() const;
    ~dog();
};
dog::dog() : good(10)
{
}
void dog::cute() const
{
    cout << "loving " << (good * distance) << " dog!\n";
}
dog::~dog()
{
    cout << "Destructor being called" << endl;
}
int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a snake.\n";
    snake s;
    s.run();
    s.kill();

    cout << "\nCreating a Dog.\n";
    dog d;
    d.run();
    d.cute();
    return 0;
}