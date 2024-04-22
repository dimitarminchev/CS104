#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n;
    cin >> n;
    int  a = 1, b = 1, c = a + b;
    print(a << "" << b << "");
    while (c < n)
    {
        print(c << "");
        a = b;
        b = c;
        c = a + b;
    }

    return 0;


}