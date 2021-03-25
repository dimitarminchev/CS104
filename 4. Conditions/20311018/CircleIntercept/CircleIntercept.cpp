#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float Ax, Ay, Ar, Bx, By, Br;

    cout << "Enter 1st circle x,y,r" << endl;
    cin >> Ax >> Ay >> Ar;
    cout << "Enter 2nd circle x,y,r" << endl;
    cin >> Bx >> By >> Br;

    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

    if (Ar + Br < d) cout << " no interception point." << endl;
    else if (Ar + Br == d) cout << " one interception point." << endl;
    else if (Ar + Br > d) cout << " two interception point." << endl;
    return 0;
}