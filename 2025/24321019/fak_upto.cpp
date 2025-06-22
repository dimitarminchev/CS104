#include <iostream>
using namespace std;

int main() {
    int n, fact = 1; // input number and factorial start at 1
    cout << "Enter a number: "; // ask user for number
    cin >> n; // read number
    for (int i = 2; i <= n; i++) // loop from 2 to n
        fact *= i; // multiply fact by i each iteration
    cout << "Factorial: " << fact << endl; // output factorial result
}
