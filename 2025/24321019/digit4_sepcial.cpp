#include <iostream>
using namespace std;

int main() {
    for (int i = 1000; i <= 9999; i++) { // loop through all 4-digit numbers
        int d1 = i / 1000; // first digit (thousands)
        int d2 = (i / 100) % 10; // second digit (hundreds)
        int d3 = (i / 10) % 10; // third digit (tens)
        int d4 = i % 10; // fourth digit (ones)
        if ((d3 + d4) == (d1 + d2)) // check if sum last two digits == sum first two digits
            cout << i << endl; // print number if condition is true
    }
}
