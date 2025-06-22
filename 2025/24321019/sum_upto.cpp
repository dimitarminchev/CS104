#include <iostream>
using namespace std;

int main() {
    int n, sum = 0; // input number and sum initialized to 0
    cout << "Enter a number: "; // ask user for number
    cin >> n; // read number from input
    for (int i = 1; i <= n; i++) // loop from 1 to n
        sum += i; // add i to sum each loop
    cout << "Sum: " << sum << endl; // print total sum
    return 0; // end program
}
