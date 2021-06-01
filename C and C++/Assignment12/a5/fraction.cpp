/*
CH-230-A
a12 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include "fraction.h"
#include <iostream>

using namespace std;
Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	tmp_gcd = a;
	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}
istream &operator>>(istream &in, Fraction &a)
{
	int dem;
	in >> a.num >> dem;
	while (dem == 0)
	{
		cout << "Enter New Denominator";
		cin >> dem;
	}
	a.den = dem;
	return in;
}
ostream &operator<<(ostream &out, const Fraction &a)
{
	out << a.num << "/" << a.den << endl;
	return out;
}
Fraction Fraction::operator*(Fraction element1)
{
	Fraction RES;
	RES.num = num * element1.num;
	RES.den = den * element1.den;
	int n = gcd(RES.num, RES.den);
	RES.num = RES.num / n;
	RES.den = RES.den / n;
	return RES;
}
Fraction Fraction::operator/(Fraction element1)
{
	Fraction RES;
	RES.num = num * element1.den;
	RES.den = den * element1.num;
	int n = gcd(RES.num, RES.den);
	RES.num = RES.num / n;
	RES.den = RES.den / n;
	return RES;
}
Fraction Fraction::operator+(Fraction a)
{
	Fraction RES;
	RES.num = num * lcm(den, a.den) / den + a.num * lcm(den, a.den) / a.den;
	RES.den = lcm(den, a.den);
	int n = gcd(num, den);
	num = num / n;
	den = den / n;
	return RES;
}
Fraction Fraction::operator-(Fraction a)
{

	Fraction RES;
	RES.num = num * lcm(den, a.den) / den - a.num * lcm(den, a.den) / a.den;
	RES.den = lcm(den, a.den);
	return RES;
}
Fraction &Fraction::operator=(Fraction &a)
{
	this->num = a.num;
	this->den = a.den;
	return *this;
}
bool Fraction::operator<(Fraction a)
{
	if (((float)num / float(den)) < ((float)a.num) / (float)a.den)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Fraction::operator>(Fraction a)
{
	if (((float)num / float(den)) > ((float)a.num) / (float)a.den)
	{
		return true;
	}
	else
	{
		return false;
	}
}