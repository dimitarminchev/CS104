#include <iostream>
using namespace std;

int main() {
    int n; // input number of terms
    cout << "Enter n: "; // ask user for n
    cin >> n; // read n
    double sum = 0; // initialize sum
    for (int k = 1; k <= n; k++) // loop from 1 to n
        sum += 1.0 / k; // add 1/k to sum
    cout << "Sum: " << sum << endl; // print final sum
    return 0; // end program
}
