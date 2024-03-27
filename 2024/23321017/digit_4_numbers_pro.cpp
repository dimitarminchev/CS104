#include<iostream>
using namespace std;

int main() {
    int numberToWorkWith, sumOfDigits = 0, productOfDigits = 1;

    cout << "Enter a number: ";
    cin >> numberToWorkWith;

    int firstDigit = numberToWorkWith % 10;
    numberToWorkWith /= 10;

    int secondDigit = numberToWorkWith % 10;
    numberToWorkWith /= 10;

    int thirdDigit = numberToWorkWith % 10;
    numberToWorkWith /= 10;

    int fourthDigit = numberToWorkWith % 10;

    sumOfDigits = firstDigit + secondDigit + thirdDigit + fourthDigit;
    productOfDigits = firstDigit * secondDigit * thirdDigit * fourthDigit;

    cout << "The sum of the digits is: " << sumOfDigits << endl;
    cout << "The product of the digits is: " << productOfDigits << endl;
    return 0;
}