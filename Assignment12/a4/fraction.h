/*
CH-230-A
a12 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
// simple class for fractions
#include<iostream>
#ifndef FRACTION_H_
#define FRACTION_H_


class Fraction
{

private:	 // internal implementation is hidden
	int num; // numerator
	int den; // denominator

	int gcd(int a, int b); // calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();				// empty constructor
	Fraction(int, int = 1); // constructor taking values for fractions and
							// integers. Denominator by default is 1
	void print();			// prints it to the screen
	friend std::istream &operator>>(std::istream &in, Fraction &a);
	friend std::ostream &operator<<(std::ostream &out, const Fraction &a);

	Fraction operator/(Fraction element1);
	Fraction operator*(Fraction element1);
};

#endif /* FRACTION_H_ */