#include<iostream>
using namespace std;

// Greatest Common Divider
int gcd(int u, int v)
{
	return v != 0 ? gcd(v, u % v) : u;
}

// Rational Number Class
#include "rational.h"

// Default Constructor
rational::rational()
{
	number = 0;
	denom = 1;
	cout << "Default Constructor" << endl;
}

// Overloaded Constructor
rational::rational(int n, int d)
{
	int c = gcd(n, d);
	number = n / c;
	denom = d / c;
	cout << "Overlodade Constructor" << endl;
}

// Destructor
rational::~rational()
{
	cout << "Destructor" << endl;
}

// Setters (Modifiers)
void rational::setNumber(int n)
{
	number = n;
}
void rational::setDenom(int d)
{
	denom = d;
}

// Getters
int rational::getNumber()
{
	return number;
}
int rational::getDenom()
{
	return denom;
}

// Print
void rational::print()
{
	cout << "[" << number << "|" << denom << "]";
}

// Operator Overloading
rational rational::operator+ (rational r)
{
	int Cn = this->number * r.denom + r.number * this->denom;
	int Cd = this->denom * r.denom;
	rational C(Cn, Cd);
	return C;
}