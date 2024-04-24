#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double side1, side2, angle, s ;
    cout << "Input the length of a side of the triangle :" << endl;
    cin >> side1;
    cout << "Input the length of another side of the triangle :" << endl;
    cin >> side2;
    cout << "Input the angle between these sides of the triangle : " << endl;
    cin >> angle;
    s = (side1 * side2 * sin((M_PI/180)*angle)) / 2;
    cout << "The area of the Scalene Triangle is :" << s << endl;
    return 0;
}

