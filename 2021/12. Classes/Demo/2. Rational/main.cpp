#include <iostream>
using namespace std;

// Rational Number Class
#include "rational.h"

// Main Method
int main()
{
    // Rational Number
    rational A(1, 4);
    rational B(2, 6);
    rational C = A + B;

    // Print
    A.print();
    cout << " + ";
    B.print();
    cout << " = ";
    C.print();
    cout << endl;

    return 0;
}
