#include <iostream>

void s_square()
{
	int a, P, S;

	std::cout << "Enter a: "; std::cin >> a;

	std::cout << "Perimeter: " << a * 4 << "\n"
		      << "Square: " << std::pow(a, 2);
}

void r_square()
{
	int a, b, P, S; 
	
	std::cout << "Enter a and b: "; std::cin >> a >> b;

	std::cout << "Perimeter: " << (a + b) * 2 << "\n"
		      << "Square: "    << a * b;
}

void c_square()
{
	double pi = 3.14, R, P, S;

	std::cout << "Enter radius: "; std::cin >> R;
	
	std::cout << "Perimeter: " << 2 * pi * R << "\n"
		      << "Square: "    << pi * std::pow(R, 2);
}


int main()
{
	int value; std::cout << "Enter number from 1 to 3: "; std::cin >> value;

	switch(value)
	{
		case 1: s_square(); break;
		case 2: r_square(); break;
		case 3: c_square(); break;

		default: std::cout << "invalid value";
	}
}