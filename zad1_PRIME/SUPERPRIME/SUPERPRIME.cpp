#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    long long r = static_cast<long long>(sqrt((long double)n));
    for (long long i = 3; i <= r; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isSuperPrime(long long n) {
    // a super-prime: n and every right-truncation of n is prime
    while (n > 0) {
        if (!isPrime(n)) return false;
        n /= 10;
    }
    return true;
}

int main()
{
    long long a, b;
    if (!(cin >> a >> b)) return 0;

    if (a > b) swap(a, b);

    // enforce problem bounds: 100 < m < n < 999 -> consider only 101..998
    long long lo = max(a, 101LL);
    long long hi = min(b, 998LL);

    int count = 0;
    for (long long n = lo; n <= hi; ++n) {
        if (isSuperPrime(n)) ++count;
    }

    cout << count << '\n';
    return 0;
}