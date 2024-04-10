#include<iostream>
using namespace std;
int main()
 {
    int r;

    cout << "r=";
    cin >> r;

    int p = 2 * 3.14 * r;
    int s = 3.14 * r * r;
    int v = 4 * 3.14 * r * r;

    cout << "p=" << p << endl;
    cout << "s=" << s << endl;
    cout << "v=" << v << endl;
    return 0;
 }