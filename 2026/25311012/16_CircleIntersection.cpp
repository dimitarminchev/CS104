#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Ax, Ay, Ar;
    float Bx, By, Br;

    cin >> Ax >> Ay >> Ar;
    cin >> Bx >> By >> Br;

    float d = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

    if (d > Ar + Br)
    {
        cout << "No intersection" << endl;
    }
    else if (d == Ar + Br)
    {
        cout << "One point" << endl;
    }
    else if (d < Ar + Br)
    {
        cout << "Two points" << endl;
    }

    return 0;
}