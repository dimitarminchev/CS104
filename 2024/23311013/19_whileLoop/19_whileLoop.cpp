#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int a = 1;
    while (a <= 100);
    {
        print(a << " ");
        a++;
    }
    cout << endl;
    return 0;
}