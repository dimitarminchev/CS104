#include <iostream>
using namespace std; 
int main()
{
	int num1, num2, temp;
	cout << "Enter two number: " << endl;
	cin >> num1;
	cin >> num2;

	temp = num2;
	num2 = num1;
	num1 = temp;
	
	cout << "The first number is: " << num1 << endl;
	cout << "The second number is: " << num2 << endl;

	return 0;
}

