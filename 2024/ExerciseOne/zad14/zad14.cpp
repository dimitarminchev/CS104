#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r;
    cout << "Input the radius of a sphere:";
    cin >> r;

    double volume = (4  * M_PI * pow(r, 3))/3;

    cout << "The volume of a sphere is :" << volume << endl;

}
