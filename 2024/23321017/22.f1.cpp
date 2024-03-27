#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int x, n;
    double sum = 0;
    cout << "Enter x: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += pow(x, i);
    }

    cout << "The sum of the series is " << sum << endl;
    return 0;
}