#include<iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string number;
	int result = 0;

	cout << "Number: ";
	cin >> number;

	for (int i = 0; i < number.length(); i++)
	{
		int digit = (int)number[i] - (int)'0';

		if (digit % 2 == 0) 
		{
			result += digit;
		}
	}

	cout << "Result: " << result;

	return 0;
}