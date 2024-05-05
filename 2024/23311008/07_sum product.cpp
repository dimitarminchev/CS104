#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int a;
    cin >> a;

    int a4 = (a / 1000) % 10;
    int a3 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a1 = a % 10;

    int sum = a1 + a2 + a3 + a4;
    int product = a1 * a2 * a3 * a4;

    print("The sum of the digits is: " << sum);
    print("The product of the digits is: " << product);
    return 0;
}

