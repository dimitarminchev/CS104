//The Fibonacci sequence to a given number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int a = 0, b = 1, c = 0;

    cout << "Fibonacci sequence up to " << n << ": ";

    while (c <= n) {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }

    cout << endl;

    return 0;
}
