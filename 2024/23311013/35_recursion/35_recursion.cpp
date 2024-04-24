#include <iostream>
#define print(x) std::cout<<x<<std::endl;
using namespace std;

int power(int n)
{
    if (n == 1) return 2;

    return 2 * power(n - 1);
}

int main()
{
    int n;
    print("Enter a number: ");
    cin >> n;

    print("pow(2, " << n << ") is " << power(n));

    return 0;
}
