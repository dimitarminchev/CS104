#include <iostream>

int main()
{
	int n, sum = 0;

	std::cout << "Find the sum of the first N numbers.\nN = ";
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	std::cout << "Total sum: " << sum;
}