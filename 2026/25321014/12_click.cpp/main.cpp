#include<iostream>
using namespace std;

bool IsContains7(int a)
{
	while (a != 0)
	{
		if (a % 10 == 7)
		{
			return true;
		}

		a /= 10;
	}
}


int main() 
{
	
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || IsContains7(i))
		{
			cout << "Click ";
		}
		else
		{
			cout << i << " ";
		}
	}
}