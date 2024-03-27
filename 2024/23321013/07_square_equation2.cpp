#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    float d = b * b - 4 * a * c;

    // Checking if the discriminant is greater than, equal to, or less than 0
    if (d > 0) {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (d == 0) {
        float x1 = -b / (2 * a);
        cout << "Roots are real and the same." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-d) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}