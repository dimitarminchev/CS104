#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Ax, Ay, Ar, Bx, By, Br;

    cout << "Enter first circle parameters\nX: ";
    cin >> Ax;
    cout << "Y: ";
    cin >> Ay;
    cout << "r: ";
    cin >> Ar;

    cout << "\nEnter second circle parameters\nX: ";
    cin >> Bx;
    cout << "Y: ";
    cin >> By;
    cout << "r: ";
    cin >> Br;

    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

    if (Ar + Br < d) cout << "\nNo interception points. \n";
    else if (Ar + Br == d) cout << "\nOne interception point. \n";
    else if (Ar + Br > d) cout << "\nTwo interception point. \n";

    return 0;
}