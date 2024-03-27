#include<iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; ++i) {
        double d = 1.0 / i;
        cout << d << " ";
    }

    return 0;
}