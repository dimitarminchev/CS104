// Извеждане на координати на пресечни точки на две окръжности

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float Ax, Ay, Ar, Bx, By, Br //a, b, h, Tx, Ty, Cx, Cy, Dx, Dy;

    cout << "Enter first circle [x y r]:" << endl;
    cin >> Ax >> Ay >> Ar;
    cout << "Enter second circle [x y r]:" << endl;
    cin >> Bx >> By >> Br;

    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

    if (Ar + Br < d) cout << "No interception points." << endl;
    if (Ar + Br == d) cout << "One interception point." << endl;
    if (Ar + Br > d) cout << "Two interception points."
    {
        float b = (pow(Br, 2) - pow(Ar, 2) + pow(d, 2));
        float a = d - b;
        float h = sqrt(pow(Br, 2) - pow(b, 2);
        float Tx = Ax + a / d * (Bx - Ax);
        float Ty = Ay + a / d * (By - Ay);
        float Cx = Tx + ((By - Ay) / d) * h;
        float Cy = Ty - ((Bx - Ax) / d) * h;
        float Dx = Tx - ((By - Ay) / d) * h;
        float Dy = Ty + ((Bx - Ax) / d) * h;
        cout << "Cx:Cy="; cout << Cx << cout << Cy << endl;
    }

    return 0;
}
