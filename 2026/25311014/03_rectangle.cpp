#include <iostream>

int main()
{
	int a, b;

	std::cout << "Enter rectangle sides length:"; std::cin >> a >> b;

	std::cout << "Perimeter: " << (a + b) * 2 << "\n Square: " << a * b;

	return 0;
}