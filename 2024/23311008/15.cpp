#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;
#include<cmath>

int main()
{
    int n;

    print("1. Square");
    print("2. Rectangle");
    print("3. Circle");

    cin >> n;

    switch (n)
    {
        case 1:
            int a;
            print("a = ")
            cin >> a;
            print("P = " << 4*a);
            print("S = " << a * a);
            break;
        case 2:
            int b;
            print("a = ")
            cin >> a;
            print("b = ");
            cin >> b;

            print("P = " << (a + b) * 2);
            print("S = " << a * b);
            break;
        case 3:
            int r;
            print("r = ");
            cin >> r;
            print("P = " << 2 * M_PI * r);
            print("S = " << M_PI * r * r);
            break;
    }

    return 0;
}

