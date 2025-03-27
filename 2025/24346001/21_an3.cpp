#include <iostream>
#include <cmath>
using namespace std;

// an3.cpp = Изведете редицата: An = (1 + (1/n))^n

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        double term = pow((1.0 + 1.0 / i), i);
        cout << "A_" << i << " = " << term << endl;
    }

    return 0;
}
