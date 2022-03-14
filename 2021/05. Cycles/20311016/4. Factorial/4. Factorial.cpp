#include <iostream>

int main()
{
	int n, f = 1;

	std::cout << "Factorial calculator (n! = ?)\nn = ";
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		f = f * i;
	}

	std::cout << "n! = " << f;
}