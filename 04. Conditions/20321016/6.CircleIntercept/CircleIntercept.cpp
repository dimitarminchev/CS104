// CircleIntercept.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    float Ax, Ay, Ar, Bx, By, Br;

    
    cout << "Enter first circle parameters X Y R: " << endl;
    cin >> Ax >> Ay >> Ar;

    cout << "Enter second circle parameters X Y R: " << endl;
    cin >> Bx >> By >> Br;

    
    float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

    
    if (Ar + Br < d) cout << "No interception points." << endl;
    else if (Ar + Br == d) cout << "One interception point." << endl;
    else if (Ar + Br > d) cout << "Two interception point." << endl;

    return 0;
}