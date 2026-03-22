#include<iostream>
using namespace std;

int main()
{
	int a = 1, b = 1;
	int c = a + b;
	int num;
	cin >> num;

	cout << a << " " << b << " "; 
	while (c < num)
	{
		cout << c << " ";
		a = b;
		b = c;
		c = a + b;
	}

	return 0;
} 
