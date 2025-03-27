#include <iostream>
using namespace std;

//  reverse.cpp = Обръщане на трицифрено число

int main() {
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;

    int hundreds = number / 100;        // Extract hundreds digit
    int tens = (number / 10) % 10;      // Extract tens digit
    int ones = number % 10;             // Extract ones digit

    int reversed = (ones * 100) + (tens * 10) + hundreds;
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
