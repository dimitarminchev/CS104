#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double Ax, Ay, Ar, Bx, By, Br;

    cout << "Enter circle A (x y r): ";
    cin >> Ax >> Ay >> Ar;

    cout << "Enter circle B (x y r): ";
    cin >> Bx >> By >> Br;

    double dx = Bx - Ax;
    double dy = By - Ay;
    double d = sqrt(dx * dx + dy * dy);

    const double EPS = 1e-9;

    if (d < EPS && fabs(Ar - Br) < EPS) {
        cout << "Circles are identical - infinite number of common points." << endl;
        return 0;
    }

    if (d > Ar + Br + EPS) {
        cout << "Circles have no common points." << endl;
        return 0;
    }

    if (d < fabs(Ar - Br) - EPS) {
        cout << "One circle is inside the other - no common points." << endl;
        return 0;
    }

    double a = (Ar * Ar - Br * Br + d * d) / (2.0 * d);
    double h2 = Ar * Ar - a * a;

    double x2 = Ax + a * dx / d;
    double y2 = Ay + a * dy / d;

    cout << fixed << setprecision(6);

    if (fabs(h2) < EPS) {
        cout << "One common point of intersection:" << endl;
        cout << "(" << x2 << ", " << y2 << ")" << endl;
    }
    else {
        double h = sqrt(h2);

        double rx = -dy * (h / d);
        double ry = dx * (h / d);

        double xi1 = x2 + rx;
        double yi1 = y2 + ry;

        double xi2 = x2 - rx;
        double yi2 = y2 - ry;

        cout << "Two common points of intersection:" << endl;
        cout << "(" << xi1 << ", " << yi1 << ")" << endl;
        cout << "(" << xi2 << ", " << yi2 << ")" << endl;
    }

    return 0;
}