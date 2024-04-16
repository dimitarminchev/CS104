#include <iostream>
using namespace std;

int main()
{
	int Fib[20] = { 1,1 };

	for (int k = 2; k < 20; k++)
		Fib[k] = Fib[k - 2] + Fib[k - 1];

	for (int k = 0; k < 20; k++)
		cout << Fib[k] << " ";

	return 0;
}

