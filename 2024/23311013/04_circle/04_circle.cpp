#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	int r;

	print("Enter a value of radius: ");
	cin >> r;

	print("P = " << 2 * M_PI * r);
	print("S = " << M_PI * r * r);
	print("V = " << (4 * M_PI * r * r * r) / 3);
}