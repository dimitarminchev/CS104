#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

double distance(point A, point B)
{
    return sqrt(pow(A.getX() - B.getX(), 2) + pow(A.getY() - B.getY(), 2));
}

int main()
{
    int Ax, Ay, Bx, By;
    cout << "Please enter 2 points coordinates:" << endl;
    cin >> Ax >> Ay >> Bx >> By;

    point A, B(Bx, By);
    A.setX(Ax);
    A.setY(Ay);

    cout << endl;
    A.print();
    B.print();

    cout << "\nR = " << distance(A, B) << endl;

    return 0;
}
