#include<iostream>
#include<cmath>
using namespace std;

double myFactorial(int a)
{
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return a * myFactorial(a - 1);
	}
}

int main()
{
	double n,r;
	cin >> n >> r;

	unsigned long long solver = myFactorial(n) / (myFactorial(r) * myFactorial(n - r));

	cout <<solver << endl;
	return 0;
}
