#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		bool is_prime = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) is_prime = false;
		}
		if (is_prime) cout << i << endl;
	}
	return 0;
} 
