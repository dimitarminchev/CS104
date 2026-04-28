#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Cx, Cy, Cr;
    float Dx, Dy, Dr;

    cout << "Enter circle C (x,y,r):" << endl;
    cin >> Cx >> Cy >> Cr;

    cout << "Enter circle D (x,y,r):" << endl;
    cin >> Dx >> Dy >> Dr;

    float d = sqrt(pow(Cx - Dx, 2) + pow(Cy - Dy, 2));

    cout << "Distance between centers: " << d << endl;

    if (d > Cr + Dr)
    {
        cout << "Circles have no common points" << endl;
        return 0;
    }

    if (d < fabs(Cr - Dr))
    {
        cout << "Circles have no common points" << endl;
        return 0;
    }

    if (d == 0 && Cr == Dr)
    {
        cout << "Circles have infinitely many common points" << endl;
        return 0;
    }

    if (d == Cr + Dr || d == fabs(Cr - Dr))
    {
        cout << "Circles have one common point" << endl;

        float x = Cx + (Dx - Cx) * Cr / d;
        float y = Cy + (Dy - Cy) * Cr / d;

        cout << "Intersection point: (" << x << ", " << y << ")" << endl;
        return 0;
    }

    cout << "Circles have two common points" << endl;

    float l = (pow(Cr, 2) - pow(Dr, 2) + pow(d, 2)) / (2 * d);
    float h = sqrt(pow(Cr, 2) - pow(l, 2));

    float x2 = Cx + l * (Dx - Cx) / d;
    float y2 = Cy + l * (Dy - Cy) / d;

    float Px1 = x2 + h * (Dy - Cy) / d;
    float Py1 = y2 - h * (Dx - Cx) / d;

    float Px2 = x2 - h * (Dy - Cy) / d;
    float Py2 = y2 + h * (Dx - Cx) / d;

    cout << "Intersection point 1: (" << Px1 << ", " << Py1 << ")" << endl;
    cout << "Intersection point 2: (" << Px2 << ", " << Py2 << ")" << endl;

    return 0;
}