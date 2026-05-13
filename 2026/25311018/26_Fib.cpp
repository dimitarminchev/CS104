#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 1, c = a + b, n;
	cout << "Enter n: ";
	cin >> n;
	cout << "1 1 2 ";
	while (c < n)
	{
		a = b;
		b = c;
		cout << c << " ";
		c = a + b;
	}
	return 0;
}