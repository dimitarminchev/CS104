#include <iostream>

using namespace std;

int main() {
    int a, b;
    if (!(cin >> a >> b)) return 0;

    int totalSum = 0;

    // Продължаваме, докато първият множител е по-голям от 0
    while (a >= 1) {
        // Извеждаме текущите стойности на множителите
        cout << a << " " << b << endl;

        // Ако първият множител е нечетен, добавяме втория към сумата
        if (a % 2 != 0) {
            totalSum += b;
        }

        // Първият се дели на 2, вторият се умножава по 2
        a /= 2;
        b *= 2;
    }

    // Извеждаме финалната сума
    cout << totalSum << endl;

    return 0;
}