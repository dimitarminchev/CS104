#include <iostream>
using namespace std;

// Recursively print powers of 2 up to n
void powersOfTwo(int n, int i = 0) {
    if ((1 << i) > n) // if 2^i > n, stop recursion
        return;
    cout << "2^" << i << " = " << (1 << i) << endl; // print current power of 2
    powersOfTwo(n, i + 1); // call for next power
}

int main() {
    int limit;
    cout << "Enter a limit: ";
    cin >> limit; // read upper limit
    powersOfTwo(limit); // start recursive printing
    return 0;
}
