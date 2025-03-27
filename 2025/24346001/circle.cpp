#include <iostream>
using namespace std;

// 04. circle.cpp = Пeриметър, лице и обем на кръг и сфера по даден радиус

int main() {
    double r;
    const double PI = 3.14159265358979323846;

    cout << "Enter radius: ";
    cin >> r;

    double circumference = 2.0 * PI * r;         // Perimeter of the circle
    double area = PI * r * r;                    // Area of the circle
    double sphereVolume = (4.0 / 3.0) * PI * r * r * r; // Volume of the sphere

    cout << "Circumference: " << circumference << endl;
    cout << "Area of circle: " << area << endl;
    cout << "Volume of sphere: " << sphereVolume << endl;

    return 0;
}
