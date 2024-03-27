// Намерете сумата: f = sum k=[1..n] x^k
#include <iostream>
using namespace std;

double geometricSeriesSum(double x, int n) {
    if (x == 1) return n;
    return x * ((1 - pow(x, n)) / (1 - x));
}

int main() {
    double x;
    int n;
    cout << "vuvedete x: ";
    cin >> x;
    cout << "vuvedete n: ";
    cin >> n;

    double sum = geometricSeriesSum(x, n);
    cout << "suma na redicata f = sum(k=1 to n) x^k е: " << sum << endl;

    return 0;
}