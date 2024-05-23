#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Insert 4 digits number = ";
	cin >> a;

	int a4 = (a / 1000) % 10;
	int a3 = (a / 100) % 10;
	int a2 = (a / 10) % 10;
	int a1 = (a / 1) % 10;

	cout << "sum = " << a1 + a2 + a3 + a4 << endl;
	cout << "sum2 = " << a1 * a2 * a3 * a4 << endl;

	return 0;
}