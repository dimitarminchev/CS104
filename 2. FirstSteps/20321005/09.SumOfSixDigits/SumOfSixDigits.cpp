#include<iostream>
#include <string>
#include <sstream>

using namespace std;

int CalculateResult(string number)
{
	int result = 0;

	for (int i = 0; i < number.length(); i++)
	{
		int digit = (int)number[i] - (int)'0';

		if (digit % 2 == 0)
		{
			result += digit;
		}
	}

	return result;
}

int main()
{
	string number;
	int result;

	cout << "Number: ";
	cin >> number;

	result = CalculateResult(number);

	cout << "Result: " << result;

	return 0;
}