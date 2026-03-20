#include<iostream>
using namespace std;
int main()
{
	int a, b;

	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	int p = 2 * (a + b);
	int s = a * b;

	cout << "Perimeter=" << p << endl;
	cout << "Area=" << s << endl;

	return 0;
}