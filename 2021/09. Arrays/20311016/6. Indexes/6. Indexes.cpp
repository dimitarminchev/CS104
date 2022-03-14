#include <iostream>

int main()
{
	int n, p;

	std::cout << "n=";
	std::cin >> n;
	std::cout << "p=";
	std::cin >> p;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << "Indexes: ";
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == p)
		{
			std::cout << i << " ";
		}
	}
}