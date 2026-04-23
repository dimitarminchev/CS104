#include <iostream>

int main()
{
	double sum = 0.0, amount[8]{}, multiplier[8]{ 0.01, 0.02, 0.05, 0.1, 0.2, 0.5, 1, 2 };

	std::cout << "Enter how many money you have:\n";

	for (int i = 0; i <= 7; i++) { std::cin >> amount[i]; sum += amount[i] * multiplier[i]; }

	std::cout << "You have " << sum << " euro(s)";

	system("pause");
}