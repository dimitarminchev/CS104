#include <iostream>

int main()
{
	int size, n = 1;
	std::cout << "Enter triangle size: ";
	std::cin >> size;
	std::cout << std::endl;

	for (int row = 0; row < size; row++)
	{
		for (int i = 1; i <= size - row; i++) std::cout << "  ";
		std::cout << "1   ";

		for (int j = 1; j <= row; j++)
		{
			n = n * (1 + row - j) / j;
			if (n <= 9) std::cout << n << "   ";
			else if (n >= 10) std::cout << n << "  ";
		}
		std::cout << std::endl;
	}
}