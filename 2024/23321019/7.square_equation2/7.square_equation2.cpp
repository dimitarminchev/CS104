//Подобрение решението на квадратното уравнение
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter the coefficients (a, b, and c) of the quadratic equation: ";
    cin >> a >> b >> c;

    float d = b * b - 4 * a * c;

    if (d > 0) {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        cout << "The quadratic equation has two real and distinct roots:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (d == 0) {
        float x = -b / (2 * a);
        cout << "The quadratic equation has one real root:" << endl;
        cout << "x = " << x << endl;
    }
    else {
        cout << "The quadratic equation has no real roots." << endl;
    }

    return 0;
}
