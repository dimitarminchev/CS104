#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Ax, Ay, Ar;
    float Bx, By, Br;
    float Cx, Cy, Dx, Dy;
    float a, h;

    cout << "Enter circle A (x, y, r):" << endl;
    cin >> Ax >> Ay >> Ar;

    cout << "Enter circle B (x, y, r):" << endl;
    cin >> Bx >> By >> Br;

    float d = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

    if (d == 0 && Ar == Br)
    {
        cout << "Circles are the same";
    }
    else if (d > Ar + Br || (d == 0 && Ar != Br))
    {
        cout << "Circles have NO common point of intercept";
    }
    else if (d == Ar + Br)
    {
        cout << "Circles have ONE common point of intercept";
    }
    else if (d < Ar + Br)
    {
        cout << "Circles have TWO common points of intercept" << endl;

        a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
        h = sqrt(pow(Ar, 2) - pow(a, 2));

        float x = (a * (Bx - Ax) / d) + Ax;
        float y = (a * (By - Ay) / d) + Ay;

        Cx = x + (h * (By - Ay) / d);
        Cy = y - (h * (Bx - Ax) / d);

        Dx = x - (h * (By - Ay) / d);
        Dy = y + (h * (Bx - Ax) / d);

        cout << "Cx = " << Cx << " ; Cy = " << Cy << endl;
        cout << "Dx = " << Dx << " ; Dy = " << Dy << endl;
    }

    return 0;
}