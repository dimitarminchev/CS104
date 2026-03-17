#include <iostream>
using namespace std;

int main() {
    double x;
    int n;
    cin >> x >> n;

    double sum = 0;
    double power = 1;

    for (int k = 1; k <= n; k++) {
        power *= x;                  // x^k
        sum += (k % 2 == 0 ? 1 : -1) * power;  // (-1)^k * x^k
    }

    cout << sum << endl;
    return 0;
}