#include <iostream>
using namespace std;
#include "rational.h"

int main()
{
    // Rational Number
    rational A(1, 4);
    rational B(2, 6);
    rational C = A + B;
    rational D = A - B;
    rational E = A * B;
    rational F = A / B;

    // Sum
    A.print();
    cout << " + ";
    B.print();
    cout << " = ";
    C.print();
    cout << endl;
   
    // Difference
    A.print();
    cout << " - ";
    B.print();
    cout << " = ";
    D.print();
    cout << endl;
    
    // Product
    A.print();
    cout << " * ";
    B.print();
    cout << " = ";
    E.print();
    cout << endl;
   
    // Quotient
    A.print();
    cout << " / ";
    B.print();
    cout << " = ";
    F.print();
    cout << endl;

    return 0;

}
