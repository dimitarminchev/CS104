#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) { // loop from 1 to 100
        if (i % 7 == 0) // if i is divisible by 7
            cout << "Click!" << endl; // print "Click!"
        else
            cout << i << endl; // otherwise print the number
    }
}
