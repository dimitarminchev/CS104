#include<iostream>
using namespace std;
int main()
{
    // Declare 3 variables for integer numbers
    int a, b, c;


    // User interface (UI/UX)

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    double D = b * b - 4 * a * c;

    if (D > 0)
        // Solve the task
    {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "x1 =" << x1;
        cout << "x2 =" << x2;
    }

    else if (D == 0)
    {
        double x = -b / (2 * a);
        cout << "x = " << x << endl;

    }
    else
    {
        cout << "No real roots" << endl;
    }
    return 0;
}