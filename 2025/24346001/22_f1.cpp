// f1.cpp = Намерете сумата: f = sum k=[1..n] x^k

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    double f = 0.0;
    for(int k = 1; k <= n; k++) {
        f += pow(x, k);
    }

    cout << "f = " << f << endl;
    return 0;
}
