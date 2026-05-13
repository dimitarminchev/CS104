#include <iostream>
using namespace std;

// fak function
int fak (int n) {
    if (n<= 1) return 1;
    else return n * fak(n - 1);
}

// not fak function
int main () {
    int n;
    cout << "n=";
    cin >> n;
    cout << "n!=" << fak(n) << endl;
    return 0;
}