#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Please add a five digit number example 12345" << endl;
    cin >> x;
    int a1 = (x / 10000) % 10;
    int a3 = (x / 100) % 10;
    int a5 = (x / 1) % 10;
    cout << "the sum of the numbers with odd positions: " << a1 + a3 + a5 << endl;
    return 0;
}
