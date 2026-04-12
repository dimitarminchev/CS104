#include <iostream>
using namespace std;

long long fact(int n)
{
    if (n == 0) return 1;
    return n * fact(n - 1);
}

long long combinations(int n, int k)
{
    return fact(n) / (fact(k) * fact(n - k));
}

int main()
{
    cout << "5 ot 35: " << combinations(35, 5) << endl;
    cout << "6 ot 42: " << combinations(42, 6) << endl;
    cout << "6 ot 49: " << combinations(49, 6) << endl;

    cin.get();
    return 0;
}

