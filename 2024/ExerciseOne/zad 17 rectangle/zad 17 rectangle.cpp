#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double s, p, a, b;
    cout << "Input the length of the rectangle: " << endl;
    cin >> a;
    cout << "Input the width of the rectangle: " << endl;
    cin >> b;
    s = a * b;
    p = 2 * (a + b);
    cout << "The area of the rectangle is: " << s << endl;
    cout << "The perimeter of the rectangle is: " << p << endl;
    return 0;
}

