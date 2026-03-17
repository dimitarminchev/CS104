#include <iostream>
using namespace std;

void powersOfTwo(int current, int n) {
    if (current > n)
        return;
    cout << current << " ";
    powersOfTwo(current * 2, n);
}

int main() {
    int n;
    cin >> n;

    powersOfTwo(1, n);

    return 0;
}