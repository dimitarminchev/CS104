
#include <iostream>
#include <cmath>

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

int main()
{
    long long a, b;
    if (!(cin >> a >> b)) return 0;

    if (a > b) swap(a, b);

    bool first = true;
    for (long long n = max(2LL, a); n <= b; ++n) {
        if (isPrime(n)) {
            if (!first) cout << ' ';
            cout << n;
            first = false;
        }
    }
    if (!first) cout << '\n';
    return 0;
}