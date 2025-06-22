#include <iostream>
using namespace std;

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n; // fib(0) = 0, fib(1) = 1 base cases
    return fibonacci(n - 1) + fibonacci(n - 2); // fib(n) = fib(n-1) + fib(n-2)
}

int main() {
    int n;
    cout << "Enter number of Fibonacci terms: ";
    cin >> n; // read how many fib numbers to print
    for (int i = 0; i < n; i++)
        cout << fibonacci(i) << " "; // print fib numbers
    cout << endl;
    return 0;
}
