#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string number;

	cout << "Number: ";

	cin >> number;

	cout << endl;

	reverse(number.begin(), number.end());

	cout << "Reversed: " << number;
}