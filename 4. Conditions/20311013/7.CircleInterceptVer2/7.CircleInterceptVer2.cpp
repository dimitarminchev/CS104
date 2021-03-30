#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float Ax, Ay, Ar, Bx, By, Br, d;
    cout << "Enter [x y r] of the first circle: " << endl;
    cin >> Ax >> Ay >> Ar;
    cout << "Enter [x y r] of the second circle: " << endl;
    cin >> Bx >> By >> Br;
    d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));
    if ((Ar + Br) < d) cout << "No interception points." << endl;
    if ((Ar + Br) == d) cout << "One interception point." << endl;
    if ((Ar + Br) > d)
    {
        cout << "Two interception points." << endl;
        float a, b, h, Tx, Ty, Cx, Cy, Dx, Dy;
        b = (pow(Br, 2) - pow(Ar, 2) + pow(d, 2)) / 2*d;
        a = d - b;
        h = sqrt(pow(Br, 2) - pow(b, 2));
        Tx = Ax + ((a / d) * (Bx - Ax));
        Ty = Ay + ((a / d) * (By - Ay));
        Cx = Tx + (((By - Ay) / d) * h);
        Cy = Ty - (((Bx - Ax) / d) * h);
        Dx = Tx - (((By - Ay) / d) * h);
        Dy = Ty - (((Bx - Ax) / d) * h);
        cout << "Cx=" << Cx << " Cy=" << Cy << endl;
        cout << "Dx=" << Dx << " Dy=" << Dy << endl;
    }
    return 0;
}