#include <iostream>
using namespace std;

// an1.cpp = Изведете редицата: Аn = 1 / n

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "A_" << i << " = " << 1.0 / i << endl;
    }

    return 0;
}