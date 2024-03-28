//f = sum k=[1..n] (-1)^k * x^k
#include <iostream>
#include <cmath>
using namespace std;

double calculateFormula(int n, double x) {
    double sum = 0;
    for (int k = 1; k <= n; ++k) {
        sum += pow(-1, k) * pow(x, k);
    }
    return sum;
}

int main() {
    int n;
    double x;
    cout << "n = ";
    cin >> n;
    cout << "x = ";
    cin >> x;

    double result = calculateFormula(n, x);
    cout << "f = sum(k = 1 to " << n << ") (-1) ^ k * x ^ k =  " << result << endl;

    return 0;
}
