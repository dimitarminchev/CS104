#include <iostream>
using namespace std;

int power(int a, int n)

{
    if(n == 1) return a;
    return a * power(a - 1);
}

int main()

{
    int n, a;
    cout << "Enter a, n: " << endl;
    cin >> a >> n;
    cout << a << " ^ " << n << "= " << power(a, n) <<
    return 0;
}