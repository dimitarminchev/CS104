#include <iostream>
using namespace std;

int powerOfTwo(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return 2 * powerOfTwo(n - 1);
    }
}

int main() {
    int n;
    cout << "N = ";
    cin >> n;

    cout << "N^" << n << " = " << powerOfTwo(n) << endl;

    return 0;
}