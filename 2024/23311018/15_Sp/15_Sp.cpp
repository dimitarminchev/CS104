#include<iostream>
using namespace std;
int main()
{
	int n;

	cout << "1. Square" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Circle" << endl;
	cout << "Please select [1-3]: ";
	cin >> n;

	if (n == 1)
	{
		int a;
		cout << "a=";
		cin >> a;
		cout << "P=" << 4 * a << endl;
		cout << "S=" << a * a << endl;
	}

	if (n == 2)
	{
		int a,b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "P=" << 2 * (a + b) << endl;
		cout << "S=" << a * b << endl;
	}

	if (n == 3)
	{
		float r;
		cout << "r=";
		cin >> r;
		cout << "P=" << 4 * 3.14 * r << endl;
		cout << "S=" << 3.14 * r * r << endl;
	}

	return 0;
}