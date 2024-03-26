#include<iostream>

using namespace std;

int main() {
    int numberToReverse;

    cout << "Enter a three-digit number: ";
    cin >> numberToReverse;

    int firstDigit = numberToReverse % 10;
    numberToReverse /= 10;

    int secondDigit = numberToReverse % 10;
    numberToReverse /= 10;

    int thirdDigit = numberToReverse % 10;

    cout << firstDigit << secondDigit << thirdDigit << endl;
    return 0;
}