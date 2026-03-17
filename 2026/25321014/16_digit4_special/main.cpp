#include<iostream>
using namespace std;

int main()
{
	for (int i = 1000; i <= 9999; i++)
	{
		int n4 = i % 10;
		int n3 = (i / 10) % 10;
		int n2 = (i / 100) % 10;
		int n1 = i / 1000;

		if(n4 + n3 == n2 + n1)
		{
			cout << i << endl;
		}

	}
	return 0;
}