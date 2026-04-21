#include <iostream>
using namespace std;

int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;

    double pi = 3.14;

    double perimeter = 2 * pi * r;
    double area = pi * r * r;
    double volume = (4.0 / 3.0) * pi * r * r * r;

    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    cout << "Volume (Sphere): " << volume << endl;

    return 0;
}
