// Изведете редицата: An = (1 + (1/n))^n
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "vuvedete 4isloto n: ";
    cin >> n;

    cout << "redicata A_n = (1 + 1/n)^n za n = 1 do " << n << " е:\n";
    cout << fixed << setprecision(6); // Задаваме форматиране за плаващата запетая

    for (int i = 1; i <= n; ++i) {
        double term = pow(1.0 + 1.0 / i, i); // Пресмятаме стойността на текущия член на редицата
        cout << "A_" << i << " = " << term << endl; // Отпечатваме текущия член
    }

    return 0;
}
