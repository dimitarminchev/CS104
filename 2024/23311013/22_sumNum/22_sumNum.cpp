#include <iostream>
#include <cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n;
    print("Задай до кое число да сметнем сумата");
    cin >> n;

    int sum = 0;

    for (int k = 1; k <= n; k++)
    {
        sum = sum + k;
    }

    print(sum);

    return 0;

}