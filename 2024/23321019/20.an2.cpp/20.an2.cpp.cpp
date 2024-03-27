// Изведете редицата: An = 1 / (n^2)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Vuvedete 4isloto n: ";
    cin >> n;

    cout << "Redicata A_n = 1/(n^2) za n = 1 do " << n << " е:\n";
    cout << fixed << setprecision(6); // Задаваме форматиране за плаващата запетая

    for (int i = 1; i <= n; ++i) {
        double term = 1.0 / (i * i); // Пресмятаме стойността на текущия член на редицата
        cout << "A_" << i << " = " << term << endl; // Отпечатваме текущия член
    }

    return 0;
}