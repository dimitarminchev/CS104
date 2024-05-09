#include <iostream>
using namespace std;
int main() {
    int number;

    // Въвеждане на трицифрено число
    cout << "Въведете трицифрено число: ";
    cin >> number;

    // Проверка дали числото е валидно (трицифрено)
    if (number < 100 || number > 999) {
        cout << "Грешка! Моля, въведете трицифрено число." << endl;
        return 1;
    }

    // Извличане на цифрите на числото
    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    // Произведение на цифрите
    int product = digit1 * digit2 * digit3;

    // Проверка дали числото е кратно на произведението на цифрите си
    if (number % product == 0) {
        cout << number << " е кратно на произведението от цифрите си." << endl;
    } else {
        cout << number << " не е кратно на произведението от цифрите си." << endl;
    }

    return 0;
}
