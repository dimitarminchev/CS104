// Output the row An = 1 / (n^2)
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

    cout << "The row A_n = 1/n^2 for n = 1 to " << n << " is:" << endl;

    for (int i = 1; i <= n; ++i) {
        cout << "A_" << i << " = 1/" << i * i << endl;
    }

    return 0;
}
