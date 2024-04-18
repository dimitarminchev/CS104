#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int a;
    cin >> a;

    int a6 = (a / 100000) % 10;
    int a5 = (a / 10000) % 10;
    int a4 = (a / 1000) % 10;
    int a3 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a1 = a % 10;

    print(a2 * a4 * a6);
    return 0;
}

