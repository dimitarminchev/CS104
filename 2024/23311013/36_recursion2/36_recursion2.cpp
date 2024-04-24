#include <iostream>
#define print(x) std::cout<<x<<std::endl;
using namespace std;

int power(int a, int n)
{
    if (n == 1) return a;

    return a * power(a, n - 1);
}

int main()
{
    int a, n;

    print("Enter a, n: ");
    cin >> a >> n;

    print(a << "^" << n << " = " << power(a, n))
    return 0;
}
