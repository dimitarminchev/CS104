//Calculate the factorial of a given number

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {
        int factorial = 1;
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "The factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}

