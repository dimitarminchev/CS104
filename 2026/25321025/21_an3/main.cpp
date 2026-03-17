#include<iostream>
using namespace std;

double Pow(double n, int p)
{
	double result = 1;
	for (int i = 1; i <= p; i++)
	{
		result *= n;
	}
	return result;
}

int main()
{
	int n;
	cin >> n;

	for (double i = 1; i <= n; i++)
	{
		cout << Pow((1 + (1 / i)), i) << endl;
	}
}