#include <iostream>
using namespace std;
int main(){
    int a;

    cout << "a = ?" << endl;
    cin >> a;

    int a1 = (a / 1000) % 10;
    int a2 = (a / 100) % 10;
    int a3 = (a / 10) % 10;
    int a4 = (a / 1) % 10;

    int S = a1 + a2 + a3 + a4;
    int P = a1 * a2 * a3 * a4;

    cout << S << endl;
    cout << P << endl;

    return 0;
}