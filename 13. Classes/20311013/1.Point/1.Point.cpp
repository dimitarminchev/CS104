#include<iostream>
#include<cmath>
using namespace std;
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
    cout << "Default Constructor" << endl;
}
point::point(int a, int b)
{
    x = a;
    y = b;
    cout << "Overloaded Constructor" << endl;
}
point::~point()
{
    cout << "Destructor" << endl;
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
    cout << "Point: x = " << x << ", y = " << y << endl;
}

double distance(point A, point B)
{
    return sqrt(pow(A.getX() - B.getX(), 2) + pow(A.getY() - B.getY(), 2));
}
int main()
{
    int Ax, Ay, Bx, By;
    cout << "Please enter 2 points coordinates:" << endl;
    cin >> Ax >> Ay >> Bx >> By;

    point A, B(Bx,By);

    cin >> x >> y;
    A.setX(Ax);
    A.setY(Ay);

    A.print();
    B.print();

    cout << "R= " << distance(A, B) << endl;
    return 0;
}