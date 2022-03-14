#include <iostream>
using namespace std;
int main()
{ // 5. Transport
    int b1, b2, b3 = 29, n, nb1, nb2;
    cout << "bus1=?, bus2=?" << endl;
    cin >> b1 >> b2;
    n = (b1 + b2) / 3;
    nb1 = n - b1;
    nb2 = n - b2;
    cout << "b1:" << nb1 << " b2:" << nb2 << " b3:" << b3;
    return 0;
}