#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int a;
    cin >> a;

    int a5 = (a / 10000) % 10;
    int a4 = (a / 1000) % 10;
    int a3 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a1 = a % 10;

    int sum = a1 + a3 + a5;

    print("The sum of the digits is: " << sum);
    return 0;
}

