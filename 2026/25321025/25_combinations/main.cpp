#include<iostream>
using namespace std;

double Factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}

	return n * Factorial(n - 1);
}

int main()
{
	cout << "5 of 35: " << Factorial(35) / (Factorial(5) * Factorial(35 - 5)) << endl;
	cout << "6 of 42: " << Factorial(42) / (Factorial(6) * Factorial(42 - 6)) << endl;
	cout << "6 of 49: " << Factorial(49) / (Factorial(6) * Factorial(49 - 6)) << endl;
}