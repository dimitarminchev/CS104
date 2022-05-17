#include <iostream> 
#include <cmath> 
using namespace std;

int main()
{
    float x1, y1, r1, x2, y2, r2;
    cout << "Please enter first circle (x,y,r): ";
    cin >> x1 >> y1 >> r1;

    cout << "Please enter second circle (x,y,r): ";
    cin >> x2 >> y2 >> r2;
    float d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    if (d > r1 + r2)
    {
        cout << "Circles Not Itercepts";
    }
    if (d == r1 + r2)
    {
        cout << "Circles Has One Intercept Point";
    }
    if (d < r1 + r2) {
        cout << "Circles Has Two Intercept Points";
    }
    return 0;
}