// Упражнение 6 - допирателни на окръжности

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

    if (Ar + Br < d) cout << "\nNo interception points. \n";
    else if (Ar + Br == d) cout << "\nOne interception point. \n";
    else if (Ar + Br > d) cout << "\nTwo interception point. \n";

    return 0;
}