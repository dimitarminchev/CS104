#include <iostream>
using namespace std;
int main() {
    int digits[5];
    for (int i = 0; i < 5; i++) {
        cin >> digits[i];
    }

    // Проверяваме всички трицифрени числа от най-малкото към най-голямото
    for (int n = 100; n <= 999; n++) {
        if (n % 7 == 0) {
            int first = n / 100;       // първа цифра
            int second = (n / 10) % 10; // втора цифра
            int third = n % 10;        // трета цифра

            bool f1 = false, f2 = false, f3 = false;

            // Проверяваме дали всяка цифра е сред въведените
            for (int i = 0; i < 5; i++) {
                if (first == digits[i]) f1 = true;
                if (second == digits[i]) f2 = true;
                if (third == digits[i]) f3 = true;
            }

            // Ако и трите цифри са намерени в списъка
            if (f1 && f2 && f3) {
                cout << n << endl;
                return 0; // Намерили сме най-малкото, излизаме
            }
        }
    }

    // Ако цикълът приключи без резултат
    cout << -1 << endl;

    return 0;
}