/*
CH-230-A
a11 p3.[c or cpp or h]
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
class Wizard : public Creature
{
public:
    Wizard();
    void hover() const;

private:
    int distFactor;
};
class snake : public Creature
{
private:
    int bite;

public:
    snake();

    void kill() const;
    ~snake();
};
class dog : public Creature
{
private:
    int good;

public:
    dog();
    void cute() const;
    ~dog();
};