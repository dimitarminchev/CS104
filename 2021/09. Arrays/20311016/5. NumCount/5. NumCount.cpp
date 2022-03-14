#include <iostream>

int main()
{
	const int COUNT = 10;

	int n, arrB[COUNT] = { 0,0,0,0,0,0,0,0,0,0 };

	std::cout << "n=";
	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		arrB[arr[i]]++;
	}

	for (int i = 0; i < COUNT; i++)
	{
		if (arrB[i] > 0)
		{
			std::cout << i << " => " << arrB[i] << std::endl;
		}
	}
}