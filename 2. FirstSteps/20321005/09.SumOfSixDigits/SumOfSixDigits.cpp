#include<iostream>

using namespace std;

int main()
{
	int number, sum = 0, m;
	cout << "Enter a number: ";
	cin >> number;
	while (number > 0)
	{
		m = number % 10;
		if (m % 2 == 0) 
		{
			sum = sum + m;
			number = number / 10;
		}		
	}
	cout << "Sum is= " << sum << endl;
	return 0;
}