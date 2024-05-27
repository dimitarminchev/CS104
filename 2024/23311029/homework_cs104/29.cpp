#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float num;
    cin >> num;

    int integerPart = (round(num * 10000));

    while (integerPart % 2 == 0) {
        integerPart /= 2;
    }
    double result = integerPart / 10000.0;
    cout << fixed << setprecision(4) << result;
    return 0;
}
