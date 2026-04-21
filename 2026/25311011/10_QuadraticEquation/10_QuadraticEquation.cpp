#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    double D = pow(b, 2) - 4 * a * c;
    cout << "D = " << D << endl;

    if (D > 0) {
        cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(D)) / (2 * a) << endl;
    }
    else if (D == 0) {
        cout << "x = " << -b / (2 * a) << endl;
    }
    else {
        cout << "No real solutions." << endl;
    }
}