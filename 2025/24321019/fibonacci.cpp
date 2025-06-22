#include <iostream>
using namespace std;

int main() {
    int n; // limit for fibonacci sequence
    cout << "Up to which number? "; // ask user for max number
    cin >> n; // read input

    int a = 0, b = 1; // start Fibonacci with 0 and 1
    while (a <= n) { // loop while current number <= n
        cout << a << " "; // print current Fibonacci number
        int next = a + b; // calculate next Fibonacci number
        a = b; // shift a to b
        b = next; // shift b to next
    }
    cout << endl; // new line after loop
    return 0; // end program
}
