#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		if (b > c)
		{
			cout << c << " is the smallest number" << endl;
		}
		else
		{
			cout << b << " is the smallest number" << endl;
		}

		cout << a << " is the biggest number" << endl;
	}
	else if (b > a && b > c)
	{
		if (a > c)
		{
			cout << c << " is the smallest number" << endl;
		}
		else
		{
			cout << a << " is the smallest number" << endl;
		}
		cout << b << " is the biggest number" << endl;
	}
	else if (c > a && b < c)
	{
		if (b > a)
		{
			cout << a << " is the smallest number" << endl;
		}
		else
		{
			cout << b << " is the smallest number" << endl;
		}
		cout << c << " is the biggest number" << endl;
	}


	return 0;
}
