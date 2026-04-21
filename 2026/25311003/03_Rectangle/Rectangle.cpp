// Rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int a, b;
	std::cout << "a=";
	if (!(std::cin >> a)) return 1;

	std::cout << "b=";
	if (!(std::cin >> b)) return 1;

	int p = 2 * (a + b);
	int s = a * b;
	std::cout << "P=" << p << std::endl;
	std::cout << "S=" << s << std::endl;

	return 0;
}
