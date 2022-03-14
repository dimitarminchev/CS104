#include <iostream>;

#include "point.h";

using namespace std;

void point::setX(int xInput)
{
	x = xInput;
}

void point::setY(int yInput)
{
	y = yInput;
}

point::point()
{
	setX(0);
	setY(0);
}

point::point(int x, int y)
{
	setX(x);
	setY(y);
}

point::~point()
{

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
	cout << "Point: x = " << x << ", y= " << y << endl;
}