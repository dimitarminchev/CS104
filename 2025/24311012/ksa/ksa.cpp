#include <iostream>
int main()
{
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;

	return 0;
}
