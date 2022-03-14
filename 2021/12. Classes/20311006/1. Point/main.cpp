#include <iostream>
#include <cmath>
using namespace std;
#include "point.h"

double distance(point A, point B)
{
   return sqrt(pow(A.getX() - B.getX(), 2) + pow(A.getY() - B.getY(), 2));
}

int main()
{
    int Ax, Ay, Bx, By;
    cout << "Please enter 2 points coordinates" << endl;
    cin >> Ax >> Ay >> Bx >> By;
    point A, B(2, 2);
    A.setX(Ax);
    A.setY(Ay);
    B.setX(Bx);
    B.setY(By);

    cout << A.getX() << endl;
    A.print();
    B.print();
    cout << "R = " << distance(A, B) << endl;
    return 0;
}