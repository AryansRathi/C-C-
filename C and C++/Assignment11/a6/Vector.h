/*
CH-230-A
a11 p6.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

class Vector
{
private:
	
	int size;
	
	double *pointer;

public:
	Vector();
	Vector(int size, double *&pointer);
	Vector(const Vector &a);
	~Vector();
	
	void setsize(int newsize);
	void setpointer(double *&newpointer);
	int getsize();
	
	double *getpointer();
	void print();
	double norm() const;
	
	Vector product(const Vector &) const;
	Vector sub(const Vector &) const;
	Vector add(const Vector &) const;
};