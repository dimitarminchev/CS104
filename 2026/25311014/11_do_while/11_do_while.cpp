#include <iostream>

int main()
{
	int value, i = 0;

	std::cout << "Enter value: "; std::cin >> value;

	do { std::cout << i << "\n"; i++; } while (i <= value);
}