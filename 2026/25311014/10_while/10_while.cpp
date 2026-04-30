#include <iostream>

int main()
{
	int value, i = 0;

	std::cout << "Enter value: "; std::cin >> value;

	while (i <= value) { std::cout << i << "\n"; i++; }
}