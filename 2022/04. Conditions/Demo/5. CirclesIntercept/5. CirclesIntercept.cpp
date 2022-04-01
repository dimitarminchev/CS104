#include <iostream> // cout, cin
#include <cmath> // sqrt
using namespace std;
int main()
{
    // Необходими променливи
    float x1, y1, r1, x2, y2, r2;

    // Въвеждане на данни от потребител
    cout << "Please enter first circle (x,y,r): ";
    cin >> x1 >> y1 >> r1;

    cout << "Please enter second circle (x,y,r): ";
    cin >> x2 >> y2 >> r2;

    // Изчисляваме разстоянието между центровете на кръговете
    float d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    // Проверка колко пресечни точки имаме
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
