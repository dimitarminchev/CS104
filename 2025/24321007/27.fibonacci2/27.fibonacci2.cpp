#include <iostream>
using namespace std;

int main()
{
int fib[10] = { 1, 1 };

for (int k = 2; k < 10; k++)
{
	fib[k] = fib[k - 2] + fib[k - 1];
}

for (int k = 0; k < 10; k++)
{
	cout << fib[k] << " ";
}



return 0;
}