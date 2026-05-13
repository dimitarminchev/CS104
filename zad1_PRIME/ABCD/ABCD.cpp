#include <iostream>
using namespace std;

static bool matches_property(int num) {
    int a = num / 1000;
    int b = (num / 100) % 10;
    int c = (num / 10) % 10;
    int d = num % 10;
    long long sum = a + 1LL * b * b + 1LL * c * c * c + 1LL * d * d * d * d;
    return sum == num;
}

int main() {
    int m, n;
    if (!(cin >> m >> n)) return 0;
    if (m > n) swap(m, n);

    // Restrict to four-digit numbers
    if (n < 1000 || m > 9999) {
        cout << 0 << '\n';
        return 0;
    }
    m = max(m, 1000);
    n = min(n, 9999);

    int count = 0;
    for (int i = m; i <= n; ++i) {
        if (matches_property(i)) ++count;
    }

    cout << count << '\n';
    return 0;
}