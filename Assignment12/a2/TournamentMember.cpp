/*
CH-230-A
a12 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include "TournamentMember.h"
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
TournamentMember::TournamentMember()
{
}
TournamentMember::TournamentMember(char newname[36], char newlast[36], char newbirth[11], string newclub, int newage)
{
    strcpy(name, newname);
    strcpy(last, newlast);
    strcpy(birth, newbirth);
    club = newclub;
    age = newage;
}
TournamentMember::~TournamentMember()
{
    cout << "Destructor being called" << endl;
}
inline void TournamentMember::setname(const char *newname)
{
    strcpy(name, newname);
}
inline void TournamentMember::setlast(const char *newlast)
{
    strcpy(last, newlast);
}
inline void TournamentMember::setbirth(const char *newbirth)
{
    strcpy(birth, newbirth);
}
inline void TournamentMember::setclub(string newclub)
{
    club = newclub;
}
inline void TournamentMember::setage(int newage)
{
    age = newage;
}

void TournamentMember::setlocation(string newlocation)
{
    location = newlocation;
}

inline const char *TournamentMember::getname()
{
    return name;
}
inline const char *TournamentMember::getlast()
{
    return last;
}
inline const char *TournamentMember::getbirth()
{
    return birth;
}
inline string TournamentMember::getclub()
{
    return club;
}
inline string TournamentMember::getlocation()
{
    return location;
}
inline int TournamentMember::getage()
{
    return age;
}
void TournamentMember::print()
{
    cout << "First Name is " << name << endl;
    cout << "Last name is " << last << endl;
    cout << "Date of Birth is " << birth << endl;
    cout << "The age is " << age << endl;
    cout << "Name of the club is " << club << endl;
    cout << "The location is " << location << endl;
}
string TournamentMember::location = "Asgard";