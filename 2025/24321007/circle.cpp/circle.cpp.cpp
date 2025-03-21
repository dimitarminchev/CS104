#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float r;

    cout << "Enter the radius of the circle in cm " << endl;
    cin >> r;

    
    float p = 2 * 3.14 * 2;
    float s = 3.14 * 3.14 * r;
    float v = (4.0 / 3.0) * 3.14 * r * r * r;

    cout << "The perimeter of the circle is :" << endl;
    cout << p << endl;

    cout << "The face of the circle is :" << endl;
    cout << s << endl;

    cout << "The volume of the circle is :" << endl;
    cout << v << endl;


    return 0;
}
