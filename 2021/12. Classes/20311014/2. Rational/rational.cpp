#include <iostream>
#include "rational.h"
using namespace std;

int sign = 0;

int gcd(int u, int v)
{
	return v != 0 ? gcd(v, u % v) : u;
}

rational::rational()
{
	number = 0;
	denom = 1;
}

rational::rational(int n, int d)
{
	int c = gcd(n, d);
	number = n / c;
	denom = d / c;
}

rational::~rational()
{
	// cout << "Destructor" << endl;
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
	cout << "[" << number << "|" << denom << "]";
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
	int Cn = this->number * r.denom - r.number * this->denom;
	int Cd = this->denom * r.denom;

	if ((Cn < 0) && (Cd < 0))
	{
		Cn = -Cn;
		Cd = -Cd;
	}
	else if (Cn < 0)
	{
		Cn = -Cn;
		sign = 1;
	}
	else if (Cd < 0)
	{
		Cd = -Cd;
		sign = 1;
	}

	rational C(Cn, Cd);
	return C;
}

rational rational::operator* (rational r)
{
	int Dn = this->number * r.number;
	int Dd = this->denom * r.denom;

	rational D(Dn, Dd);
	return D;
}

rational rational::operator/ (rational r)
{
	int Fn = this->number * r.denom;
	int Fd = this->denom * r.number;

	rational F(Fn, Fd);
	return F;
}