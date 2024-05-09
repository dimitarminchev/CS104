#include <iostream>
using namespace std;

// Функция за намиране на най-големия общ делител
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Функция за намиране на минималния брой преливания
int minPour(int m, int n) {
    int pour = 1;
    int from = m;
    int to = 0;
    while (from != n) {
        int temp = min(from, n - to);
        to += temp;
        from -= temp;
        pour++;
        if (from == n || to == m)
            break;
        if (from == 0) {
            from = m;
            pour++;
        }
        if (to == n) {
            to = 0;
            pour++;
        }
    }
    return pour;
}

int main() {
    int volume;
    cout << "Въведете обема на цистерната: ";
    cin >> volume;

    int m = 3; // Вместимост на първата кофа
    int n = 2; // Вместимост на втората кофа

    if (volume < gcd(m, n) || volume % gcd(m, n) != 0) {
        cout << "Невъзможно е да се напълни цистерната с тези кофи." << endl;
    } else {
        int min_pour = minPour(m, n);
        cout << "Минималният брой преливания е: " << min_pour << endl;
    }

    return 0;
}
