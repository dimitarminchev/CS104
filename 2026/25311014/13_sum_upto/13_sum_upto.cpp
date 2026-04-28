#include <iostream>

int main()
{
	int value, sum = 0;

	std::cout << "Enter value: "; std::cin >> value;

	for (int i = 0; i <= value; i++) { sum += i; }

	std::cout << sum;
}