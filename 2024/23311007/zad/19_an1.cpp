// Изведете редицата: Аn = 1 / n
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Vuvedeto 4isloto n: ";
    cin >> n;

    cout << " " << n << " е:\n";
    cout << fixed << setprecision(2); // Задаваме форматиране за плаващата запетая

    for (int i = 1; i <= n; ++i) {
        double term = 1.0 / i; // Пресмятаме стойността на текущия член на редицата
        cout << "A_" << i << " = " << term << endl; // Отпечатваме текущия член
    }

    return 0;
}