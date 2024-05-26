//  Sem proekt zad17
#include <iostream>
#include <cmath>
using namespace std;

float F(float x) {
    return pow(x, 9.0) - pow(x, 7.0) + 2.0 * x * x - 1.0;
}

int main() {
    float x1 = 0.0;
    float x2 = 1.0;
    float xc = (x1 + x2) / 2.0;
    float y1 = F(x1);
    float y2 = F(x2);
    float yc = F(xc);
    bool rising = y1 < y2;
    float yc_old = NAN;
    while ((yc != 0.0) || (yc != yc_old)) {
        if (rising) {
            if (yc < 0.0) {
                x1 = xc;
                y1 = F(x1);
            }
            else {
                x2 = xc;
                y2 = F(x2);
            }
        }
        else {
            if (yc > 0.0) {
                x1 = xc;
                y1 = F(x1);
            }
            else {
                x2 = xc;
                y2 = F(x2);
            }
        }
        xc = (x1 + x2) / 2.0;
        yc_old = yc;
        yc = F(xc);
        if (yc == yc_old) {
            break;
        }
    }
    cout << xc << endl;
    return 0;
}
