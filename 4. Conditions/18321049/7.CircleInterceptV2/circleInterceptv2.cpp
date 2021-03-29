// Упражнение 7 - допиратлени на окръжност v.2

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
    float h = sqrt(pow(Ar, 2) - pow(a, 2));
    float interX = Ax + a * (Bx - Ax) / d;
    float interY = Ay + a * (By - Ay) / d;    

    float Cx = interX + h * (By - Ay) / d;
    float Cy = interY - h * (Bx - Ax) / d;
    float Dx = interX - h * (By - Ay) / d;
    float Dy = interY + h * (Bx - Ax) / d;

    if (Ar + Br < d) cout << "\nNo interception points. \n";
    else if (Ar + Br == d) cout << "\nOne interception point: C:(" << interX << ";" << interY << ") \n";
    else if (Ar + Br > d) cout << "\nTwo interception point: C:(" << Cx << ";"<< Cy << ") D:(" << Dx << ";" << Dy << ") \n";

    return 0;
}