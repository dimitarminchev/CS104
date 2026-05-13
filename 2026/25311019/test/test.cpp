#include <iostream>
using namespace std;
int main() {
    int m, n;
    if (!(cin >> m >> n)) return 0;

    int count = 0;

    for (int i = m; i <= n; i++) {
        // Разделяме числото на отделни цифри: abcd
        int d = i % 10;          // последна цифра (на четвърта степен)
        int c = (i / 10) % 10;   // трета цифра (на трета степен)
        int b = (i / 100) % 10;  // втора цифра (на втора степен)
        int a = (i / 1000) % 10; // първа цифра (на първа степен)

        // Изчисляваме сумата според условието
        // a + b*b + c*c*c + d*d*d*d
        int sum = a + (b * b) + (c * c * c) + (d * d * d * d);

        if (sum == i) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}