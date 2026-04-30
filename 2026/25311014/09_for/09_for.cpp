#include <iostream>

int main()
{
	int value;

	std::cout << "Enter value: "; std::cin >> value;

	for (int i = 0; i <= value; i++) { std::cout << i << "\n"; }
}