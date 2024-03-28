#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		bool isprime = true; 
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isprime = false; 
				{
					if (isprime == true) cout << i << " "; 
					return 0; 
				}
			}
		}
	}
}