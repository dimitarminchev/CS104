#include <iostream>
using namespace std;
int main()
{
 
    float a, b;

    cout << "a=";
    cin >> a;

    cout << "b=";
    cin >> b;

    float p = 2 * (a + b);
    float s = a * b;

    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    return 0;
}