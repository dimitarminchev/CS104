#include <iostream>
#include <array>

using namespace std;

int main() {
    int a, b, c, d, e;
    if (!(cin >> a >> b >> c >> d >> e)) return 0;

    array<bool, 10> allowed{};
    int vals[5] = { a, b, c, d, e };
    for (int v : vals) {
        if (v >= 0 && v <= 9) allowed[v] = true;
    }

    int result = -1;
    for (int n = 100; n <= 999; ++n) {
        int h = n / 100;
        int t = (n / 10) % 10;
        int u = n % 10;
        if (!allowed[h] || !allowed[t] || !allowed[u]) continue;
        if (n % 7 == 0) { result = n; break; }
    }

    cout << result << '\n';
    return 0;
}