#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1, y1, r1;
    float x2, y2, r2;

    cout << "First circle (x,y,r): ";
    cin >> x1 >> y1 >> r1;
    cout << "Second circle (x,y,r): ";
    cin >> x2 >> y2 >> r2;

    float distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    if (distance > r1 + r2)
    {
        cout << "Circles Not Itercepts";
    }
    else if (distance == r1 + r2)
    {
        cout << "Circles Has One Intercept Point";
    }
    else 
    {
        cout << "Circles Has Two Intercept Points";
    }

    return 0;
}