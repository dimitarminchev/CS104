#include<iostream>
#include "point.h"
using namespace std;

point::point()
{
    x = 0;
    y = 0;
}

point::point(int a, int b)
{
    x = a;
    y = b;
}

point::~point()
{
    // cout << "Destructor" << endl;
}

void point::setX(int a)
{
    x = a;
}

void point::setY(int b)
{
    y = b;
}

int point::getX()
{
    return x;
}

int point::getY()
{
    return y;
}

void point::print()
{
    cout << "Point: x = " << x << ", y = " << y << endl;
}