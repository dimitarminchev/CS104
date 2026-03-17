#include <iostream>
using namespace std;

int main() {
    int n;
    double x;
    cin >> x >> n;

    double sum = 0;
    double power = 1;

    for (int k = 1; k <= n; k++) {
        power *= x;     // x^k
        sum += power;
    }

    cout << sum << endl;
    return 0;
}