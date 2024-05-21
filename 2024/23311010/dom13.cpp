#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Въведете шестцифрено число: ";
    cin >> number;
    if (number < 100000 || number > 999999) {
        cout << "Моля, въведете шестцифрено число." << endl;
        return 1; 
    }
    int largestDigit = 0;
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit > largestDigit) {
            largestDigit = digit;
        }
        temp /= 10;
    }
    cout << "Най-голямата цифра е: " << largestDigit << endl;
    return 0;
}
