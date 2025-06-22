#include <iostream>
using namespace std;

int main() {
    int num; // define num as integer - has to be 3 digit
    cout << "Enter a three-digit number: ";
    cin >> num; // read num fron console
    int reversed = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100); // reverse - gets units, tens, and hundreds digits and reorders them
    cout << "Reversed: " << reversed << endl; // type out reversed num using reversed integer
}
