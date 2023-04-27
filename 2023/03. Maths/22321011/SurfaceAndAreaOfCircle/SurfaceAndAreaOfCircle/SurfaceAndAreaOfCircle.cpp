#include <iostream> // cout, cin
#include <cmath> // acos, pow
using namespace std;
int main()
{
    float r;

    cout << "r=";
    cin >> r;

    double pi = 2 * acos(0.0);
    float p = 2 * pi * r;
<<<<<<< HEAD
    float s = pi * pow(r, 2);
=======
    float s = pi * pow(r,2);
>>>>>>> b2123fa79974ab214be7e5272432c38eab1b3548

    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> b2123fa79974ab214be7e5272432c38eab1b3548
