#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false; // numbers less than 2 aren’t prime
    for (int i = 2; i * i <= n; i++) // check divisors up to sqrt(n)
        if (n % i == 0) return false; // if divisible, not prime
    return true; // else, it’s prime
}

int main() {
    int n;
    cout << "Up to which number? "; // ask user for limit
    cin >> n; // read input
    for (int i = 2; i <= n; i++) // check all numbers from 2 to n
        if (isPrime(i)) cout << i << " "; // print prime numbers only
    cout << endl; // new line after printing
    return 0; // end program
}
