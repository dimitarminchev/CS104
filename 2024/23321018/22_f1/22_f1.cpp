//  f = sum k=[1..n] x^k

#include <iostream>
#include <cmath>
using namespace std;

double calculateFormula(int n, double x) {
    double sum = 0;
    for (int k = 1; k <= n; ++k) {
        sum += pow(x, k);
    }
    return sum;
}

int main() {
    int n;
    double x;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of x: ";
    cin >> x;

    double result = calculateFormula(n, x);
    cout << "The result of the formula f = sum(k=1 to " << n << ") x^k is: " << result << endl;

    return 0;
}

