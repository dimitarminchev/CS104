#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	int fib[100] = { 1, 1, 2};
	cin >> num;

	cout << "End the final number is:\n" ;
	for (int i = 3; i < num; i++)
	{
		fib[i] = fib[i - 2] + fib[i - 1];
	}

	for (int i = 0; i < num; i++)
	{
		cout << fib[i] << "\n";
	}
	return 0;
}