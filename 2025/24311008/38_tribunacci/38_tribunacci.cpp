


#include <iostream>
using namespace std;
int main()
{
	const int N = 50;
	double fib[N] = { 1,1,1 };
	for (int k = 3; k < N; k++)
	{
		fib[k] = fib[k - 1] + fib[k - 2] + fib[k - 3];
	}
	for (int k = 0; k < N;k++)
		cout << fib[k] << "";
	return 0;
}


