#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float Ax, Ay, Ar, Bx, By, Br;

    cout << "Enter first circle [x y r]:" << endl;
    cin >> Ax >> Ay >> Ar;
    cout << "Enter second circle [x y r]:" << endl;
    cin >> Bx >> By >> Br;

    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));
    float d2 = d * d;
    float d4 = d2 * d2;
    float a = (Ar * Ar - Br * Br) / (2 * d2);
    float z = (Ar * Ar - Br * Br);
    float c = sqrt(2 * (Ar * Ar + Br * Br) / d2 - (z * z) / d4 - 1);
    float fx = (Ax + Bx) / 2 + a * (Bx - Ax);
    float gx = c * (By - Ay) / 2;
    float ix1 = fx + gx;
    float ix2 = fx - gx;
    float fy = (Ay + By) / 2 + a * (By - Ay);
    float gy = c * (Ax - Bx) / 2;
    float iy1 = fy + gy;
    float iy2 = fy - gy;

    // ????????
    if (Ar + Br < d) cout << "No interception points." << endl;
    if (Ar + Br == d) cout << "One interception point." << endl << "x1=" << ix1 << endl << "y1=" << iy1 << endl;
    if (Ar + Br > d) cout << "Two interception point." <<endl << "x1=" << ix1 << endl << "x2=" << ix2 << endl << "y1=" << iy1 << endl<< "y2=" << iy2 << endl;

    return 0;
}
