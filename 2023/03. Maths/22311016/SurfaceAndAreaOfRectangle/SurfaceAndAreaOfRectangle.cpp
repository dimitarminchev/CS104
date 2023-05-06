#include <iostream>
using namespace std;
int main()

{

    float a, b;

    cout << "Please input value for a = ";
    cin >> a;
    cout << "Please input value for b = ";
    cin >> b;

    float p = 2 * (a + b);
    float s = a * b;

    cout << "The rectanle's perimeter P = " << p << endl;
    cout << "The rectangle's area S = " << s << endl;

    return 0;
}