#include <iostream>
using namespace std;

int main() {
    double r;
    const double pi = 3.1415926535897932;

    cout << "Въведи радиус: ";
    cin >> r;

    double P = 2 * pi * r;
    double S = pi * r * r;
    double V = (4.0 / 3.0) * pi * r * r * r;

    cout << "Периметър = " << P << endl;
    cout << "Лице = " << S << endl;
    cout << "Обем = " << V << endl;

    return 0;
}