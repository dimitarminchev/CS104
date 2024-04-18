#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int  D = b * b - 4 * a * c;

    if (D == 0)
    {
        double x = ((-b) + sqrt(D)) / (2 * a);

        cout << "D is 0 there is only on X: " << x;
    }
    else if (D < 0)
    {
        cout << "NoRealSolution";
    }
    else if (D > 0)
    {
        double x1 = ((-b) + sqrt(D)) / (2 * a);

        double x2 = ((-b) - sqrt(D)) / (2 * a);

        cout << x1 << " " << x2;
    }


    return 0;
}
