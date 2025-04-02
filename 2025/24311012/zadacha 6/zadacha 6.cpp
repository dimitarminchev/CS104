#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a > b)
	{
		std::swap(a, b);
	}
	for (int i = a; i <= b; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "fizzbuzz ";
		}
		else if (i % 3 == 0) {
			std::cout << "fizz ";
		}
		else if (i % 5 == 0) {
			std::cout << "buzz ";
		}
		else {
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;

	return 0;
}
