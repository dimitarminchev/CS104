#include <iostream>
#include <cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()

{
    int k;
    print("Enter a number: ");
    cin >> k;

    for (int i = 1; i <= k; ++i)
    {
        float d = 1.0 / i; pow(i, 2);
        print("1/" << i << " = " << d);
    }

    return 0;
}