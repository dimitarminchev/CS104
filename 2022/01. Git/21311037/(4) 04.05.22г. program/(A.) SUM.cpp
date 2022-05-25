#include <iostream>
using namespace std;
// Greatest Common Divisor
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}


// Rational Number
class Rational
{
private:
    int number, denom;
public:
    Rational(int n, int d);
    int getNumber();
    int getDenom();
    void print();
};
Rational::Rational(int n, int d)
{
    this->number = n / gcd(n, d);
    this->denom = d / gcd(n, d);
}
int Rational::getNumber()
{
    return this->number;
}
int Rational::getDenom()
{
    return this->denom;
}
void Rational::print()
{
    cout << number << " " << denom << endl;
}

// Sum
Rational Sum(Rational A, Rational B)
{
    int Cn = B.getDenom() * A.getNumber() + B.getNumber() * A.getDenom();
    int Cd = A.getDenom() * B.getDenom();
    Rational C(Cn, Cd);
    return C;
}

// Main Fuction
int main()
{
    Rational S(0, 1);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
        Rational next(a, b);
            S = Sum(S, next);
	}
    S.print();
	return 0;
}
