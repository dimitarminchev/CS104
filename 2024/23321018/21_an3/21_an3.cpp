// Output the row An = (1 + (1/n))^n

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Enter a positive integer." << endl;
        return 1;
    }

    cout << "The row An = (1 + (1/n))^n for n = 1 to " << n << " is:" << endl;

    for (int i = 1; i <= n; ++i) {
        double An = pow(1.0 + (1.0/ i), i);
        cout << An << endl;
    }

    return 0;
}
