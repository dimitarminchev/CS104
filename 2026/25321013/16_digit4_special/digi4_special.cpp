#include<iostream>
using namespace std;

int main()
{
	for (int i = 1000; i <= 9999; i++)
	{
		int first = i / 1000;
		int second = (i / 100) % 10;
		int third = (i / 10) % 10;
		int fourth = i % 10;
		
		int first_sum = first + second;
		int second_sum = third + fourth;

		if (first_sum == second_sum)
		{
			cout << i << endl;
		}
	}
	return 0;
} 
