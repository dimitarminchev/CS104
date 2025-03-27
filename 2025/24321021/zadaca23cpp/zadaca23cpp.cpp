#include <iostream>
#include <cmath>
using namespace std;

// f2.cpp = Намерете сумата: f = sum k=[1..n] (-1)^k * x^k

int main() {
    double x;
    int n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    double f = 0.0;
    for (int k = 1; k <= n; k++) {
        double sign = (k % 2 == 0) ? 1.0 : -1.0; // for k even the sign is '+' otherwise its '-'.
        f += sign * pow(x, k);
    }

    cout << "f = " << f << endl;
    return 0;
}