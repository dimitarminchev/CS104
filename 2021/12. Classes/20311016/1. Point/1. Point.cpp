#include<iostream>
#include<cmath>

class point
{
private:
	int x, y;
public:
	point();
	point(int a, int b);
	~point();
	void setX(int a);
	void setY(int a);
	int getX();
	int getY();
	void print();
};

point::point()
{
	x = 0;
	y = 0;
	std::cout << "Default Constructor" << std::endl;
}

point::point(int a, int b)
{
	x = a;
	y = b;
	std::cout << "Overloaded Constructor" << std::endl;
}

point::~point()
{
	std::cout << "Destructor" << std::endl;
}

void point::setX(int a)
{
	x = a;
}
void point::setY(int a)
{
	y = a;
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
	std::cout << "Point: x = " << x << ", y = " << y << std::endl;
}

double distance(point A, point B)
{
	return sqrt(pow(A.getX() - B.getX(), 2) + pow(A.getY() - B.getY(), 2));
}

int main()
{
	int Ax, Ay, Bx, By, x, y;
	std::cout << "Please enter 2 points coordinates:" << std::endl;
	std::cin >> Ax >> Ay >> Bx >> By;

	point A, B(Bx, By);

	std::cin >> x >> y;
	A.setX(Ax);
	A.setY(Ay);

	A.print();
	B.print();

	std::cout << "R= " << distance(A, B) << std::endl;
}