#include<iostream>
using namespace std;

int gcd(int u, int v)
{
	return v != 0 ? gcd(v, u % v) : u;
}

#include "rational.h"

rational::rational()
{
	number = 0;
	denom = 1;
	cout << "Default Constructor" << endl;
}
rational::rational(int n, int d)
{
	int c = gcd(n, d);

	number = n / c;
	denom = d / c;
	cout << "Overloaded Constructor" << endl;
}
rational::~rational()
{
	cout << "Destructor" << endl;
}

void rational::setNumber(int n)
{
	number = n;
}
void rational::setDenom(int d)
{
	denom = d;
}

int rational::getNumber()
{
	return number;
}
int rational::getDenom()
{
	return denom;
}

void rational::print()
{
	cout << "[" << number << "/" << denom << "]";
}

rational rational::operator+ (rational r)
{
	int Cn = this->number * r.denom + r.number * this->denom;
	int Cd = this->denom * r.denom;
	rational C(Cn, Cd);
	return C;
}
rational rational::operator- (rational r)
{
	int Dn = this->number * r.denom - r.number * this->denom;
	int Dd = this->denom * r.denom;
	rational D(Dn, Dd);
	return D;
}
rational rational::operator* (rational r)
{
	int En = this->number * r.number;
	int Ed = this->denom * r.denom;
	rational E(En, Ed);
	return E;
}
rational rational::operator/ (rational r)
{
	int Fn = this->number * r.denom;
	int Fd = this->denom * r.number;
	rational F(Fn, Fd);
	return F;
}