#include <iostream>
#include <cmath>
using namespace std;

// square_equation2.cpp = Подобрение решението на квадратното уравнение

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c (for ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    const double EPS = 1e-15; // A small threshold to treat very small 'a' as 0

    // If 'a' is effectively zero, handle as linear equation
    if(fabs(a) < EPS) {
        if(fabs(b) < EPS) {
            if(fabs(c) < EPS) {
                cout << "Infinite solutions (0=0)." << endl;
            } else {
                cout << "No solutions (non-zero constant = 0)." << endl;
            }
        } else {
            double x = -c / b;
            cout << "Linear solution: x = " << x << endl;
        }
        return 0;
    }

    double discriminant = b*b - 4*a*c;
    if(discriminant > 0) {
        // To reduce loss of significance, we use an alternative form:
        // x1 = 2c / (-b - sqrt(discriminant))
        // x2 = 2c / (-b + sqrt(discriminant))
        double sqrtD = sqrt(discriminant);
        double x1 = (-b - sqrtD) / (2*a);
        double x2 = (-b + sqrtD) / (2*a);

        cout << "Two real solutions:\n"
             << "x1 = " << x1 << "\n"
             << "x2 = " << x2 << endl;
    } else if(fabs(discriminant) < EPS) {
        double x = -b / (2*a);
        cout << "One real solution: x = " << x << endl;
    } else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        cout << "Two complex solutions:\n"
             << realPart << " + " << imagPart << "i\n"
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
