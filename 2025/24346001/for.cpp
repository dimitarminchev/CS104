#include <iostream>
using namespace std;

// for.cpp = Цикличен алгоритъм с предварително известен брой изпълнения.

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum from 1 to " << n << " is " << sum << endl;

    return 0;
}
