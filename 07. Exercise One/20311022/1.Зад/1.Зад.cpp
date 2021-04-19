#include <iostream>
using namespace std;
int main() {
    cout << " Add Parameters A, B, C, D1, D2, D3" << endl;
    float A, B, C, D1, D2, D3, V, debit, time;
    cin >> A >> B >> C >> D1 >> D2 >> D3;
    V = A * B * C;
    debit = D1 + D2 + D3;
    time = V / debit;
    cout << "The time it takes to fill the volume is: " << time << " hours." << endl;
    return 0;
}