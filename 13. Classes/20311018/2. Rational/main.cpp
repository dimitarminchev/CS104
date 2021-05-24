#include <iostream>
#include "rational.h"
using namespace std;

extern int sign;

int main()
{
    rational A(1, 4);
    rational B(2, 6);

    rational C = A + B;
    A.print();
    cout << " + ";
    B.print();
    cout << " = ";
    C.print();
    cout << endl;

    rational D = A - B;
    A.print();
    cout << " - ";
    B.print();
    cout << " = ";
    if (sign == 1)
    {
        cout << "-";
        sign = 0;
    }
    D.print();
    cout << endl;

    rational E = A * B;
    A.print();
    cout << " * ";
    B.print();
    cout << " = ";
    E.print();
    cout << endl;

    rational F = A / B;
    A.print();
    cout << " / ";
    B.print();
    cout << " = ";
    F.print();
    cout << endl;

    return 0;
}