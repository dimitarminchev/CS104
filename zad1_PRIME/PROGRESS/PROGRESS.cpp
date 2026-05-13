#include <iostream>
#include <algorithm>

using namespace std;

static bool isDistinctArithmeticDigits(int x) {
    int a = x / 100;
    int b = (x / 10) % 10;
    int c = x % 10;
    // digits must be different and form an arithmetic progression: a + c == 2*b
    return (a != b && b != c && a != c) && (a + c == 2 * b);
}

int main() {
    int m, n;
    if (!(cin >> m >> n)) return 0;

    if (m > n) swap(m, n);

    // Problem constraint: consider only numbers with 100 < number < 999 -> 101..998
    int lo = max(m, 101);
    int hi = min(n, 998);

    int count = 0;
    for (int x = lo; x <= hi; ++x) {
        if (isDistinctArithmeticDigits(x)) ++count;
    }

    cout << count << '\n';
    return 0;
}