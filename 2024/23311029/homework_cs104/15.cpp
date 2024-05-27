#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Въведете цяло положително петцифрено число: ";
    cin >> number;

    if (number < 10000 || number > 99999) {
        cout << "Числото не е петцифрено!" << endl;
        return 1;
    }
    int first_digit = number / 10000;
    int second_digit = (number / 1000) % 10;
    int fourth_digit = (number / 10) % 10;
    int fifth_digit = number % 10;

    if (first_digit == fifth_digit && second_digit == fourth_digit) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
