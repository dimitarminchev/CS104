#include <iostream>

int main()
{
	double sum = 0.0, amount[8] {};

	std::cout << "Enter how many money you have:\n";

	for(int i = 0; i < 7; i++)
	{
		std::cin >> amount[i];

		if(i == 7 || i == 8) { std::cout << " euro(s)"; }
		else { std::cout << " euro cent(s)"; }
	}

	for (int i = 0; i < 7; i++){ if (i < 7) { amount[i] /= 100; } sum += amount[i]; }

	std::cout << "You have" << sum << "euro(s)";
}