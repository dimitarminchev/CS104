// 18. primes.cpp = Простите числа до зададено число

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if(num < 2) return false;
    if(num == 2) return true;
    if(num % 2 == 0) return false;
    int limit = sqrt(num);
    for(int i = 3; i <= limit; i += 2) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Print prime numbers up to: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are:" << endl;
    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
