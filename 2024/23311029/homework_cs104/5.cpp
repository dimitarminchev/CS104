#include <iostream>
using namespace std;
int main() {
    int k;
    cin >> k;

    int stot = (k / 100) % 10;
    int des = (k / 10) % 10;

    int num1 = (k / 1000) * 100 + stot * 10 + (k % 10);
    int num2 = (k / 1000) * 100 + des * 10 + (k % 10);

    cout << num1 + num2;
    return 0;
}
