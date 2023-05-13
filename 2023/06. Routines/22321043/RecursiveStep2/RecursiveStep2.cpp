#include <iostream>
using namespace std;
int step2(int n)
{
    if (n == 1) return 2;
    else return 2 * step2(n - 1);
}
int main()
{
    cout << step2(10) << endl;
    return 0;
}
