#include <iostream>

using namespace std;

int main()
{
    int number;

    cin >> number;

    int firstDigit = number / 100;
    int middleDigit = (number / 10) % 10;
    int lastDigit = number % 10;

    cout << lastDigit << middleDigit << firstDigit << endl;

	return 0;
}
