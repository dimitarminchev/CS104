#include <iostream> // for input/output
#include <cmath>    // for sqrt()
using namespace std;

int main() {
    double a, b, c; // define a, b, c as doubles
    cout << "Enter a, b, c: "; // prompt user for input
    cin >> a >> b >> c; // read the input from console

    if (a == 0) { // if a is 0, it's not a quadratic equation
        if (b != 0) // if b isn't 0, it's a linear equation
            cout << "Linear equation: x = " << -c / b << endl; // solve linear: x = -c / b
        else
            cout << "No solution" << endl; // if both a and b are 0, there's no solution
    }
    else { // if a isn't 0, it's a quadratic equation
        double d = b * b - 4 * a * c; // calculate the discriminant (d = b² - 4ac)
        if (d < 0) // if d < 0, no real roots (complex numbers)
            cout << "No real roots" << endl; // notify user
        else { // if d >= 0, real roots exist
            double x1 = (-b + sqrt(d)) / (2 * a); // first root
            double x2 = (-b - sqrt(d)) / (2 * a); // second root
            cout << "Roots: x1 = " << x1 << ", x2 = " << x2 << endl; // print both roots
        }
    }
}
