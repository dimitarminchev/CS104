#include <iostream>     // For input and output
#include <cmath>        // For fabs() – absolute value of a floating-point number

using namespace std;

// Definition of the function f(x) = x^3 - 3x^2 + 6x - 1
double f(double x) {
    return x * x * x - 3 * x * x + 6 * x - 1;
}

int main() {
    double a = 0.0, b = 1.0;      // Initial interval [a, b]
    double epsilon = 0.0001;      // Desired accuracy for the root
    double c;                     // Midpoint of the interval

    // Check if there's a root in the interval [a, b] (i.e., f(a) and f(b) have opposite signs)
    if (f(a) * f(b) > 0) {
        cout << "The function has no root in the interval [" << a << "; " << b << "]." << endl;
        return 1;  // Exit the program because bisection is not applicable
    }

    // Main loop of the bisection method
    while ((b - a) >= epsilon) {
        c = (a + b) / 2;          // Compute the midpoint of the interval

        if (fabs(f(c)) < epsilon) {
            break;                // If f(c) is close enough to 0, root is found
        }

        // If f(a) and f(c) have opposite signs, the root is in [a, c]
        if (f(a) * f(c) < 0)
            b = c;
        else                     // Otherwise, it's in [c, b]
            a = c;
    }

    // Print the found root and the function value at that point
    cout << "Found root: x = " << c << endl;
    cout << "f(x) = " << f(c) << endl;

    return 0; // Exit the program successfully
}