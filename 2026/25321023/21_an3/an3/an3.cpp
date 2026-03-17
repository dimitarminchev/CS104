#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double value = pow(1.0 + 1.0 / i, i);
        cout << value << " ";
    }

    return 0;
}