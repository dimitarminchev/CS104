#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (double i = 1; i <= n; i++)
	{
		cout << pow(1 + (1 / i), i) << endl;
	}
	return 0;
} 

