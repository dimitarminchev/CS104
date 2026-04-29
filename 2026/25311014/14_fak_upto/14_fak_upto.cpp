#include <iostream>

int main()
{
	int value, fak = 1;

	std::cout << "Enter value: "; std::cin >> value;

	for (int i = 1; i <= value; i++) { fak *= i; }

	std::cout << fak;
}