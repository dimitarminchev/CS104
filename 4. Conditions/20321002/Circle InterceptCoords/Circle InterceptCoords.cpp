// Извеждане на координати на пресечни точки на две окръжности

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

    float dx = Ax - Bx;
    float dy = Ay - By;
    double d = sqrt(pow(dx, 2) + pow(dy, 2));
    float a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
    float h = sqrt(pow(Ar, 2) - pow(a, 2));
    float x = Ax + a * (Bx - Ax) / d;
    float y = Ay + a * (By - Ay) / d;
    float Cx = x + h * (By - Ay) / d;
    float Cy = y - h * (Bx - Ax) / d;
    float Dx = x - h * (By - Ay) / d;
    float Dy = y + h * (Bx - Ax) / d;

    if (Ar + Br < d) cout << "No interception points.";
    else if (Ar + Br == d)
    {
        cout << "One interception point:" << endl;
        cout << "x= " << x << "y= " << y << endl;
    }
    else if (Ar + Br > d)
    {
        cout << "Two interception points:" << endl;
        cout << "Cx= " << Cx << endl;
        cout << "Cy= " << Cy << endl;
        cout << "Dx= " << Dx << endl;
        cout << "Dy= " << Dy << endl;
    }

    return 0;
}
