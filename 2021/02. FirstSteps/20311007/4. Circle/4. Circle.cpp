#include<iostream> 
#include<cmath> 
using namespace std;

int main()
{
    float r, p, s;
    float PI = acos(-1.0);

    cout << "r=";
    cin >> r;

    p = 2 * PI * r;
    s = PI * pow(r, 2);

    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    return 0;
}