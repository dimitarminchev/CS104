// Извеждане на координати на пресечни точки на две окръжности
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float Ax, Ay, Ar, Bx, By, Br, a, b, h, Tx, Ty, Cx, Cy, Dx, Dy;

    cout << "Enter first circle [x y r]:" << endl;
    cin >> Ax >> Ay >> Ar;
    cout << "Enter second circle [x y r]:" << endl;
    cin >> Bx >> By >> Br;

    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

    if (Ar + Br < d) cout << "No interception points." << endl;
    if (Ar + Br == d) cout << "One interception point." << endl;
    if (Ar + Br > d) cout << "Two interception points.";
    b = (pow(Br, 2) - pow(Ar, 2) + pow(d, 2));
    a = d - b;
    h = sqrt(pow(Br, 2) - pow(b, 2);
    Tx = Ax + a / d * (Bx - Ax);
    Ty = Ay + a / d * (By - Ay);
    Cx = Tx + ((By - Ay) / d) * h;
    Cy = Ty - ((Bx - Ax) / d) * h;
    Dx = Tx - ((By - Ay) / d) * h;
    Dy = Ty + ((Bx - Ax) / d) * h;
    cout << "Cx:Cy="; cout << Cx << cout << Cy << endl;


    return 0;
}
