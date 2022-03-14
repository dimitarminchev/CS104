#include <iostream>

int main()
{
	double a, b, c, d1, d2, d3;

	std::cout << "Meters:" << std::endl;
	std::cin >> a >> b >> c;
	std::cout << "Pipes:" << std::endl;
	std::cin >> d1 >> d2 >> d3;

	double v = a * b * c;
	double sum = d1 + d2 + d3;

	std::cout << "Hours: " << v / sum;
}