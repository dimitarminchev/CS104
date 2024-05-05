#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;
#include<cmath>

int main()
{
    int a, b, c;

    print("Enter a, b, c");
    cin >> a >> b >> c;

    double d = pow(b, 2) - 4 * a * c;

    if (d < 0) print("No real solution");
    if (d == 0) print("d = 0, x = " << (-b) / (2 * a))

        if (d > 0) {
            double x1 = ((-b) + sqrt(d) / (2 * a));
            double x2 = ((-b) - sqrt(d) / (2 * a));

            print("d = " << d);
            print("x1 = " << x1);
            print("x2 = " << x2);
        }

    return 0;
}

