// 17  Фибоначи.cpp :
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int a = 1, b = 1, c = a + b;
	cout << a << " " << b << " " << c << " ";

	do
	{
		a = b;
		b = c;
		c = a + b;
		cout << c << " ";
	} while (c < n);
	
	return 0;
	}
  

