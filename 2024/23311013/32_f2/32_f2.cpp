#include<iostream>
#include<cmath>
#define print(x) std::cout<<x<<std::endl;
using namespace std;

int main()
{

    int x, n;
    int sum = 0;

    print("Enter a value of x: ");
    cin >> x;

    print("Enter a value of k: ");
    cin >> n;

    for (int k = 1; k <= n; ++k)
    {
        sum += (pow((-1), k) * pow(x, k));
    }

    print("Sum = " << sum);
    return 0;
}