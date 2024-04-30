// Step_2 - ?????????? ?????? ?? ?????? ?? ???????? ?? ???????? ?????


#include <iostream>
using namespace std;


long long powerPair(int x, int y, int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        long long halfPower = powerPair(x, y, n / 2);
        return halfPower * halfPower;
    }
    else {
        long long halfPower = powerPair(x, y, (n - 1) / 2);
        return halfPower * halfPower * x * y;
    }
}

int main() {
    int x, y, n;
    cout << "Enter the pair (x, y): ";
    cin >> x >> y;
    cout << "Enter the power: ";
    cin >> n;

    long long result = powerPair(x, y, n);
    cout << "(" << x << ", " << y << ") raised to the power " << n << " is: " << result << endl;

    return 0;
}

