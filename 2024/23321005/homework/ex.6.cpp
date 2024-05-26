#include <iostream>

using namespace std;

int main() {
    int target_sum;

    // Въвеждане на сумата, която цифрите на числото трябва да имат
    cout << "Въведете сумата, която цифрите на числото трябва да имат (в интервала [2, 27]): ";
    cin >> target_sum;

    // Проверка за валидност на входните данни
    if (target_sum < 2 || target_sum > 27) {
        cout << "Грешка: Невалидна сума. Моля, въведете число в интервала [2, 27]." << endl;
        return 1;
    }

    cout << "Трицифрени числа със сбор на цифрите равен на " << target_sum << ":" << endl;

    // Извеждане на всички трицифрени числа със сбор на цифрите равен на target_sum
    for (int i = 100; i <= 999; ++i) {
        int digit1 = i / 100;
        int digit2 = (i / 10) % 10;
        int digit3 = i % 10;
        int sum_of_digits = digit1 + digit2 + digit3;

        if (sum_of_digits == target_sum) {
            cout << i << endl;
        }
    }

    return 0;
}
