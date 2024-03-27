#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        double d =  pow((1 + (1.0 / i)), i);
        cout << d << " ";
    }

    return 0;
}