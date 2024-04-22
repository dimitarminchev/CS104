#include <iostream>
#include <cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n;
    print("Задай до кое число да сметнем произведението");
    cin >> n;

    int pro = 1;

    for (int k = 1; k <= n; k++)
    {
        pro = pro * k;
    }

    print(pro);

    return 0;
}