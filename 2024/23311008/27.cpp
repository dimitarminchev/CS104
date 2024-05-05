#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;

            }
        }
        if (isPrime) print(i << "");
    }
    return 0;

}