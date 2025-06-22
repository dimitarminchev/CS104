#include <iostream>
using namespace std; 

int main() {
    double a, b; // define a, b as double
    cout << "Enter the two sides of the rectangle: "; // text
    cin >> a >> b; // read a and b from console
    cout << "Perimeter: " << 2 * (a + b) << endl; // calculate perimeter of rectangle based on the values given
    cout << "Area: " << a * b << endl; // calculate area of rectangle
}
