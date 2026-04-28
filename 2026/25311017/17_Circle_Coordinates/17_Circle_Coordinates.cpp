#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Ax, Ay, Ar, Bx, By, Br;
    cout << "Enter circle A (x,y,r): ";
    cin >> Ax >> Ay >> Ar;
    cout << "Enter circle B (x,y,r): ";
    cin >> Bx >> By >> Br;

    float d = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

    if (d > Ar + Br)
    {
        cout << "Circles have NO common point of intercept" << endl;
    }
    else if (d == Ar + Br)
    {
        cout << "Circles have ONE common point of intercept" << endl;
    }
    else if (d < Ar + Br)
    {
        cout << "Circles have TWO common points of intercept" << endl;

        
        float a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
        float h = sqrt(pow(Ar, 2) - pow(a, 2));

        float Px = Ax + a * (Bx - Ax) / d;
        float Py = Ay + a * (By - Ay) / d;

        float Cx = Px + h * (By - Ay) / d;
        float Cy = Py - h * (Bx - Ax) / d;

        float Dx = Px - h * (By - Ay) / d;
        float Dy = Py + h * (Bx - Ax) / d;

        cout << "C = (" << Cx << ", " << Cy << ")" << endl;
        cout << "D = (" << Dx << ", " << Dy << ")" << endl;
    }

    return 0;
}