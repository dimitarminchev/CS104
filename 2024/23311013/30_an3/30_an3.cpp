#include<iostream>
#include<cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int k;
    print("Enter a number");
    cin >> k;

    for (int n = 1; n <= k; ++n)
    {
        float d = pow((1.0 + (1.0 / n)), n);
        print("(1 +" << " 1/" << n << ") ^ " << n << " = " << d);
    }

    return 0;
}