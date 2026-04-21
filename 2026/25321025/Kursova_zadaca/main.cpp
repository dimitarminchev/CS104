#include <iostream>
#include <cmath>
using namespace std;

// Definiram funkciyata f(x) = sin(x) - e^(-x)
double f(double x) {
    return sin(x) - exp(-x);
}

int main() {
    // Nachalen interval [a, b], kudeto f(a) i f(b) sa s protivopolozhen znak
    double a = 0.0;
    double b = 1.0;

    // Proverka dali intervalut e podhodyasht
    if (f(a) * f(b) >= 0) {
        cout << "Greshen nachalen interval [a, b]. f(a) i f(b) tryabva da sa s protivopolozhen znak.\n";
        return 0;
    }

    // Jelano tochnoct
    double eps = 1e-6;
    double c;

    // Metod na razpolovyavaneto
    while ((b - a) > eps) {
        c = (a + b) / 2.0; // sredata na intervala

        // Ako f(c) e dostatuchno blizo do 0, spirame
        if (fabs(f(c)) < eps) {
            break;
        }

        // Izbirame polovinata, v koyato ima smyana na znaka
        if (f(a) * f(c) < 0) {
            b = c; // korenut e v [a, c]
        }
        else {
            a = c; // korenut e v [c, b]
        }
    }

    cout.setf(ios::fixed);
    cout.precision(8);
    cout << "Priblizitelen realen koren na f(x) = sin(x) - e^(-x) e x = " << c << endl;

    return 0;
}
