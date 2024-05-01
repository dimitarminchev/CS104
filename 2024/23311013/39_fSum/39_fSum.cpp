#include <iostream>
#include <cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n, x;
    int sum = 0;

    int f[100] = { 0 };

    print("Enter x, n: ");
    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        f[i] = pow(x, i + 1);
        sum = sum + f[i];
    }

    print(sum);

    return 0;
}