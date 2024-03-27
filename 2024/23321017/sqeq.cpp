#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    if (a == 0) {
        cout << "The equation is not quadratic." << endl;
    } else {
        int d = b * b - (4 * a * c);

        if (d < 0) {
            cout << "The equation has no real roots." << endl;
        } else if (d == 0) {
            cout << "The equation has one real root: " << -b / (2 * a) << endl;
        } else {
            cout << "The equation has two real roots: " << (-b + sqrt(d)) / (2 * a) << " and "
                 << (-b - sqrt(d)) / (2 * a) << endl;
        }
    }

    return 0;
}