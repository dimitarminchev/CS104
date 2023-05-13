#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int firstDigit = number / 100;
    int secondDigit = (number / 10) % 10;
    int thirdDigit = number % 10;

    cout << thirdDigit * secondDigit * firstDigit << endl;

    return 0;
}