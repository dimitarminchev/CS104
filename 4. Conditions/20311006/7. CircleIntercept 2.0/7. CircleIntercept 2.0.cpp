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
    float a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
    float h= sqrt(pow(Ar, 2) - pow(a, 2));
    float x = Ax + a * (Bx - Ax) / d;
    float y = Ay + a * (By - Ay) / d;
    float Cx = x + (By - Ay) * h / d;
    float Cy = y - (Bx - Ax) * h / d;
    float Dx = x - (By - Ay) * h / d;
    float Dy = y + (Bx - Ax) * h / d;
    if (Ar + Br < d)   cout << "No interception points.";
    else if (Ar + Br == d)
    {
        cout << "One interception point." << endl;
        cout << "x = " << x << ", y = " << y << endl;
    }
    else if (Ar + Br > d)
    {
        cout << "Two interception points." << endl;
        cout << "Cx = " << Cx << ", Cy = " << Cy << endl;
        cout << "Dx = " << Dx << ", Dy = " << Dy << endl;
    }
    return 0;
}
