#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (double i = 1; i <= n; i++)
	{
		cout << 1 / pow(i, 2) << endl;
	}
	return 0;
} 
