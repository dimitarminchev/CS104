#include <iostream>
using namespace std;

// 17. fibonacci.cpp = Редицата на фибоначи до зададено число

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if(n < 1) {
        cout << "No Fibonacci numbers to display." << endl;
        return 0;
    }

    int a = 0, b = 1;
    cout << "Fibonacci sequence up to " << n << ":" << endl;

    // Print the first Fibonacci number (which is 0 if we include it)
    if(a <= n) {
        cout << a << " ";
    }
    // Print the second Fibonacci number (1)
    if(b <= n) {
        cout << b << " ";
    }

    int next = a + b;
    while(next <= n) {
        cout << next << " ";
        a = b;
        b = next;
        next = a + b;
    }
    cout << endl;
    return 0;
}
