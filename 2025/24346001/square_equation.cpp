#include <iostream>
#include <cmath>
using namespace std;

// square_equation.cpp = Квадратно уравнение

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c (for ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    if(a == 0) {
        // Then it is not a quadratic equation
        cout << "This is not a quadratic equation (a=0)." << endl;
        return 0;
    }

    double discriminant = b*b - 4*a*c;
    if(discriminant > 0) {
        // Two real roots
        double x1 = (-b + sqrt(discriminant)) / (2*a);
        double x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Two real solutions: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if(discriminant == 0) {
        // One real root
        double x = -b / (2*a);
        cout << "One real solution: x = " << x << endl;
    } else {
        // Complex roots
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        cout << "Two complex solutions: "
             << realPart << " + " << imagPart << "i, "
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
