#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "n=";
	cin >> n;

	int a = 1, b = 1, c = a + b;
	cout << a << " " << b << " " << c << " ";

	while (true)
	{
		a = b;
		b = c;
		c = a + b;
		if (c >= n) break;
		cout << c << " ";
	}

	return 0;
}

