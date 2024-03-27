// Намерете сумата: f = sum k=[1..n] (-1)^k * x^k
#include <iostream>
#include <cmath>
using namespace std;

double geometricSeriesSum(double x, int n) {
    if (x == 1) return n;
    return x * ((1 - pow(x, n)) / (1 - x));
}

int main() {
    double x;
    int n;
    cout << "vuvedette x: ";
    cin >> x;
    cout << "vuvedete n: ";
    cin >> n;

    double f_even = geometricSeriesSum(x * x, n / 2);
    double f_odd = -geometricSeriesSum(-x, n / 2);
    double sum = f_even + f_odd;

    cout << "sumata na redicata f = sum(k=1 to n) (-1)^k * x^k е: " << sum << endl;

    return 0;
}