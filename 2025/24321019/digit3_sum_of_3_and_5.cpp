#include <iostream>
using namespace std;

int main() {
    int sum = 0; // start sum at 0
    for (int i = 100; i <= 999; i++) // loop through all 3-digit numbers
        if (i % 3 == 0 && i % 5 == 0) // check if divisible by 3 AND 5
            sum += i; // add to sum if yes
    cout << "Sum: " << sum << endl; // print final sum
    return 0; // end program
}
