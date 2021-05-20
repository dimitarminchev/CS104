#include<iostream>
using namespace std;

#include "point.h"

// Default Constructor
point::point()
{
    x = 0;
    y = 0;
    cout << "Default Constructor" << endl;
}

// Overloaded Constructor
point::point(int a, int b)
{
    x = a;
    y = b;
    cout << "Overloaded Constructor" << endl;
}

// Destructor
point::~point()
{
    cout << "Destructor" << endl;
}

// X Setter (Modifier)
void point::setX(int a)
{
    x = a;
}

// Y Setter (Modifier)
void point::setY(int a)
{
    y = a;
}

// X Getter
int point::getX()
{
    return x;
}

// Y Getter
int point::getY()
{
    return y;
}

// Print
void point::print()
{
    cout << "Point: x = " << x << ", y= " << y << endl;
}