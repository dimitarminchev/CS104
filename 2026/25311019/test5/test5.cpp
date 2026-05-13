#include <iostream>
using namespace std;
// Функция за проверка дали едно число е просто
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int m, n;
    if (!(cin >> m >> n)) return 0;

    int count = 0;

    for (int i = m; i <= n; i++) {
        int firstLevel = i;           // Самото число (напр. 293)
        int secondLevel = i / 10;     // Махаме последната цифра (напр. 29)
        int thirdLevel = i / 100;     // Остава само първата цифра (напр. 2)

        // Проверяваме дали и трите са прости
        if (isPrime(firstLevel) && isPrime(secondLevel) && isPrime(thirdLevel)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}