#include <iostream>
using namespace std;

int main() {
    int N, num1, num3, num5, total;
    cout << "Number = ?" << endl;
    cin >> N;

    num1 = (N / 10000) % 10;
    num3 = (N / 100) % 10;
    num5 = (N / 1) % 10;
    total = num1 + num3 + num5;

    cout << "Sum of odds is " << total << endl;
    return 0;
}
