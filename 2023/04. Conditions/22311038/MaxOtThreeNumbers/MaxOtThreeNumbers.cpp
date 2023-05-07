#include<iostream>
using namespace std;
int main()
{
	int a, b, c;

	cout << "Enter a,b and c: ";
	cin >> a >> b >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "max=" << max << endl;

	return 0;
}