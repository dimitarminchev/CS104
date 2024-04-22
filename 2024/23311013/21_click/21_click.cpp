#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    for (int k = 1; k <= 100; k++)
    {
        int a = (k / 10) % 10;
        int b = (k / 1) % 10;

        if ((k % 7 == 0) || (a == 7) || (b == 7))
        {
            print("Click");
        }
        else
            print(k << " ");
    }
    return 0;

}