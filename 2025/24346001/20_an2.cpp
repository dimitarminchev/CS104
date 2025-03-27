// an2.cpp = Изведете редицата: An = 1 / (n^2)


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "A_" << i << " = " << 1.0 / (i * (double)i) << endl;
    }

    return 0;
}
