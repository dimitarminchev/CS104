#include<iostream>
#include<cmath>
using namespace std;

double fak(int n)
{
	if (n == 1) return 1;
	else return n * fak(n - 1);
}

int main()
{
	int n;

	cout << "5 of 35: " << fak(35) / (fak(5) * fak(35 - 5)) << endl;
	cout << "6 of 42: " << fak(42) / (fak(6) * fak(42 - 6)) << endl;
	cout << "6 of 49: " << fak(49) / (fak(6) * fak(49 - 6)) << endl;
	return 0;
}