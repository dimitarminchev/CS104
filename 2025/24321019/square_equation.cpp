#include <iostream>
#include <cmath> 
using namespace std;

// d is discriminant
int main() {
    double a, b, c; // define a b c as double
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c; // read em from console
    double d = b * b - 4 * a * c; // calculate discriminant (d), part of the quadratic formula
    if (d < 0) // if d is smaller than 0, apply the following:
        cout << "No real roots" << endl; // validation
    else { // if d is bigger than 0
        double x1 = (-b + sqrt(d)) / (2 * a); // calculate first root using the quadratic formula
        double x2 = (-b - sqrt(d)) / (2 * a); // calculate second root (same formula, just - instead of +)
        cout << "Roots: x1 = " << x1 << ", x2 = " << x2 << endl; // show both to user
    }
}
