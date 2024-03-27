//Output the row An = 1/n

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    cout << "The row A_n = 1/n for n = 1 to " << n << " is:" << endl;

    for (int i = 1; i <= n; ++i) {
        cout << "A_" << i << " = 1/" << i << endl;
    }

    return 0;
}


