#include <iostream>

int main()
{
	int n, min = INT_MAX, max = INT_MIN;

	std::cout << "n=";
	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}

		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	std::cout << "min = " << min << std::endl;
	std::cout << "max = " << max << std::endl;
}