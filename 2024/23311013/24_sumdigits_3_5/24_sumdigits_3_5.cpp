#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int sum = 0;
    for (int k = 100; k <= 999; k++)
    {


        if ((k % 3 == 0) && (k % 5 == 0))
        {
            sum = sum + k;

        }

    }
    print(sum);
    return 0;
}