/*
CH-230-A
a12 p3.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

class TournamentMember
{
private:
    char name[36];

    char last[36];

    char birth[11];

    string club;

    int age;

    static string location;

public:
    TournamentMember();
    TournamentMember(char newname[], char newlast[], char newbirth[], string newclub, int newage);
    TournamentMember(const TournamentMember &);
    ~TournamentMember();

    inline void setname(const char *newname);
    inline void setlast(const char *newlast);
    inline void setbirth(const char *newbirth);

    inline void setclub(string newclub);
    inline void setage(int newage);
    void setlocation(string newlocation);
    void print();

    inline const char *getname();
    inline const char *getlast();
    inline const char *getbirth();

    inline string getclub();
    inline string getlocation();
    inline int getage();
};
class Player : public TournamentMember
{
private:
    int number;
    string position;
    int centuries;
    string handed;

public:
    Player(char newname[], char newlast[], char newbirth[], string newclub, int newage, int newnumber, string newposition, int newcenturies, string newhanded);
    Player(const Player &);
    ~Player();

    inline void setnumber(int newnumber);
    inline void setposition(string newposition);
    inline void setgoals(int newcenturies);
    inline void setfooted(string newhanded);

    void increment();

    inline int getnumber();
    inline string getposition();
    inline int getcenturies();
    inline string gethanded();

    void print1();
};