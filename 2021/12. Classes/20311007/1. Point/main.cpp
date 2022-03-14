#include<iostream>
#include<cmath>
using namespace std;

// Point 
#include "point.h"

// Distance between 2 Point
double distance(point A, point B)
{
    return sqrt(pow(A.getX() - B.getX(), 2) + 
                pow(A.getY() - B.getY(), 2));
}

// Main Method
int main()
{
    // Input
    int Ax, Ay, Bx, By;
    cout << "Please enter 2 points coordinates:" << endl;
    cin >> Ax >> Ay >> Bx >> By;
 
    // Creating 2 objects, instance of the class Point
    point A, B(Bx, By); 
    A.setX(Ax);
    A.setY(Ay);

    // Print points coordinates
    A.print();
    B.print();

    // Distance between 2 points
    cout << "R = " << distance(A, B) << endl;

    return 0;
}
