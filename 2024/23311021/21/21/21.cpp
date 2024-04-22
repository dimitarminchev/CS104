#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	for (size_t i = 1; i <= 100; i++)
	{
		if (i%7==0 || i%10 ==7 || i/10==7)
		{
			cout << "Click" << " ";
		}
		else
		{
			cout << i << " ";
		}
	}
}

