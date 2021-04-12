#include <iostream>

int main()
{
	int a, b, c, d;

	for (int i = 1000; i <= 9999; i++)
	{
		a = (i / 1000) % 10;
		b = (i / 100) % 10;
		c = (i / 10) % 10;
		d = (i / 1) % 10;

		if (a + b == c + d) std::cout << i << " ";
	}
}