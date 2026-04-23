#include <iostream>

int main()
{
	double R, pi = 3.14;

	std::cout << "Enter radius:"; std::cin >> R;

	std::cout << "Perimeter: " << 2 * pi * R          << "\n"
		      << "Square: "    << pi * std::pow(R, 2) << "\n"
		      << "Volume: "    << 4 / 3 * pi * std::pow(R, 3);

	return 0;
}