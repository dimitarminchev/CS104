#include <iostream>
using namespace std;

int main() {
    float a, b, P, S;

    cout << "a = ?, b = ?" << endl;
    cin >> a >> b;

    P = 2 * (a + b);
    S = a * b;

    cout << "P = " << P << endl;
    cout << "S = " << S << endl;

    return 0;
}