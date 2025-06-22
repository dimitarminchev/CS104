#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, n; // base x and number of terms n
    cout << "Enter x and n: "; // ask user for x and n
    cin >> x >> n; // read x and n
    double sum = 0; // initialize sum
    for (int k = 1; k <= n; k++) // loop k from 1 to n
        sum += pow(x, k); // add x^k to sum
    cout << "Sum: " << sum << endl; // print the sum
    return 0; // end program
}
