// Изчислете Факториел до зададено число
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int factorial = 1;

    for (int i = 1; i <= n; ++i) {
        factorial *= i; // Умножаваме текущото число с факториела
    }

    cout << "Faktoritel" << n << " е: " << factorial << endl;

    return 0;
}