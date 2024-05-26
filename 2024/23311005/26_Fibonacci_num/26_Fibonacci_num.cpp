#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	int a = 1;
	int b = 1;
	int fib = a + b;

	if (n == 1)
	{
		cout << a << endl;
	}
	else if (n == 2)
	{
		cout << a << " " << b << endl;
	}
	else if (n == 2)
	{
		cout << a << " " << b << " " << fib << endl;
	}
	else

	{
		cout << a << " " << b << " " << fib << " ";
		for (int i = 3; i < n; i++)
		{
			a = b;
			b = fib;
			fib = a + b;
			cout << fib << " ";
		}
	}

	return 0;
}