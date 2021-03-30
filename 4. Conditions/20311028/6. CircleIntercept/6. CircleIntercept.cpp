// 06. Имат ли две октръжности общи точки?

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Създаване на променливите
    float Ax, Ay, Ar, Bx, By, Br;

    // Въвеждане на стойностите
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

    // Извършване на изчисленията
    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

    // Отпечатване на резултата
    if (Ar + Br < d) cout << "\nNo interception points. \n";
    else if (Ar + Br == d) cout << "\nOne interception point. \n";
    else if (Ar + Br > d) cout << "\nTwo interception point. \n";

    return 0;
}