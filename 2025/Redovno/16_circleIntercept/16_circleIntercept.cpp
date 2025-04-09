#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Декларираме променливи за координати на центровете и радиуси
    float x1, y1, r1, x2, y2, r2;

    // Въвеждане на кооринати на центровете и радиуси
    cout << "Circle one [x,y,r]: ";
    cin >> x1 >> y1 >> r1;
    cout << "Circle two [x,y,r]: ";
    cin >> x2 >> y2 >> r2;

    // Изчисляване на разстоянията между центровете на окръжностите
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Проверки
    if (d > r1 + r2) cout << "Cirles do not intercept." << endl;
    if (d == r1 + r2) cout << "Cirles intercepts in 1 point." << endl;
    if (d < r1 + r2) cout << "Cirles intercepts in 2 points." << endl;

    return 0;
}
