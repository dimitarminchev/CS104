// 06. Общи точки на окръжности

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Определяне на променливи
    float Ax, Ay, Ar, Bx, By, Br;

    // Въвеждане на стойностите
    cout << "Enter first circle parameters X Y R: " << endl;
    cin >> Ax >> Ay >> Ar;

    cout << "Enter second circle parameters X Y R: " << endl;
    cin >> Bx >> By >> Br;

    // Извършване на изчисленията
    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

    // Резултати
    if (Ar + Br < d) cout << "No interception points." << endl;
    else if (Ar + Br == d) cout << "One interception point." << endl;
    else if (Ar + Br > d) cout << "Two interception point." << endl;

    return 0;
}