#include <iostream>
using namespace std;
int main()
{
    float r;

    cout << "r=";
    cin >> r;

    float p = 2 * 3.1415 * r;
    float s = 3.1415 * r * r;
    float v = (4.0/3.0) + 3.1415 * r * r * r;

    cout << "p=" << s << endl;
    cout << "s=" << s << endl;
    cout << "v=" << s << endl;

    return 0;
}