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
    if ((Ar + Br) > d) cout << "Two interception points." << endl;
    return 0;
}