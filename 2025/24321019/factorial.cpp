#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1; // base case: factorial(0) and factorial(1) = 1
    return n * factorial(n - 1); // multiply n by factorial of (n-1)
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // read input number
    cout << "Factorial: " << factorial(n) << endl; // output factorial
    return 0;
}
