#include<iostream>
using namespace std;

bool IsPrime(int a)
{
	for (int i = 2; i <= a / 2; i++)
	{
		if (a % i == 0 && a != i)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		if (IsPrime(i))
		{
			cout << i << " ";
		}
	}
}