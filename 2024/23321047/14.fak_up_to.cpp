#include<iostream>
using namespace std;

int main() {

    int fak;
    long sum = 1;

    cout << "Enter a number: ";
    cin >> fak;

    for (int i = 1; i <= fak; i++) {
        sum *= i;
    }

    cout << "The factorial of " << fak << " is " << sum << endl;
    return 0;
}