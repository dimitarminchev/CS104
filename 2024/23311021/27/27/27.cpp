#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	for (int i = 1; i < num; i++)
	{
		bool isPrime = true;
		for (int j = 2; j < i; j++)
		{
			
			if (i % j == 0)
			{
				isPrime = false;
			}
		}

		if (isPrime == true)
		{
			cout << i << " ";
		}
	}

	return 0;
}

