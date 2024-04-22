#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,x;
	int sum = 0;
	cin >> x>>n;

	for (int i = 1; i <= n; i++)
	{
		int element = pow(x,i);
		sum = sum + element;
	}

	cout << sum << " ";



	return 0;
}

