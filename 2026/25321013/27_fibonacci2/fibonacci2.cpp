#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "n = ";
	cin >> num;

	int Fib[1000] = {1, 1};

	for (int k = 2; k < num; k++)
	{
		Fib[k] = Fib[k - 2] + Fib[k - 1];
	}

	for (int i = 0; i < num; i++)
	{
		cout << Fib[i] << " ";
	}
	return 0;
} 
